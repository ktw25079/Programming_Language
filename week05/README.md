# week05 · 산술식과 비교

## 목표

실습자료 5번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_calculator.c](assignment01_calculator.c) | 과제 1 · 입력한 두 실수의 사칙연산 | 실습 PDF p.9 |
| [assignment02_expressions.c](assignment02_expressions.c) | 과제 2 · 일곱 수식 | 실습 PDF p.10 |
| [assignment03_maximum.c](assignment03_maximum.c) | 과제 3 · 세 정수의 최댓값 | 실습 PDF p.12 |
| [assignment04_multiple.c](assignment04_multiple.c) | 과제 4 · 배수 판별 | 실습 PDF p.13 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 입력한 두 실수의 사칙연산

유한 실수, 절댓값 1e100 이하. 정의되지 않는 몫은 undefined로 표시한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment01_calculator.c -o exercise -lm
./exercise
```

입력 예시:

```text
12.5 2.5
```

검증한 출력:

```text
sum=15.000 difference=10.000 product=31.250
quotient=5.000
```

### 과제 2 · 일곱 수식

입력 순서: a b x y F C 이차식a 이차식b 이차식c. 각 값의 절댓값 ≤ 1,000,000. 일곱 식은 원본 표에서 확인했으며 마지막 식의 분모는 전체 2a이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment02_expressions.c -o exercise -lm
./exercise
```

입력 예시:

```text
1 2 2 1 212 100 1 -3 2
```

검증한 출력:

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

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment03_maximum.c -o exercise -lm
./exercise
```

입력 예시:

```text
-7 -2 -9
```

검증한 출력:

```text
max=-2
```

### 과제 4 · 배수 판별

본문의 “y가 x의 배수”를 기준으로 판별한다. 0인 기준값은 오류 처리한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week05/assignment04_multiple.c -o exercise -lm
./exercise
```

입력 예시:

```text
5 30
```

검증한 출력:

```text
multiple=yes
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
