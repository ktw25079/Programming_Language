# week04 · 전처리·헤더·입출력

## 목표

실습자료 4번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_temperature.c](assignment01_temperature.c) | 과제 1 · 온도 변환 매크로 | 실습 PDF p.14 |
| [assignment02_time.c](assignment02_time.c) | 과제 2 · 헤더와 시간 변환 | 실습 PDF p.15 |
| [assignment03_ex04_codes.c](assignment03_ex04_codes.c) | 과제 3-04 · 문자와 진법별 코드 | 교재 p.199 |
| [assignment03_ex05_areas.c](assignment03_ex05_areas.c) | 과제 3-05 · 면적 출력의 필드 폭과 정렬 | 교재 p.199 |
| [assignment03_ex07_average.c](assignment03_ex07_average.c) | 과제 3-07 · 두 실수의 합과 평균 | 교재 p.200 |

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

### 과제 3-04 · 문자와 진법별 코드

교재 프로그래밍 연습 04번. 문자 한 바이트를 읽어 문자·8진·10진·16진 순서로 출력한다. 물음표도 유효한 문자이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex04_codes.c -o exercise -lm
./exercise
```

입력 예시:

```text
$
```

검증한 출력:

```text
$ 044 36 0x24
```

### 과제 3-05 · 면적 출력의 필드 폭과 정렬

교재 프로그래밍 연습 05번. 사각형은 %12.3f, 삼각형은 %-12.3f로 출력한다. 양쪽 길이는 0~1,000,000이며 같은 길이 단위로 입력한다. 결과 단위는 그 제곱이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex05_areas.c -o exercise -lm
./exercise
```

입력 예시:

```text
3.78 9.45
```

검증한 출력:

```text
rectangle:       35.721
triangle:  17.860
```

### 과제 3-07 · 두 실수의 합과 평균

교재 프로그래밍 연습 07번. 합과 평균을 모두 실수로 계산한다. 입력 절댓값 ≤ 1e100.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex07_average.c -o exercise -lm
./exercise
```

입력 예시:

```text
3.876 25.983
```

검증한 출력:

```text
sum=29.859000 average=14.929500
```

## 결과

5개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
