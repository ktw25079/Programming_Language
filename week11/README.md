# week11 · 배열 함수·난수·재귀

## 목표

실습자료 11번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_matrix.c](assignment01_matrix.c) | 과제 1 · 2차원 배열 증가 함수 | 실습 PDF p.10 |
| [assignment02_guess.c](assignment02_guess.c) | 과제 2 · 난수 알아맞히기 | 실습 PDF p.11 |
| [assignment03_recursive_sum.c](assignment03_recursive_sum.c) | 과제 3 · 재귀적 누적합 nplus | 교재 p.403 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 2차원 배열 증가 함수

배열 크기·초기값이 지정되지 않아 2×3, 1~6을 사용한다. 증가량 −1,000,000~1,000,000.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment01_matrix.c -o exercise -lm
./exercise
```

입력 예시:

```text
2
```

검증한 출력:

```text
before:
1 2 3
4 5 6
after:
3 4 5
6 7 8
```

### 과제 2 · 난수 알아맞히기

1~100 난수. higher는 더 큰 값, lower는 더 작은 값, correct는 정답을 뜻한다. 자동 검사는 1·100과 나머지 후보를 입력한 뒤 정답 위치와 모든 대소 힌트의 일관성을 확인한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment02_guess.c -o exercise -lm
./exercise
```

1~100 정수를 입력하고 `higher`/`lower` 힌트에 따라 다시 입력한다. 정답이면 `correct`를 출력하고 종료한다.

### 과제 3 · 재귀적 누적합 nplus

중간점검 1·2·3을 한 프로그램으로 구현했다. S(0)=0, S(n)=n+S(n−1)이며 1~10의 합을 차례로 출력한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment03_recursive_sum.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
n=1 sum=1
n=2 sum=3
n=3 sum=6
n=4 sum=10
n=5 sum=15
n=6 sum=21
n=7 sum=28
n=8 sum=36
n=9 sum=45
n=10 sum=55
```

## 결과

3개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
