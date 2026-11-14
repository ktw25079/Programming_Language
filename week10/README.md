# week10 · 함수와 원형

## 목표

실습자료 10번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_seconds.c](assignment01_seconds.c) | 과제 1 · 시간 변환 함수와 종료 조건 | 실습 PDF p.8 |
| [assignment02_grades.c](assignment02_grades.c) | 과제 2 · 평균·학점 함수 | 실습 PDF p.9 |
| [assignment03_power.c](assignment03_power.c) | 과제 3 · 정수 거듭제곱 함수 | 실습 PDF p.10 |
| [assignment04_copy.c](assignment04_copy.c) | 과제 4 · 지정 원형으로 배열 복사 | 교재 p.422 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 시간 변환 함수와 종료 조건

시 0~596522, 분·초 0~59. 0 0 0은 출력 없이 종료한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment01_seconds.c -o exercise -lm
./exercise
```

입력 예시:

```text
1 2 3
0 0 0
```

검증한 출력:

```text
seconds=3723
```

### 과제 2 · 평균·학점 함수

국어 수학 영어(각 0~100), 계속 여부(1/0) 순서로 입력한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment02_grades.c -o exercise -lm
./exercise
```

입력 예시:

```text
90 100 80 0
```

검증한 출력:

```text
average=90.00 grade=A
```

### 과제 3 · 정수 거듭제곱 함수

x=−100~100, y=0~30 중 int 결과가 표현 가능한 입력. 지수 0은 0^0을 포함해 반복 곱의 항등값 1로 정했다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment03_power.c -o exercise -lm
./exercise
```

입력 예시:

```text
-3 3
```

검증한 출력:

```text
power=-27
```

### 과제 4 · 지정 원형으로 배열 복사

교재 프로그래밍 연습 12번. void copyarray(int from[], int to[], int n)을 사용한다. 앞의 n개만 복사하므로 b[5]=60은 보존된다. 호출자는 두 배열이 n개 이상임을 보장한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment04_copy.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
a: 4 7 9 3 6
b before: 10 20 30 40 50 60
b after: 4 7 9 3 6 60
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
