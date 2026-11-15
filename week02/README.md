# week02 · 변수·문자·실수

문자와 실수의 표현, 진법별 상수와 산술 연산을 코드로 확인했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_alphabet.c](assignment01_alphabet.c) | 과제 1 · 문자 하나로 A–Z 출력 | 실습 PDF p.7 |
| [assignment02_arithmetic.c](assignment02_arithmetic.c) | 과제 2 · 실수 연산과 0 분모 | 실습 PDF p.8 |
| [assignment03_ex03_literals.c](assignment03_ex03_literals.c) | 과제 3-03 · 진법별 정수 상수 | 교재 p.159 |
| [assignment03_ex10_characters.c](assignment03_ex10_characters.c) | 과제 3-10 · 문자 덧셈과 뺄셈 | 교재 p.161 |

## 풀이와 실행 결과

### 과제 1 · 문자 하나로 A–Z 출력

**요구사항:** 문자 변수 하나로 A부터 Z까지 문자와 코드를 출력한다.

**풀이:** `char letter`를 A에서 Z까지 증가시키며 `%c`와 `%d`로 문자와 ASCII 코드를 함께 출력했다.

**실행 결과:** `A 65`부터 `Z 90`까지 26개 문자와 코드를 순서대로 출력했다.

### 과제 2 · 실수 연산과 0 분모

**요구사항:** 두 실수의 합·차·곱·몫을 계산한다.

**풀이:** `double` 값 12.5와 2.5를 계산한 뒤 8.0과 0.0으로 다시 실행했다. 분모가 0이면 나눗셈 대신 안내 문구를 출력했다.

**실행 결과**

```text
sum=15.000 difference=10.000 product=31.250
quotient=5.000
sum=8.000 difference=8.000 product=0.000
quotient=undefined (division by zero)
```

### 과제 3-03 · 진법별 정수 상수

**요구사항:** 10진·8진·16진 정수 상수의 값을 비교한다.

**풀이:** 8부터 15까지 각 값을 세 진법으로 적고, 여덟 번의 `printf`에서 모두 `%d`로 출력했다. 표기는 달라도 저장된 값이 같음을 확인했다.

**실행 결과**

```text
8 8 8
9 9 9
10 10 10
11 11 11
12 12 12
13 13 13
14 14 14
15 15 15
```

### 과제 3-10 · 문자 덧셈과 뺄셈

**요구사항:** 문자에 정수를 더하거나 빼서 다른 문자를 출력한다.

**풀이:** `'A'+2`, `'A'+5`, `'S'-1`, `'S'-3`을 계산하고 `%c`로 출력했다.

**실행 결과**

```text
C F R P
```

## 검증 결과

4개 프로그램을 Zig와 MSVC에서 C11로 빌드하고 실행했다. 경고 없이 컴파일되었으며 등록된 실행 검사를 통과했다.

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

## 실행 방법

저장소 루트에서 아래 명령으로 한 프로그램씩 빌드·실행한다. GCC·Clang 계열 C11 컴파일러 기준이며, [Visual Studio 실행 방법](../docs/reproduction.md)도 확인할 수 있다.

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 문자 하나로 A–Z 출력**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment01_alphabet.c -o exercise -lm
./exercise
```

**과제 2 · 실수 연산과 0 분모**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment02_arithmetic.c -o exercise -lm
./exercise
```

**과제 3-03 · 진법별 정수 상수**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment03_ex03_literals.c -o exercise -lm
./exercise
```

**과제 3-10 · 문자 덧셈과 뺄셈**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment03_ex10_characters.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
