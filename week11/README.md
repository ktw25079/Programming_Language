# week11 · 배열 함수와 난수

## 목표

실습자료 11번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_matrix.c](assignment01_matrix.c) | 과제 1 · 2차원 배열 증가 함수 | 실습 PDF p.10 |
| [assignment02_guess.c](assignment02_guess.c) | 과제 2 · 난수 알아맞히기 | 실습 PDF p.11 |

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

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 3: 교재 p.403 중간점검 1·2·3번. 재귀함수 사용 조건만 확인된다. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
