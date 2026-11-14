# week03 · 상수와 자료형

## 목표

실습자료 3번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_circle.c](assignment01_circle.c) | 과제 1 · 상수와 원의 둘레·넓이 | 실습 PDF p.7 |
| [assignment02_ex07_octal.c](assignment02_ex07_octal.c) | 과제 2-07 · 8진수 코드의 문자 | 교재 p.161 |
| [assignment02_ex08_area.c](assignment02_ex08_area.c) | 과제 2-08 · 평에서 제곱미터로 | 교재 p.161 |
| [assignment03_ex09_miles.c](assignment03_ex09_miles.c) | 과제 3-09 · 킬로미터에서 마일로 | 교재 p.161 |
| [assignment03_ex12_exchange.c](assignment03_ex12_exchange.c) | 과제 3-12 · 매크로 환율 계산 | 교재 p.162 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 상수와 원의 둘레·넓이

반지름은 예제값 2.4. 길이 단위가 지정되지 않아 둘레·넓이는 같은 길이 단위와 그 제곱이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment01_circle.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
radius=2.400 circumference=15.079642 area=18.095570
```

### 과제 2-07 · 8진수 코드의 문자

교재 프로그래밍 연습 07번. ASCII 8진수 041~045를 문자로 출력한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment02_ex07_octal.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
! " # $ %
```

### 과제 2-08 · 평에서 제곱미터로

교재 프로그래밍 연습 08번. const 환산값 3.305785 m²/평을 사용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment02_ex08_area.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
18 pyeong = 59.504 m^2
25 pyeong = 82.645 m^2
```

### 과제 3-09 · 킬로미터에서 마일로

교재 프로그래밍 연습 09번. const 환산값 0.621371 mile/km를 사용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment03_ex09_miles.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
60 km = 37.282 mile
80 km = 49.710 mile
100 km = 62.137 mile
120 km = 74.565 mile
```

### 과제 3-12 · 매크로 환율 계산

교재 프로그래밍 연습 12번. 문제에서 지정한 고정 환율 1,120원/USD를 사용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment03_ex12_exchange.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
1000000 KRW = 892.857143 USD
```

## 결과

5개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
