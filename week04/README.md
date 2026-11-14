# week04 · 전처리·헤더·입출력

## 목표

실습자료 4번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_temperature.c](assignment01_temperature.c) | 과제 1 · 온도 변환 매크로 | 실습 PDF p.14 |
| [assignment02_time.c](assignment02_time.c) | 과제 2 · 헤더와 시간 변환 | 실습 PDF p.15 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 온도 변환 매크로

섭씨 −273.15~1,000,000 범위를 허용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment01_temperature.c -o exercise -lm
./exercise
```

입력 예시:

```text
100
```

검증한 출력:

```text
kelvin=373.150 fahrenheit=212.000
```

### 과제 2 · 헤더와 시간 변환

32비트 int 기준 오버플로를 피하도록 시 0~596522, 분·초 0~59로 제한한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment02_time.c -o exercise -lm
./exercise
```

입력 예시:

```text
1 2 3
```

검증한 출력:

```text
seconds=3723
```

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 3: 교재 p.199–200 프로그래밍 연습 04·05·07번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
