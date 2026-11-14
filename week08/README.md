# week08 · 반복문

## 목표

실습자료 8번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_triangle.c](assignment01_triangle.c) | 과제 1 · 알파벳 삼각형 | 실습 PDF p.7 |
| [assignment02_table.c](assignment02_table.c) | 과제 2 · 반복하는 구구단 | 실습 PDF p.8 |
| [assignment03_powers.c](assignment03_powers.c) | 과제 3 · 제곱·세제곱 표 | 실습 PDF p.9 |
| [assignment04_ex07_sum_limit.c](assignment04_ex07_sum_limit.c) | 교재 과제 07 · 10000 이하의 최대 누적합 | 교재 p.336 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 알파벳 삼각형



```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment01_triangle.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

### 과제 2 · 반복하는 구구단

입력: 단(2~9), 계속 여부(1/0), 반복 시 다음 단.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment02_table.c -o exercise -lm
./exercise
```

입력 예시:

```text
2 0
```

검증한 출력:

```text
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
```

### 과제 3 · 제곱·세제곱 표

출력량과 연산 범위를 고려하여 n=1~10000. 매크로 인자에 증감 연산을 넣지 않는다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment03_powers.c -o exercise -lm
./exercise
```

입력 예시:

```text
3
```

검증한 출력:

```text
1 1 1
2 4 8
3 9 27
```

### 교재 과제 07 · 10000 이하의 최대 누적합

교재 프로그래밍 연습 07번. 다음 항까지 더했을 때 한도를 넘는지 확인한다. 수업 PDF p.10의 중복된 과제 2는 파일명에서 assignment04로 구분했다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week08/assignment04_ex07_sum_limit.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
n=140 sum=9870 next=10011
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
