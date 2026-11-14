# week09 · 배열과 행렬 연산

## 목표

실습자료 9번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_grades.c](assignment01_grades.c) | 과제 1 · 다섯 과목 평균과 학점 | 실습 PDF p.7 |
| [assignment02_transpose.c](assignment02_transpose.c) | 과제 2 · 5×3 행렬의 전치 | 실습 PDF p.8 |
| [assignment03_ex10_student_totals.c](assignment03_ex10_student_totals.c) | 과제 3 · 학생별 합계와 평균 | 교재 p.374 |
| [assignment04_ex12_matrix_arithmetic.c](assignment04_ex12_matrix_arithmetic.c) | 과제 4 · 4×3 행렬 합과 차 | 교재 p.375 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 다섯 과목 평균과 학점

과목별 점수 0~100. 학점은 반올림 전 평균으로 판정한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment01_grades.c -o exercise -lm
./exercise
```

입력 예시:

```text
90 80 100 70 60
```

검증한 출력:

```text
average=80.00 grade=B
```

### 과제 2 · 5×3 행렬의 전치



```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment02_transpose.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
original:
0 1 2
1 2 3
2 3 4
3 4 5
4 5 6
transpose:
0 1 2 3 4
1 2 3 4 5
2 3 4 5 6
```

### 과제 3 · 학생별 합계와 평균

교재 프로그래밍 연습 10번. 표의 5×4 점수를 그대로 저장했다. student1~5는 교재 표의 위에서 아래 행 순서이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment03_ex10_student_totals.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
student1 total=370 average=92.50
student2 total=323 average=80.75
student3 total=300 average=75.00
student4 total=349 average=87.25
student5 total=298 average=74.50
```

### 과제 4 · 4×3 행렬 합과 차

교재 프로그래밍 연습 12번. 같은 위치의 원소끼리 더하고 첫 행렬에서 둘째 행렬을 뺀다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment04_ex12_matrix_arithmetic.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
sum:
124 114 177
120 139 62
101 137 105
90 137 133
difference:
-32 44 -21
-50 -25 -6
-15 -1 47
22 19 63
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
