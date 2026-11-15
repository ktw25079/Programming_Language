# week04 · 전처리·헤더·입출력

매크로·헤더로 계산식을 분리하고 입력값과 출력 형식을 다루는 방법을 복습했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_temperature.c](assignment01_temperature.c) | 과제 1 · 온도 변환 매크로 | 실습 PDF p.14 |
| [assignment02_time.c](assignment02_time.c) | 과제 2 · 헤더와 시간 변환 | 실습 PDF p.15 |
| [assignment03_ex04_codes.c](assignment03_ex04_codes.c) | 과제 3-04 · 문자와 진법별 코드 | 교재 p.199 |
| [assignment03_ex05_areas.c](assignment03_ex05_areas.c) | 과제 3-05 · 면적 출력의 필드 폭과 정렬 | 교재 p.199 |
| [assignment03_ex07_average.c](assignment03_ex07_average.c) | 과제 3-07 · 두 실수의 합과 평균 | 교재 p.200 |

## 풀이와 실행 결과

### 과제 1 · 온도 변환 매크로

**요구사항:** 섭씨 온도를 입력받아 켈빈과 화씨로 변환한다.

**풀이:** `C2K(x)=x+273.15`, `C2F(x)=1.8*x+32`를 함수형 매크로로 작성했다. 섭씨 −273.15~1,000,000 범위의 유한값을 입력받는다.

**입력 예시**

```text
100
```

**실행 결과**

```text
kelvin=373.150 fahrenheit=212.000
```

### 과제 2 · 헤더와 시간 변환

**요구사항:** 별도 헤더의 자료형과 매크로를 사용해 시·분·초를 초로 환산한다.

**풀이:** [time_units.h](time_units.h)에 `mytime`과 `TO_SECONDS`를 정의해 `시*3600+분*60+초`를 계산했다. 시는 0~596522, 분·초는 0~59로 제한해 int 범위 안에서 계산한다.

**입력 예시**

```text
1 2 3
```

**실행 결과**

```text
seconds=3723
```

### 과제 3-04 · 문자와 진법별 코드

**요구사항:** 입력 문자와 해당 코드의 8진·10진·16진 표현을 출력한다.

**풀이:** `getchar`로 한 바이트를 읽고 `%c`, `%#o`, `%u`, `%#x`를 사용했다. 8진수와 16진수에는 접두사를 표시했다.

**입력 예시**

```text
$
```

**실행 결과**

```text
$ 044 36 0x24
```

### 과제 3-05 · 면적 출력의 필드 폭과 정렬

**요구사항:** 두 길이로 사각형·삼각형 면적을 구하고 지정한 폭과 정렬로 출력한다.

**풀이:** 가로×세로와 그 절반을 계산하고 `%12.3f`는 오른쪽, `%-12.3f`는 왼쪽 정렬에 사용했다. 두 길이는 같은 단위의 0~1,000,000 값이며 결과는 그 제곱 단위이다.

**입력 예시**

```text
3.78 9.45
```

**실행 결과**

```text
rectangle:       35.721
triangle:  17.860
```

### 과제 3-07 · 두 실수의 합과 평균

**요구사항:** 두 실수의 합과 평균을 출력한다.

**풀이:** `double`로 입력받아 `a+b`, `(a+b)/2.0`을 계산했다. 정수 나눗셈을 피하고 소수 여섯째 자리까지 출력한다. 입력 절댓값은 1e100 이하이다.

**입력 예시**

```text
3.876 25.983
```

**실행 결과**

```text
sum=29.859000 average=14.929500
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 온도 변환 매크로**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment01_temperature.c -o exercise -lm
./exercise
```

**과제 2 · 헤더와 시간 변환**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment02_time.c -o exercise -lm
./exercise
```

**과제 3-04 · 문자와 진법별 코드**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex04_codes.c -o exercise -lm
./exercise
```

**과제 3-05 · 면적 출력의 필드 폭과 정렬**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex05_areas.c -o exercise -lm
./exercise
```

**과제 3-07 · 두 실수의 합과 평균**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week04/assignment03_ex07_average.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
