# week06 · 논리 연산과 수치 계산

## 목표

실습자료 6번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_logic.c](assignment01_logic.c) | 과제 1 · 논리식 여섯 개 | 실습 PDF p.9 |
| [assignment02_ex07_simple_interest.c](assignment02_ex07_simple_interest.c) | 과제 2 · 단리 만기 금액 | 교재 p.247 |
| [assignment03_ex08_compound_interest.c](assignment03_ex08_compound_interest.c) | 과제 3 · 복리 만기 금액 | 교재 p.248 |
| [assignment04_ex10_quadratic.c](assignment04_ex10_quadratic.c) | 과제 4 · 이차방정식의 근과 검산 | 교재 p.248 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 논리식 여섯 개

32비트 int 두 값의 합·차는 long long으로 계산해 signed overflow를 방지한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment01_logic.c -o exercise -lm
./exercise
```

입력 예시:

```text
100 55
```

검증한 출력:

```text
0
1
1
0
1
1
```

### 과제 2 · 단리 만기 금액

교재 프로그래밍 연습 07번. 원금 100만원, 연 4.5%라는 문제 조건의 단리 계산이다. 예치 기간은 정수 0~1000년.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment02_ex07_simple_interest.c -o exercise -lm
./exercise
```

입력 예시:

```text
5
```

검증한 출력:

```text
total=1225000.00 KRW
```

### 과제 3 · 복리 만기 금액

교재 프로그래밍 연습 08번. math.h의 pow로 연 4.5% 복리를 계산한다. 예치 기간은 정수 0~1000년.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment03_ex08_compound_interest.c -o exercise -lm
./exercise
```

입력 예시:

```text
5
```

검증한 출력:

```text
total=1246181.94 KRW
```

### 과제 4 · 이차방정식의 근과 검산

교재 프로그래밍 연습 10번. 2x²+3x−4=0의 두 근을 구하고 반올림 전 근을 대입한다. 잔차는 절댓값으로 표시하고 1e−12 이하인지 검사한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment04_ex10_quadratic.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
root1=0.851 residual=0.000
root2=-2.351 residual=0.000
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
