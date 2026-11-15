# week06 · 논리 연산과 수치 계산

논리식의 참·거짓을 확인하고 단리·복리와 이차방정식을 계산했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_logic.c](assignment01_logic.c) | 과제 1 · 논리식 여섯 개 | 실습 PDF p.9 |
| [assignment02_ex07_simple_interest.c](assignment02_ex07_simple_interest.c) | 과제 2 · 단리 만기 금액 | 교재 p.247 |
| [assignment03_ex08_compound_interest.c](assignment03_ex08_compound_interest.c) | 과제 3 · 복리 만기 금액 | 교재 p.248 |
| [assignment04_ex10_quadratic.c](assignment04_ex10_quadratic.c) | 과제 4 · 이차방정식의 근과 검산 | 교재 p.248 |

## 풀이와 실행 결과

### 과제 1 · 논리식 여섯 개

**요구사항:** 두 정수에 대한 여섯 논리식의 결과를 출력한다.

**풀이:** 비교 연산과 `&&`, `||`, `!`를 조합해 거짓은 0, 참은 1로 출력했다. 합·차는 `long long`으로 확장해 32비트 int 입력의 오버플로를 방지했다.

**입력 예시**

```text
100 55
```

**실행 결과**

```text
0
1
1
0
1
1
```

### 과제 2 · 단리 만기 금액

**요구사항:** 원금 100만원, 연 4.5%의 단리 만기 금액을 계산한다.

**풀이:** 기간을 입력받아 `원금*(1+이율*기간)`을 계산했다. 기간은 정수 0~1000년이며 원 단위 금액을 소수 둘째 자리까지 출력한다.

**입력 예시**

```text
5
```

**실행 결과**

```text
total=1225000.00 KRW
```

### 과제 3 · 복리 만기 금액

**요구사항:** 동일한 원금과 이율로 복리 만기 금액을 계산한다.

**풀이:** `pow(1+이율, 기간)`에 원금 100만원을 곱했다. 연 4.5%, 정수 0~1000년 조건으로 단리와 결과를 비교했다.

**입력 예시**

```text
5
```

**실행 결과**

```text
total=1246181.94 KRW
```

### 과제 4 · 이차방정식의 근과 검산

**요구사항:** 2x²+3x−4=0의 두 근을 구하고 원래 식에 대입해 검산한다.

**풀이:** 판별식과 근의 공식을 사용하고, 반올림 전 근을 원래 식에 대입했다. 잔차 절댓값이 1e−12 이하이면 정상 종료한다.

**실행 결과**

```text
root1=0.851 residual=0.000
root2=-2.351 residual=0.000
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 논리식 여섯 개**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment01_logic.c -o exercise -lm
./exercise
```

**과제 2 · 단리 만기 금액**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment02_ex07_simple_interest.c -o exercise -lm
./exercise
```

**과제 3 · 복리 만기 금액**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment03_ex08_compound_interest.c -o exercise -lm
./exercise
```

**과제 4 · 이차방정식의 근과 검산**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week06/assignment04_ex10_quadratic.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
