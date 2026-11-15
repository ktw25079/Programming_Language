# week09 · 배열과 행렬 연산

배열에 점수와 행렬을 저장하고 반복문으로 평균·전치·합·차를 계산했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_grades.c](assignment01_grades.c) | 과제 1 · 다섯 과목 평균과 학점 | 실습 PDF p.7 |
| [assignment02_transpose.c](assignment02_transpose.c) | 과제 2 · 5×3 행렬의 전치 | 실습 PDF p.8 |
| [assignment03_ex10_student_totals.c](assignment03_ex10_student_totals.c) | 과제 3 · 학생별 합계와 평균 | 교재 p.374 |
| [assignment04_ex12_matrix_arithmetic.c](assignment04_ex12_matrix_arithmetic.c) | 과제 4 · 4×3 행렬 합과 차 | 교재 p.375 |

## 풀이와 실행 결과

### 과제 1 · 다섯 과목 평균과 학점

**요구사항:** 다섯 과목의 점수를 배열에 저장하고 평균과 학점을 구한다.

**풀이:** 0~100점 다섯 개를 누적해 5.0으로 나누고, 반올림 전 평균을 90·80·70·60점 기준으로 비교해 A·B·C·D·F를 정했다.

**입력 예시**

```text
90 80 100 70 60
```

**실행 결과**

```text
average=80.00 grade=B
```

### 과제 2 · 5×3 행렬의 전치

**요구사항:** 5×3 행렬을 3×5 행렬로 전치한다.

**풀이:** 원소를 `a[i][j]=i+j`로 채우고 `transpose[j][i]=a[i][j]`로 행과 열의 위치를 바꿨다.

**실행 결과**

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

**요구사항:** 교재의 5×4 성적표에서 학생별 총점과 평균을 계산한다.

**풀이:** 각 행의 네 점수를 누적하고 4.0으로 나눴다. student1~5는 교재 표의 행 순서이다.

**실행 결과**

```text
student1 total=370 average=92.50
student2 total=323 average=80.75
student3 total=300 average=75.00
student4 total=349 average=87.25
student5 total=298 average=74.50
```

### 과제 4 · 4×3 행렬 합과 차

**요구사항:** 두 4×3 행렬의 합과 차를 구한다.

**풀이:** 이중 반복문으로 같은 위치의 원소를 더하거나 첫 행렬에서 둘째 행렬을 뺐다. 결과를 별도 배열에 저장해 행 단위로 출력했다.

**실행 결과**

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

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 다섯 과목 평균과 학점**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment01_grades.c -o exercise -lm
./exercise
```

**과제 2 · 5×3 행렬의 전치**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment02_transpose.c -o exercise -lm
./exercise
```

**과제 3 · 학생별 합계와 평균**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment03_ex10_student_totals.c -o exercise -lm
./exercise
```

**과제 4 · 4×3 행렬 합과 차**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week09/assignment04_ex12_matrix_arithmetic.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
