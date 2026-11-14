# week06 · 논리 연산자

## 목표

실습자료 6번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_logic.c](assignment01_logic.c) | 과제 1 · 논리식 여섯 개 | 실습 PDF p.9 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 논리식 여섯 개

32비트 int 두 값의 합·차는 long long으로 계산해 signed overflow를 방지한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment01_logic.c -o exercise -lm
./exercise
```

입력 예시:

```text
100 55
```

검증한 출력:

```text
0
1
1
0
1
1
```

## 결과

1개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 2·3·4: 교재 p.247–248 프로그래밍 연습 07·08·10번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
