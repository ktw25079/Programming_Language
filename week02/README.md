# week02 · 변수·문자·실수

## 목표

실습자료 2번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_alphabet.c](assignment01_alphabet.c) | 과제 1 · 문자 하나로 A–Z 출력 | 실습 PDF p.7 |
| [assignment02_arithmetic.c](assignment02_arithmetic.c) | 과제 2 · 실수 연산과 0 분모 | 실습 PDF p.8 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 문자 하나로 A–Z 출력

ASCII 호환 실행 환경을 사용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment01_alphabet.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

### 과제 2 · 실수 연산과 0 분모

초기값은 예제로 정했다. 0으로 나누는 연산은 실행 전 차단한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week02/assignment02_arithmetic.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
sum=15.000 difference=10.000 product=31.250
quotient=5.000
sum=8.000 difference=8.000 product=0.000
quotient=undefined (division by zero)
```

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 3: 교재 p.159–161 프로그래밍 연습 03·10번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
