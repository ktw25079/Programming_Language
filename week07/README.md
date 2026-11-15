# week07 · 조건문과 문자 판별

if와 switch로 문자, 금액 구간, 월을 분류하는 조건 분기를 구현했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_case.c](assignment01_case.c) | 과제 1 · 알파벳 대소문자 변환 | 실습 PDF p.7 |
| [assignment02_vowel.c](assignment02_vowel.c) | 과제 2 · 자음과 모음 | 실습 PDF p.8 |
| [assignment03_ex06_tax_bracket.c](assignment03_ex06_tax_bracket.c) | 과제 3-06 · 교재 세율 구간 판별 | 교재 p.287 |
| [assignment03_ex07_quarter.c](assignment03_ex07_quarter.c) | 과제 3-07 · switch로 분기 판별 | 교재 p.287 |

## 풀이와 실행 결과

### 과제 1 · 알파벳 대소문자 변환

**요구사항:** 영문자의 대소문자를 서로 바꾸고 문자 코드를 출력한다.

**풀이:** 문자가 속한 범위를 확인해 `'a'`와 `'A'`의 차이만큼 변환했다. 영문자가 아니면 오류를 출력했다.

**입력 예시**

```text
A
```

**실행 결과**

```text
A(65) a(97)
```

### 과제 2 · 자음과 모음

**요구사항:** 입력한 영문자가 자음인지 모음인지 판별한다.

**풀이:** 대문자를 소문자로 통일한 뒤 `switch`에서 a·e·i·o·u를 모음으로, 나머지 영문자를 자음으로 분류했다.

**입력 예시**

```text
E
```

**실행 결과**

```text
vowel
```

### 과제 3-06 · 교재 세율 구간 판별

**요구사항:** 입력 금액이 속하는 교재 표의 세율 구간을 선택한다.

**풀이:** 금액을 `long long`으로 받고 `if-else`로 구간 상한을 차례로 비교했다. 0 이상의 원 단위 금액에 대해 교재에 지정된 세율을 출력한다.

**입력 예시**

```text
190000000
```

**실행 결과**

```text
income=190000000 KRW rate=38%
```

### 과제 3-07 · switch로 분기 판별

**요구사항:** 1~12월을 입력받아 switch로 분기를 판별한다.

**풀이:** 각 분기에 속한 세 달을 같은 `case` 처리로 묶고 1~4분기를 출력했다. 범위 밖의 월은 오류로 종료한다.

**입력 예시**

```text
7
```

**실행 결과**

```text
month=7 quarter=3
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 알파벳 대소문자 변환**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment01_case.c -o exercise -lm
./exercise
```

**과제 2 · 자음과 모음**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment02_vowel.c -o exercise -lm
./exercise
```

**과제 3-06 · 교재 세율 구간 판별**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment03_ex06_tax_bracket.c -o exercise -lm
./exercise
```

**과제 3-07 · switch로 분기 판별**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week07/assignment03_ex07_quarter.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
