# week03 · 상수와 자료형

매크로와 const 상수로 계산 기준을 정의하고 원의 둘레·넓이와 단위 환산을 구현했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_circle.c](assignment01_circle.c) | 과제 1 · 상수와 원의 둘레·넓이 | 실습 PDF p.7 |
| [assignment02_ex07_octal.c](assignment02_ex07_octal.c) | 과제 2-07 · 8진수 코드의 문자 | 교재 p.161 |
| [assignment02_ex08_area.c](assignment02_ex08_area.c) | 과제 2-08 · 평에서 제곱미터로 | 교재 p.161 |
| [assignment03_ex09_miles.c](assignment03_ex09_miles.c) | 과제 3-09 · 킬로미터에서 마일로 | 교재 p.161 |
| [assignment03_ex12_exchange.c](assignment03_ex12_exchange.c) | 과제 3-12 · 매크로 환율 계산 | 교재 p.162 |

## 풀이와 실행 결과

### 과제 1 · 상수와 원의 둘레·넓이

**요구사항:** 상수를 사용해 원의 둘레와 넓이를 계산한다.

**풀이:** `PHI=3.141592`, 반지름 2.4를 정의하고 `2*PHI*r`, `PHI*r*r`을 계산했다. 둘레는 입력 길이 단위, 넓이는 그 제곱 단위이다.

**실행 결과**

```text
radius=2.400 circumference=15.079642 area=18.095570
```

### 과제 2-07 · 8진수 코드의 문자

**요구사항:** 8진수 문자 코드 041~045를 문자로 출력한다.

**풀이:** 각 8진수 상수를 `%c`에 전달해 ASCII 문자 `!`, `"`, `#`, `$`, `%`로 변환했다.

**실행 결과**

```text
! " # $ %
```

### 과제 2-08 · 평에서 제곱미터로

**요구사항:** 18평과 25평을 제곱미터로 환산한다.

**풀이:** `const` 상수에 3.305785 m²/평을 저장하고 평수에 곱한 뒤 소수 셋째 자리까지 출력했다.

**실행 결과**

```text
18 pyeong = 59.504 m^2
25 pyeong = 82.645 m^2
```

### 과제 3-09 · 킬로미터에서 마일로

**요구사항:** 60·80·100·120 km를 마일로 환산한다.

**풀이:** `const` 상수 0.621371 mile/km를 각 거리에 곱해 소수 셋째 자리까지 출력했다.

**실행 결과**

```text
60 km = 37.282 mile
80 km = 49.710 mile
100 km = 62.137 mile
120 km = 74.565 mile
```

### 과제 3-12 · 매크로 환율 계산

**요구사항:** 매크로로 환율을 정의하고 100만원을 달러로 환산한다.

**풀이:** 문제의 고정 환율 1,120원/USD를 `EXCHANGE_RATE`로 정의하고 원화 금액을 실수로 나눴다.

**실행 결과**

```text
1000000 KRW = 892.857143 USD
```

## 검증 결과

5개 프로그램을 Zig와 MSVC에서 C11로 빌드하고 실행했다. 경고 없이 컴파일되었으며 등록된 실행 검사를 통과했다.

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

## 실행 방법

저장소 루트에서 아래 명령으로 한 프로그램씩 빌드·실행한다. GCC·Clang 계열 C11 컴파일러 기준이며, [Visual Studio 실행 방법](../docs/reproduction.md)도 확인할 수 있다.

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 상수와 원의 둘레·넓이**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment01_circle.c -o exercise -lm
./exercise
```

**과제 2-07 · 8진수 코드의 문자**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment02_ex07_octal.c -o exercise -lm
./exercise
```

**과제 2-08 · 평에서 제곱미터로**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment02_ex08_area.c -o exercise -lm
./exercise
```

**과제 3-09 · 킬로미터에서 마일로**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment03_ex09_miles.c -o exercise -lm
./exercise
```

**과제 3-12 · 매크로 환율 계산**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment03_ex12_exchange.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
