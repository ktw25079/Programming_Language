# C 자료구조 · 스택과 배열 경계 처리

수업 과제를 재구현하며 C의 배열·함수·포인터를 복습했다. **50개 프로그램을 GCC·Zig·MSVC에서 각각 178개 검사로 확인했다.**

## 용량 3의 스택 · 역순 반환과 경계 처리

배열과 `top`으로 push/pop을 구현하고, 가득 찼거나 비었을 때 배열에 접근하기 전에 처리를 끝냈다.

<table>
<tr><th>실제 입력 → 출력</th><th>결과 해석과 검증 근거</th></tr>
<tr><td><pre>+ 3 → pushed
+ 5 → pushed
+ 9 → pushed
+ 1 → full
  - → popped=9
  - → popped=5
  - → popped=3
  - → empty</pre></td><td>
<p><b>3·5·9를 넣으면 9·5·3 순서로 나온다.</b><br>네 번째 삽입은 <code>full</code>, 빈 스택의 삭제는 <code>empty</code>로 처리한다.</p>
<p>MSVC 실행 로그의 명령과 출력을 한 줄씩 대응했다. 마지막 <code>q</code>는 출력 없이 종료한다.</p>
<p><a href="week12/assignment02_03_stack.c">스택 코드</a> · <a href="week12/results/sample_run_msvc.txt">실제 실행 로그</a><br><a href="tests/function_contracts.c">경계·재사용 함수 검사</a> · <a href="week12/README.md">풀이와 실행법</a></p>
</td></tr>
</table>

출력의 `popped` 순서와 `full`·`empty`를 보면 LIFO 동작과 용량 경계 처리를 확인할 수 있다.

## 배열 복사 · 지정한 범위만 변경

`copyarray(from, to, n)`에서 앞의 n개만 복사했다. 5개 원소를 6칸 배열에 복사했을 때 마지막 값 60이 유지된다.

```text
a:        4  7  9  3  6
b before: 10 20 30 40 50 60
b after:  4  7  9  3  6 60
```

실행 로그를 열 간격만 맞춰 표시했다. 함수 검사에서는 **0개 복사 시 대상 배열 유지**, **복사 후 원본을 변경해도 대상 배열 유지**까지 확인했다.
[복사 코드](week10/assignment04_copy.c) · [실행 로그](week10/results/sample_run_msvc.txt) · [함수 검사](tests/function_contracts.c) · [풀이와 실행법](week10/README.md)

## 검증 범위

Python 도구로 각 C 프로그램을 독립 빌드하고 기대 출력·종료 코드와 비교했다. 학점 경계, 0 분모, 정수 오버플로와 반복 종료를 검사하고, 배열·스택 함수는 C의 `assert`로 상태와 값을 확인했다.

| 실행 환경 | 결과 | 근거 |
| --- | --- | --- |
| Linux x86_64 · GCC 11.4.0 | 50개 프로그램·178개 검사 통과 | [GCC 기록](results/verification_gcc_linux.json) |
| Windows · Zig 0.14.1 | 50개 프로그램·178개 검사 통과 | [Zig 기록](results/verification.json) |
| Windows x64 · MSVC 19.44.35230 | 50개 프로그램·178개 검사 통과 | [MSVC 기록](results/verification_msvc.json) |

모두 C11과 경고를 오류로 처리하는 옵션으로 빌드했다. [검증 도구](tools/verify.py) · [기대 출력](tests/programs.json) · [세부 검증 범위](results/README.md)

## 주차별 코드

| 실습 | 다룬 내용 | 실행 프로그램 |
| --- | --- | ---: |
| [week01](week01/README.md) | 개발 환경과 첫 실행 | 4 |
| [week02](week02/README.md) | 변수·문자·실수 | 4 |
| [week03](week03/README.md) | 상수와 자료형 | 5 |
| [week04](week04/README.md) | 전처리·헤더·입출력 | 5 |
| [week05](week05/README.md) | 산술식과 비교 | 4 |
| [week06](week06/README.md) | 논리 연산과 수치 계산 | 4 |
| [week07](week07/README.md) | 조건문과 문자 판별 | 4 |
| [week08](week08/README.md) | 반복문 | 4 |
| [week09](week09/README.md) | 배열과 행렬 연산 | 4 |
| [week10](week10/README.md) | 함수와 원형 | 4 |
| [week11](week11/README.md) | 배열 함수·난수·재귀 | 3 |
| [week12](week12/README.md) | 변수 유효범위와 스택 | 2 |
| [week13](week13/README.md) | 포인터와 배열 | 3 |

실습자료 순서로 구성했으며, 각 문서에서 **요구사항 → 풀이 → 실행 결과**와 개별 실행 명령을 확인할 수 있다.

## 실행 방법

전체 검사는 Python 3.10 이상과 C11 컴파일러로 실행한다.

```bash
git clone https://github.com/ktw25079/Programming_Language.git
cd Programming_Language
python3 tools/verify.py --cc gcc
```

개별 프로그램은 Python 없이 실행할 수 있다. [컴파일러별 실행 안내](docs/reproduction.md) · [Visual Studio 솔루션](week01/mybook/README.md)

| 경로 | 내용 |
| --- | --- |
| [docs/](docs/README.md) | 원문 대응, 구현 선택, 입력과 빌드 조건 |
| [tests/](tests/README.md) | 프로그램 목록과 기대 출력 |
| [tools/](tools/README.md) | 컴파일·실행·경계값 검사 도구 |
| [results/](results/README.md) | 실제 검증 결과와 소스 해시 |
