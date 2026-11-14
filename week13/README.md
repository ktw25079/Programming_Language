# week13 · 포인터와 배열

## 목표

실습자료 13번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_reverse.c](assignment01_reverse.c) | 과제 1 · 포인터로 배열 역순 출력 | 실습 PDF p.10 |
| [assignment02_minimum.c](assignment02_minimum.c) | 과제 2 · double 포인터로 최솟값과 첨자 | 교재 p.504 |
| [assignment03_ex04_pointer_halves.c](assignment03_ex04_pointer_halves.c) | 과제 3 · int와 short의 저장 단위 | 교재 p.504 |

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

### 과제 2 · double 포인터로 최솟값과 첨자

교재 프로그래밍 연습 03번. double *p로 순회하고 sizeof로 원소 수를 계산한다. 교재는 배열 전체 초기값을 지정하지 않으므로 출력 예시(첨자 2, 값 1.5)에 맞는 예제 배열을 구성했다. 동률은 첫 위치이며 배열은 비어 있지 않아야 한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment02_minimum.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
minimum=1.5 index=2
```

### 과제 3 · int와 short의 저장 단위

교재 프로그래밍 연습 04번(p.504–505). int 4바이트·short 2바이트·리틀엔디언 환경을 확인한다. short *를 int 객체에 직접 역참조하는 별칭 위반을 피하려고 memcpy와 short 배열로 두 절반을 수정한 뒤 int에 반영한다. 예시 출력과 최종 값 0x000F00FF를 검증한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment03_ex04_pointer_halves.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
255
255 15
```

## 결과

3개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
