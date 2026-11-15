# week11 · 배열 함수·난수·재귀

배열을 함수에 전달해 수정하고 난수 게임과 재귀적 누적합을 구현했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_matrix.c](assignment01_matrix.c) | 과제 1 · 2차원 배열 증가 함수 | 실습 PDF p.10 |
| [assignment02_guess.c](assignment02_guess.c) | 과제 2 · 난수 알아맞히기 | 실습 PDF p.11 |
| [assignment03_recursive_sum.c](assignment03_recursive_sum.c) | 과제 3 · 재귀적 누적합 nplus | 교재 p.403 |

## 풀이와 실행 결과

### 과제 1 · 2차원 배열 증가 함수

**요구사항:** 함수에 2차원 배열을 전달해 모든 원소에 입력값을 더한다.

**풀이:** 예제 배열은 2×3 크기에 1~6을 저장했다. `increase`가 이중 반복문으로 원본을 수정하고 `print_matrix`가 전후를 출력한다. 증가량은 −1,000,000~1,000,000이다.

**입력 예시**

```text
2
```

**실행 결과**

```text
before:
1 2 3
4 5 6
after:
3 4 5
6 7 8
```

### 과제 2 · 난수 알아맞히기

**요구사항:** 1~100 난수를 만들고 입력값에 따라 힌트를 주며 정답을 찾는다.

**풀이:** `srand`로 초기화한 뒤 `rand()%100+1`로 정답을 정했다. 입력이 작으면 `higher`, 크면 `lower`, 같으면 `correct`를 출력하고 종료한다.

**실행 결과:** 1~100 후보 입력 검사에서 대소 힌트와 정답 도달 후 종료를 확인했다. 정답은 실행마다 달라질 수 있다.

### 과제 3 · 재귀적 누적합 nplus

**요구사항:** 재귀 함수 nplus로 1부터 n까지의 합을 구한다.

**풀이:** 종료 조건 `S(0)=0`과 재귀식 `S(n)=n+S(n−1)`을 구현했다. n=1~10에 대해 함수를 호출했다.

**실행 결과**

```text
n=1 sum=1
n=2 sum=3
n=3 sum=6
n=4 sum=10
n=5 sum=15
n=6 sum=21
n=7 sum=28
n=8 sum=36
n=9 sum=45
n=10 sum=55
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 2차원 배열 증가 함수**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment01_matrix.c -o exercise -lm
./exercise
```

**과제 2 · 난수 알아맞히기**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment02_guess.c -o exercise -lm
./exercise
```

**과제 3 · 재귀적 누적합 nplus**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week11/assignment03_recursive_sum.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
