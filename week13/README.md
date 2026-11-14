# week13 · 포인터와 배열

## 목표

실습자료 13번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_reverse.c](assignment01_reverse.c) | 과제 1 · 포인터로 배열 역순 출력 | 실습 PDF p.10 |
| [assignment02_minimum.c](assignment02_minimum.c) | 과제 2 · 최솟값과 첨자 | 실습 PDF p.11 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 포인터로 배열 역순 출력

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment01_reverse.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
9 8 7 6 5 4 3 2 1 0
```

### 과제 2 · 최솟값과 첨자

교재 세부 조건은 미제공. 새 예제 배열에서 포인터로 최솟값을 찾고 0 기반 첨자를 출력한다. 동률은 첫 번째 위치를 선택한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment02_minimum.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
minimum=-3 index=1
```

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

과제 2의 최솟값·첨자 주제를 구현했다. 교재의 원본 배열·함수 원형은 미확인이다.

### 원문 추가 확인 항목

과제 3: 교재 p.504 프로그래밍 연습 04번. 포인터 연산의 구체적인 식이 제공되지 않았다. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
