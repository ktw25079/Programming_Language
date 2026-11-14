# week07 · 조건문과 문자 판별

## 목표

실습자료 7번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_case.c](assignment01_case.c) | 과제 1 · 알파벳 대소문자 변환 | 실습 PDF p.7 |
| [assignment02_vowel.c](assignment02_vowel.c) | 과제 2 · 자음과 모음 | 실습 PDF p.8 |
| [assignment03_ex06_tax_bracket.c](assignment03_ex06_tax_bracket.c) | 과제 3-06 · 교재 세율 구간 판별 | 교재 p.287 |
| [assignment03_ex07_quarter.c](assignment03_ex07_quarter.c) | 과제 3-07 · switch로 분기 판별 | 교재 p.287 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 1 · 알파벳 대소문자 변환

ASCII 영문자 한 글자.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment01_case.c -o exercise -lm
./exercise
```

입력 예시:

```text
A
```

검증한 출력:

```text
A(65) a(97)
```

### 과제 2 · 자음과 모음



```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment02_vowel.c -o exercise -lm
./exercise
```

입력 예시:

```text
E
```

검증한 출력:

```text
vowel
```

### 과제 3-06 · 교재 세율 구간 판별

교재 프로그래밍 연습 06번. 교재 표의 세율만 선택하는 조건문 연습이며 실제 세금 계산기가 아니다. 입력은 0~LLONG_MAX의 정수 원 금액.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment03_ex06_tax_bracket.c -o exercise -lm
./exercise
```

입력 예시:

```text
190000000
```

검증한 출력:

```text
income=190000000 KRW rate=38%
```

### 과제 3-07 · switch로 분기 판별

교재 프로그래밍 연습 07번. 수업자료가 지정한 switch로 구현한다. 1~12월만 허용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment03_ex07_quarter.c -o exercise -lm
./exercise
```

입력 예시:

```text
7
```

검증한 출력:

```text
month=7 quarter=3
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
