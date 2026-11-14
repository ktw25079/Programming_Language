# week08 · 반복문

## 목표

실습자료 8번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_triangle.c](assignment01_triangle.c) | 과제 1 · 알파벳 삼각형 | 실습 PDF p.7 |
| [assignment02_table.c](assignment02_table.c) | 과제 2 · 반복하는 구구단 | 실습 PDF p.8 |
| [assignment03_powers.c](assignment03_powers.c) | 과제 3 · 제곱·세제곱 표 | 실습 PDF p.9 |

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

## 결과

3개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

PDF p.10의 교재 p.336 프로그래밍 연습 07번. 원문 과제 번호가 2로 중복되어 페이지로 구분한다. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
