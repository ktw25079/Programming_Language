# week07 · 조건문과 문자 판별

## 목표

실습자료 7번의 내용이 확인되는 과제를 C11 프로그램으로 구현하고 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_case.c](assignment01_case.c) | 과제 1 · 알파벳 대소문자 변환 | 실습 PDF p.7 |
| [assignment02_vowel.c](assignment02_vowel.c) | 과제 2 · 자음과 모음 | 실습 PDF p.8 |

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

## 결과

2개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

### 원문 추가 확인 항목

과제 3: 교재 p.287 프로그래밍 연습 06·07번. 07번은 for 대신 switch를 사용하라는 조건만 확인된다. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
