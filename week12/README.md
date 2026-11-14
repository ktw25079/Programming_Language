# week12 · 변수 유효범위와 스택

## 목표

실습자료 12번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_guess.c](assignment01_guess.c) | 과제 1 · 두 파일과 전역변수 | 실습 PDF p.5 |
| [assignment02_03_stack.c](assignment02_03_stack.c) | 과제 2·3 · push와 pop | 실습 PDF p.6 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 두 파일과 전역변수

guess.c에서 전역 target을 정의하고 main에서 지역 input과 비교한다. 교재의 세부 형식 대신 자료의 요약 요구사항을 구현했다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment01_guess.c week12/guess.c -o exercise -lm
./exercise
```

1~100 정수를 입력하고 `higher`/`lower` 힌트에 따라 다시 입력한다. 정답이면 `correct`를 출력하고 종료한다.

### 과제 2·3 · push와 pop

PDF p.6–7의 스택 주제를 구현했다. 교재 세부 조건은 미제공. 용량 5, + 정수: push, -: pop, q: 종료라는 인터페이스를 정했다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment02_03_stack.c -o exercise -lm
./exercise
```

입력 예시:

```text
+ 10 + 20 - - - q
```

검증한 출력:

```text
pushed
pushed
popped=20
popped=10
empty
```

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

과제 1의 두 파일·전역/지역변수 조건, 과제 2·3의 push/pop 주제를 구현했다. 교재의 스택 크기·인터페이스·출력 형식은 미확인이다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
