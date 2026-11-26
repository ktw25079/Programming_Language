# week10 · 함수와 원형

계산과 판정을 함수로 나누고 함수 원형, 인자와 반환값을 사용하는 방법을 복습했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_seconds.c](assignment01_seconds.c) | 과제 1 · 시간 변환 함수와 종료 조건 | 실습 PDF p.8 |
| [assignment02_grades.c](assignment02_grades.c) | 과제 2 · 평균·학점 함수 | 실습 PDF p.9 |
| [assignment03_power.c](assignment03_power.c) | 과제 3 · 정수 거듭제곱 함수 | 실습 PDF p.10 |
| [assignment04_copy.c](assignment04_copy.c) | 과제 4 · 지정 원형으로 배열 복사 | 교재 p.422 |

## 풀이와 실행 결과

### 과제 1 · 시간 변환 함수와 종료 조건

**요구사항:** 시간 변환 함수를 사용해 반복 계산하고 0시 0분 0초에서 종료한다.

**풀이:** 원형을 선언한 `to_seconds`가 `시*3600+분*60+초`를 반환하도록 했다. 시 0~596522, 분·초 0~59를 받고 `0 0 0`은 계산 결과를 출력하지 않고 종료한다.

**입력 예시**

```text
1 2 3
0 0 0
```

**실행 결과**

```text
seconds=3723
```

### 과제 2 · 평균·학점 함수

**요구사항:** 세 과목의 평균과 학점을 각각 함수로 계산한다.

**풀이:** `average`는 실수 평균을, `grade`는 평균 구간에 해당하는 문자를 반환한다. 국어·수학·영어 각 0~100점과 계속 여부 1/0을 입력받아 반복한다.

**입력 예시**

```text
90 100 80 0
```

**실행 결과**

```text
average=90.00 grade=A
```

### 과제 3 · 정수 거듭제곱 함수

**요구사항:** 정수 x의 y제곱을 반환하는 함수를 작성한다.

**풀이:** `getMultiple`에서 초기값 1에 x를 y번 곱했다. x는 −100~100, y는 0~30이며 호출 전 int 범위 초과를 확인한다. 지수 0은 0^0을 포함해 1로 처리했다.

**입력 예시**

```text
-3 3
```

**실행 결과**

```text
power=-27
```

### 과제 4 · 지정 원형으로 배열 복사

**요구사항:** 지정된 함수 원형으로 배열의 앞 n개 원소를 복사한다.

**풀이:** `void copyarray(int from[], int to[], int n)`에서 인덱스 0~n−1만 복사했다. 길이 5인 a를 길이 6인 b에 복사해 마지막 값 60을 보존했다. 두 배열은 n개 이상의 원소를 가져야 한다.

**실행 결과**

```text
a: 4 7 9 3 6
b before: 10 20 30 40 50 60
b after: 4 7 9 3 6 60
```

[함수 검사](../tests/function_contracts.c)에서 0개 복사, 복사 범위 밖 값 보존, 원본 변경 후 대상 배열의 독립성을 확인했다.

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 시간 변환 함수와 종료 조건**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment01_seconds.c -o exercise -lm
./exercise
```

**과제 2 · 평균·학점 함수**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment02_grades.c -o exercise -lm
./exercise
```

**과제 3 · 정수 거듭제곱 함수**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment03_power.c -o exercise -lm
./exercise
```

**과제 4 · 지정 원형으로 배열 복사**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week10/assignment04_copy.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
