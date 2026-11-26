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

**실행 결과:** 1~100 후보 입력 검사에서 대소 힌트와 정답 도달 후 종료를 확인했다. 정답은 실행마다 달라질 수 있다.

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

[함수 검사](../tests/function_contracts.c)에서 빈 상태의 pop, 가득 찬 상태의 push 거부와 삭제 후 재삽입을 확인했다.

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

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
