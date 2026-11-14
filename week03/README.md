# week03 · 상수와 자료형

## 목표

실습자료 3번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_circle.c](assignment01_circle.c) | 과제 1 · 상수와 원의 둘레·넓이 | 실습 PDF p.7 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 상수와 원의 둘레·넓이

반지름은 예제값 2.4. 길이 단위가 지정되지 않아 둘레·넓이는 같은 길이 단위와 그 제곱이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week03/assignment01_circle.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
radius=2.400 circumference=15.079642 area=18.095570
```

## 결과

1개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 2·3: 교재 p.161–162 프로그래밍 연습 07·08·09·12번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
