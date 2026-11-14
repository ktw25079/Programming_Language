# week09 · 배열과 전치행렬

## 목표

실습자료 9번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_grades.c](assignment01_grades.c) | 과제 1 · 다섯 과목 평균과 학점 | 실습 PDF p.7 |
| [assignment02_transpose.c](assignment02_transpose.c) | 과제 2 · 5×3 행렬의 전치 | 실습 PDF p.8 |

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

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 3·4: 교재 p.374–375 프로그래밍 연습 10·12번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
