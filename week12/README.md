# week12 · 변수 유효범위와 스택

## 목표

실습자료 12번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_guess.c](assignment01_guess.c) | 과제 1 · 두 파일과 testNum | 교재 p.434 |
| [assignment02_03_stack.c](assignment02_03_stack.c) | 과제 2·3 · 용량 3의 전역 스택 | 교재 p.458 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 두 파일과 testNum

교재 LAB 10-1(p.434–435). main 파일에 전역 guess와 지역 input을 두고, 별도 guess.c의 testNum(int input)이 −1/0/1을 반환한다. 원문 코드의 switch break만으로 반복이 계속되는 부분은 정답 시 return 0으로 고쳤다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment01_guess.c week12/guess.c -o exercise -lm
./exercise
```

1~100 정수를 입력하고 `higher`/`lower` 힌트에 따라 다시 입력한다. 정답이면 `correct`를 출력하고 종료한다.

### 과제 2·3 · 용량 3의 전역 스택

교재 p.458의 전역 stack[MAXSIZE], MAXSIZE=3, top=−1, isfull과 isempty를 반영했다. 수업 과제 2·3을 합쳐 push/pop을 구현했다. 명령은 + 정수, -, q이며 pop은 성공 여부와 출력 포인터를 분리한다. p.459의 추가 예제 출력은 제공되지 않아 요구된 LIFO 동작으로 검증한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment02_03_stack.c -o exercise -lm
./exercise
```

입력 예시:

```text
+ 3 + 5 + 9 + 1 - - - - q
```

검증한 출력:

```text
pushed
pushed
pushed
full
popped=9
popped=5
popped=3
empty
```

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
