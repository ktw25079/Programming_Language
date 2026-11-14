# 검증 결과

Windows에서 Zig 0.14.1의 C 컴파일러로 **28개 프로그램, 110개 검사**를 통과했다. `-std=c11 -Wall -Wextra -Wpedantic -Werror`를 적용해 경고도 실패로 처리했다.

[verification.json](verification.json)에 플랫폼·컴파일러 정보, 개별 검사 성공 여부, C 소스·헤더 SHA-256을 기록했다. 주차별 `results/sample_run.txt`에는 실제 표준입력과 출력을 보관한다. 기대값은 [검사 명세](../tests/programs.json), 경계값과 반복·난수 검사는 [검증 도구](../tools/verify.py)에 있다.

정상 출력 비교, 잘못된 입력, 학점 구간 경계, 정수 범위, 반복 종료·재진입, 스택 용량·LIFO·빈 상태를 검사한다. 난수 게임은 범위 내 후보를 입력하고 종료 시점에서 정답을 역으로 확인하여 모든 대소 힌트가 일관적인지 검사한다.

검사 대상은 이번에 작성한 코드이다. 누락된 교재 원문과의 완전한 일치, 과거 제출 결과, Visual Studio GUI 조작, 난수의 통계적 균일성은 검증하지 않았다. GCC·MSVC 등 다른 컴파일러의 실행 성공을 이 기록만으로 주장하지 않는다.

```bash
python tools/verify.py --cc "zig cc"
```
