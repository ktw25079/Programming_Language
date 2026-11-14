"""Compile independent C exercises and check observable behavior (Python 3.10+)."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import platform
import shlex
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cc', default=os.environ.get('CC', 'cc'), help='Compiler command, e.g. gcc or "zig cc"')
    parser.add_argument('--report', action='store_true', help='Write results/verification.json and per-week transcripts')
    args = parser.parse_args()
    compiler = shlex.split(args.cc)
    programs = json.loads((ROOT/'tests/programs.json').read_text(encoding='utf-8'))
    build = ROOT/'build'
    build.mkdir(exist_ok=True)
    results = []
    logs = {}

    def check(exe, name, stdin, expected=None, code=0):
        run = subprocess.run([str(exe)], input=stdin, text=True, encoding='utf-8', capture_output=True, timeout=5)
        assert run.returncode == code, (name, 'exit', run.returncode, run.stdout, run.stderr)
        if expected is not None:
            assert run.stdout == expected, (name, 'output', run.stdout, expected)
        results.append({'case': name, 'passed': True})
        return run.stdout

    for p in programs:
        exe = build / (f"week{p['week']:02d}_{p['name']}" + ('.exe' if os.name=='nt' else ''))
        sources = [p['path']] + p['extra']
        command = compiler + ['-std=c11','-Wall','-Wextra','-Wpedantic','-Werror'] + sources + ['-o', str(exe), '-lm']
        compile_result = subprocess.run(command, cwd=ROOT, capture_output=True, text=True, timeout=180)
        if compile_result.returncode:
            raise RuntimeError(' '.join(command)+'\n'+compile_result.stderr)
        print('Compiled', p['path'], flush=True)
        if p['stdout'] is not None:
            output = check(exe, p['path'], p['stdin'], p['stdout'])
            sample_input = p['stdin']
        else:
            # First probe both ends, then exhaust the range. The final successful
            # input reveals the target, allowing every earlier hint to be checked.
            guesses = [1,100] + list(range(2,100))
            sample_input = ' '.join(map(str, guesses))+'\n'
            output = check(exe, p['path'], sample_input)
            lines = output.splitlines()
            assert lines and lines[-1]=='correct' and len(lines)<=100, p['path']
            target = guesses[len(lines)-1]
            for guess, line in zip(guesses, lines):
                assert line == ('correct' if guess==target else 'higher' if guess<target else 'lower'), (guess,target,line)
            results.append({'case':p['path']+': hint consistency and reachable target','passed':True})
        logs.setdefault(p['week'], []).append(f"$ {exe.name}\nstdin: {sample_input.strip() or '(none)'}\n{output}")
        if p['stdin'] or p['stdout'] is None:
            check(exe, p['path']+': invalid input', p.get('invalid_stdin', '?\n'), code=1)

    def exe(week, name):
        return build/(f'week{week:02d}_{name}'+('.exe' if os.name=='nt' else ''))

    check(exe(4,'assignment01_temperature'),'absolute zero','-273.15\n','kelvin=0.000 fahrenheit=-459.670\n')
    check(exe(4,'assignment01_temperature'),'below absolute zero','-274\n',code=1)
    check(exe(4,'assignment02_time'),'maximum time','596522 59 59\n','seconds=2147482799\n')
    check(exe(4,'assignment02_time'),'invalid minute','1 60 0\n',code=1)
    check(exe(5,'assignment01_calculator'),'zero divisor','2 0\n','sum=2.000 difference=2.000 product=0.000\nquotient=undefined\n')
    check(exe(5,'assignment02_expressions'),'undefined expressions','0 0 0 1 32 0 1 0 1\n','1=0.000\n2=10.000\n3=undefined\n4=0.000\n5=32.000\n6=undefined\n7=undefined\n')
    check(exe(5,'assignment03_maximum'),'equal maxima','5 5 5\n','max=5\n')
    check(exe(5,'assignment04_multiple'),'INT_MIN divisible by minus one','-1 -2147483648\n','multiple=yes\n')
    check(exe(5,'assignment04_multiple'),'not multiple','4 102\n','multiple=no\n')
    check(exe(5,'assignment04_multiple'),'zero base','0 10\n','undefined (zero divisor)\n',code=1)
    check(exe(6,'assignment01_logic'),'full int range','-2147483648 2147483647\n','0\n1\n1\n0\n1\n1\n')
    check(exe(6,'assignment01_logic'),'both zero','0 0\n','0\n1\n0\n1\n0\n0\n')
    check(exe(7,'assignment01_case'),'lowercase z','z\n','z(122) Z(90)\n')
    for ch in 'aAeEiIoOuU':
        check(exe(7,'assignment02_vowel'),'vowel '+ch,ch,'vowel\n')
    check(exe(7,'assignment02_vowel'),'consonant','Z','consonant\n')
    check(exe(8,'assignment02_table'),'continue and stop','2 1 9 0\n',''.join(f'{n} x {i} = {n*i}\n' for n in (2,9) for i in range(1,10)))
    check(exe(8,'assignment02_table'),'invalid table','10\n',code=1)
    check(exe(8,'assignment03_powers'),'negative limit','-1\n',code=1)
    for score,grade in [(0,'F'),(59,'F'),(60,'D'),(69,'D'),(70,'C'),(79,'C'),(80,'B'),(89,'B'),(90,'A'),(100,'A')]:
        check(exe(9,'assignment01_grades'),f'five-subject boundary {score}',f'{score} '*5,f'average={score:.2f} grade={grade}\n')
        check(exe(10,'assignment02_grades'),f'function boundary {score}',f'{score} '*3+'0\n',f'average={score:.2f} grade={grade}\n')
    check(exe(9,'assignment01_grades'),'fraction below A','90 90 90 90 89','average=89.80 grade=B\n')
    check(exe(9,'assignment01_grades'),'out of range score','101 0 0 0 0',code=1)
    check(exe(10,'assignment01_seconds'),'immediate sentinel','0 0 0\n','')
    check(exe(10,'assignment01_seconds'),'repeated time conversion','0 0 1 1 0 0 0 0 0','seconds=1\nseconds=3600\n')
    check(exe(10,'assignment02_grades'),'continue grades','100 100 100 1 0 0 0 0','average=100.00 grade=A\naverage=0.00 grade=F\n')
    for x,y,answer in [(3,4,81),(3,0,1),(0,0,1),(0,5,0),(-2,30,1073741824)]:
        check(exe(10,'assignment03_power'),f'power {x} {y}',f'{x} {y}',f'power={answer}\n')
    check(exe(10,'assignment03_power'),'negative exponent','3 -1',code=1)
    check(exe(10,'assignment03_power'),'overflow','100 5','error: integer overflow\n',code=1)
    check(exe(11,'assignment01_matrix'),'negative increment','-2','before:\n1 2 3\n4 5 6\nafter:\n-1 0 1\n2 3 4\n')
    check(exe(12,'assignment02_03_stack'),'stack capacity and LIFO', '+ 1 + 2 + 3 + 4 - - - - q', 'pushed\n'*3+'full\n'+''.join(f'popped={i}\n' for i in range(3,0,-1))+'empty\n')
    check(exe(12,'assignment02_03_stack'),'stack refill and negative value', '- + -1 - + 9 - q', 'empty\npushed\npopped=-1\npushed\npopped=9\n')
    for month in range(1,13):
        check(exe(7,'assignment03_ex07_quarter'),f'quarter month {month}',str(month),f'month={month} quarter={(month-1)//3+1}\n')
    for month in (0,13,-1):
        check(exe(7,'assignment03_ex07_quarter'),f'invalid month {month}',str(month),code=1)
    for boundary,rate,next_rate in [(12000000,6,15),(46000000,15,24),(88000000,24,35),(150000000,35,38),(300000000,38,40),(500000000,40,42)]:
        for income,expected_rate in [(boundary,rate),(boundary+1,next_rate)]:
            check(exe(7,'assignment03_ex06_tax_bracket'),f'textbook tax boundary {income}',str(income),f'income={income} KRW rate={expected_rate}%\n')
    check(exe(7,'assignment03_ex06_tax_bracket'),'negative income','-1',code=1)
    for name in ('assignment02_ex07_simple_interest','assignment03_ex08_compound_interest'):
        check(exe(6,name),name+' zero years','0','total=1000000.00 KRW\n')
        check(exe(6,name),name+' one year','1','total=1045000.00 KRW\n')
        check(exe(6,name),name+' negative years','-1',code=1)
    for name in ('assignment03_ex05_areas','assignment03_ex07_average'):
        check(exe(4,name),name+' nonfinite input','nan 1',code=1)
    check(exe(4,'assignment03_ex04_codes'),'question mark is valid','?','? 077 63 0x3f\n')
    harness=build/('function_contracts'+('.exe' if os.name=='nt' else ''))
    subprocess.run(compiler+['-std=c11','-Wall','-Wextra','-Wpedantic','-Werror','tests/function_contracts.c','-o',str(harness)],cwd=ROOT,check=True,capture_output=True,timeout=180)
    check(harness,'copy, recursion, minimum, stack and comparison function contracts','','')
    report={'platform':platform.platform(),'compiler':subprocess.run(compiler+['--version'],capture_output=True,text=True,check=True).stdout.splitlines()[0], 'program_count':len(programs),'case_count':len(results),'cases':results,'source_sha256':{str(p.relative_to(ROOT)).replace('\\','/'):hashlib.sha256(p.read_bytes()).hexdigest() for p in sorted(ROOT.glob('week*/*')) if p.suffix in ('.c','.h')}}
    if args.report:
        (ROOT/'results').mkdir(exist_ok=True)
        (ROOT/'results/verification.json').write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
        for week, entries in logs.items():
            folder=ROOT/f'week{week:02d}/results'
            folder.mkdir(exist_ok=True)
            (folder/'sample_run.txt').write_text('\n'.join(entries),encoding='utf-8')
    print(f"PASS: {len(programs)} programs; {len(results)} checks")


if __name__=='__main__':
    main()
