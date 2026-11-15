# week12 · 변수 유효범위와 스택

전역변수와 지역변수의 역할을 구분하고, 여러 파일의 함수 연결과 배열 기반 스택을 구현했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_guess.c](assignment01_guess.c) | 과제 1 · 두 파일과 testNum | 교재 p.434 |
| [assignment02_03_stack.c](assignment02_03_stack.c) | 과제 2·3 · 용량 3의 전역 스택 | 교재 p.458 |

## 풀이와 실행 결과

### 과제 1 · 두 파일과 testNum

**요구사항:** 전역변수와 별도 파일의 testNum 함수를 사용해 숫자 맞히기를 구현한다.

**풀이:** main 파일에 전역 `guess`와 지역 `input`을 두고 [guess.h](guess.h)의 `extern` 선언으로 정답을 공유했다. [guess.c](guess.c)의 `testNum`이 −1/0/1을 반환하면 `switch`로 힌트를 출력하고 정답일 때 `return 0`으로 종료한다.

**실행 결과:** 1~100 후보를 입력하는 검사에서 정답에 도달해 `correct`로 종료했고, 앞서 출력한 대소 힌트가 정답과 일치함을 확인했다. 정답은 실행마다 달라진다.

### 과제 2·3 · 용량 3의 전역 스택

**요구사항:** 용량 3의 전역 스택에 push/pop과 가득 참·빈 상태 판별을 구현한다.

**풀이:** `stack[MAXSIZE]`, `MAXSIZE=3`, `top=-1`로 시작해 삽입 시 top을 증가시키고 삭제 시 감소시켰다. `isfull`·`isempty`로 경계를 검사하고 `pop`은 반환값으로 성공 여부, 포인터로 꺼낸 값을 전달한다. `+ 정수`는 삽입, `-`는 삭제, `q`는 종료이다.

**입력 예시**

```text
+ 3 + 5 + 9 + 1 - - - - q
```

**실행 결과**

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

## 검증 결과

2개 프로그램을 Zig와 MSVC에서 C11로 빌드하고 실행했다. 경고 없이 컴파일되었으며 등록된 실행 검사를 통과했다.

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

## 실행 방법

저장소 루트에서 아래 명령으로 한 프로그램씩 빌드·실행한다. GCC·Clang 계열 C11 컴파일러 기준이며, [Visual Studio 실행 방법](../docs/reproduction.md)도 확인할 수 있다.

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 두 파일과 testNum**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment01_guess.c week12/guess.c -o exercise -lm
./exercise
```

**과제 2·3 · 용량 3의 전역 스택**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week12/assignment02_03_stack.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
