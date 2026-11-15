# week08 · 반복문

for·while·do-while을 사용해 패턴 출력, 반복 입력과 누적 계산을 구현했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_triangle.c](assignment01_triangle.c) | 과제 1 · 알파벳 삼각형 | 실습 PDF p.7 |
| [assignment02_table.c](assignment02_table.c) | 과제 2 · 반복하는 구구단 | 실습 PDF p.8 |
| [assignment03_powers.c](assignment03_powers.c) | 과제 3 · 제곱·세제곱 표 | 실습 PDF p.9 |
| [assignment04_ex07_sum_limit.c](assignment04_ex07_sum_limit.c) | 교재 과제 07 · 10000 이하의 최대 누적합 | 교재 p.336 |

## 풀이와 실행 결과

### 과제 1 · 알파벳 삼각형

**요구사항:** A부터 시작해 한 글자씩 길어지는 알파벳 삼각형을 출력한다.

**풀이:** 바깥 `for`문은 행의 마지막 문자를 A~Z로 바꾸고, 안쪽 반복문은 A부터 해당 문자까지 출력한다.

**실행 결과:** 첫 줄 `A`, 둘째 줄 `AB`에서 시작해 마지막 줄 `ABCDEFGHIJKLMNOPQRSTUVWXYZ`까지 26행을 출력했다.

### 과제 2 · 반복하는 구구단

**요구사항:** 입력한 단의 구구단을 출력하고 선택에 따라 반복한다.

**풀이:** `for`로 1~9를 곱하고 `do-while`로 다음 단 입력을 반복했다. 단은 2~9, 계속 여부는 1 또는 0을 받는다.

**입력 예시**

```text
2 0
```

**실행 결과**

```text
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
```

### 과제 3 · 제곱·세제곱 표

**요구사항:** 1부터 n까지 각 수의 제곱·세제곱을 표로 출력한다.

**풀이:** `SQUARE`·`CUBE` 매크로를 정의하고 `while`에서 순서대로 계산했다. n은 1~10000이고 연산에는 `long long`을 사용한다.

**입력 예시**

```text
3
```

**실행 결과**

```text
1 1 1
2 4 8
3 9 27
```

### 교재 과제 07 · 10000 이하의 최대 누적합

**요구사항:** 1부터 더한 합이 10000 이하인 최대 n과 합을 구한다.

**풀이:** 다음 항을 더해도 한도 이하인지 `while` 조건에서 먼저 확인했다.

**실행 결과**

```text
n=140 sum=9870 next=10011
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 알파벳 삼각형**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment01_triangle.c -o exercise -lm
./exercise
```

**과제 2 · 반복하는 구구단**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment02_table.c -o exercise -lm
./exercise
```

**과제 3 · 제곱·세제곱 표**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment03_powers.c -o exercise -lm
./exercise
```

**교재 과제 07 · 10000 이하의 최대 누적합**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment04_ex07_sum_limit.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
