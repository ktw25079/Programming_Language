# week05 · 산술식과 비교

수학식을 C 연산자로 옮기고, 비교와 나머지 연산으로 최댓값·배수를 판별했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_calculator.c](assignment01_calculator.c) | 과제 1 · 입력한 두 실수의 사칙연산 | 실습 PDF p.9 |
| [assignment02_expressions.c](assignment02_expressions.c) | 과제 2 · 일곱 수식 | 실습 PDF p.10 |
| [assignment03_maximum.c](assignment03_maximum.c) | 과제 3 · 세 정수의 최댓값 | 실습 PDF p.12 |
| [assignment04_multiple.c](assignment04_multiple.c) | 과제 4 · 배수 판별 | 실습 PDF p.13 |

## 풀이와 실행 결과

### 과제 1 · 입력한 두 실수의 사칙연산

**요구사항:** 입력한 두 실수로 사칙연산을 수행한다.

**풀이:** 합·차·곱을 먼저 계산하고 분모가 0이거나 몫이 유한하지 않으면 `undefined`를 출력했다. 입력은 절댓값 1e100 이하의 유한 실수이다.

**입력 예시**

```text
12.5 2.5
```

**실행 결과**

```text
sum=15.000 difference=10.000 product=31.250
quotient=5.000
```

### 과제 2 · 일곱 수식

**요구사항:** 주어진 일곱 수식을 C 연산자로 계산한다.

**풀이:** 곱셈과 괄호로 다항식·분수를 표현하고 온도 변환에는 실수 나눗셈, 근 계산에는 `sqrt`를 사용했다. 분모 0과 음수 판별식을 확인한다. 입력 순서는 `a b x y F C 이차식a 이차식b 이차식c`이며 각 절댓값은 1,000,000 이하이다. 마지막 식의 분모는 `2*a`이다.

**입력 예시**

```text
1 2 2 1 212 100 1 -3 2
```

**실행 결과**

```text
1=27.000
2=44.000
3=-3.000
4=100.000
5=212.000
6=-0.250
7=2.000
```

### 과제 3 · 세 정수의 최댓값

**요구사항:** 세 정수 중 최댓값을 찾는다.

**풀이:** 첫 값을 최댓값으로 저장하고 나머지 두 값이 더 클 때 갱신했다. 초기값을 0으로 두지 않아 모두 음수인 경우도 처리한다.

**입력 예시**

```text
-7 -2 -9
```

**실행 결과**

```text
max=-2
```

### 과제 4 · 배수 판별

**요구사항:** 정수 y가 x의 배수인지 판별한다.

**풀이:** `y%x==0`으로 판별하고 x가 0이면 오류 처리했다. x가 −1이면 항상 배수로 처리해 `INT_MIN % -1` 연산을 피했다.

**입력 예시**

```text
5 30
```

**실행 결과**

```text
multiple=yes
```

## 검증 결과

4개 프로그램을 Zig와 MSVC에서 C11로 빌드하고 실행했다. 경고 없이 컴파일되었으며 등록된 실행 검사를 통과했다.

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

## 실행 방법

저장소 루트에서 아래 명령으로 한 프로그램씩 빌드·실행한다. GCC·Clang 계열 C11 컴파일러 기준이며, [Visual Studio 실행 방법](../docs/reproduction.md)도 확인할 수 있다.

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 입력한 두 실수의 사칙연산**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment01_calculator.c -o exercise -lm
./exercise
```

**과제 2 · 일곱 수식**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment02_expressions.c -o exercise -lm
./exercise
```

**과제 3 · 세 정수의 최댓값**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment03_maximum.c -o exercise -lm
./exercise
```

**과제 4 · 배수 판별**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment04_multiple.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
