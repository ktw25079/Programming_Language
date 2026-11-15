# week13 · 포인터와 배열

포인터 이동과 역참조로 배열을 탐색하고 자료형 크기에 따른 메모리 접근을 확인했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [assignment01_reverse.c](assignment01_reverse.c) | 과제 1 · 포인터로 배열 역순 출력 | 실습 PDF p.10 |
| [assignment02_minimum.c](assignment02_minimum.c) | 과제 2 · double 포인터로 최솟값과 첨자 | 교재 p.504 |
| [assignment03_ex04_pointer_halves.c](assignment03_ex04_pointer_halves.c) | 과제 3 · int와 short의 저장 단위 | 교재 p.504 |

## 풀이와 실행 결과

### 과제 1 · 포인터로 배열 역순 출력

**요구사항:** 포인터를 이용해 배열을 역순으로 출력한다.

**풀이:** 0~9 배열의 끝 다음 위치에서 포인터를 시작해, 한 칸 감소시킨 뒤 역참조했다. 첫 원소를 출력한 후 종료해 배열 시작 이전으로 이동하지 않도록 했다.

**실행 결과**

```text
9 8 7 6 5 4 3 2 1 0
```

### 과제 2 · double 포인터로 최솟값과 첨자

**요구사항:** double 포인터로 최솟값과 첨자를 찾는다.

**풀이:** `sizeof`로 원소 수를 구하고 `double *p`로 순회하며 더 작은 값의 주소를 저장했다. 예제 배열은 `{8.0, 3.2, 1.5, 7.1, 1.5}`이며 같은 최솟값이 있으면 첫 위치를 반환한다. 비어 있지 않은 배열을 받는다.

**실행 결과**

```text
minimum=1.5 index=2
```

### 과제 3 · int와 short의 저장 단위

**요구사항:** int와 short의 크기에 따른 저장 단위와 포인터 접근을 확인한다.

**풀이:** C11 `_Static_assert`로 int 4바이트·short 2바이트·8비트 바이트를 확인하고 실행 시 리틀엔디언을 검사한다. `memcpy`로 int를 short 배열에 복사해 상위 절반을 수정한 뒤 되돌렸다. 서로 다른 자료형의 포인터로 직접 역참조하지 않고 최종 정수값 `0x000F00FF`를 확인했다.

**실행 결과**

```text
255
255 15
```

## 실행과 검증

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

아래 명령은 저장소 루트에서 실행한다(GCC·Clang 계열). [Visual Studio 안내](../docs/reproduction.md)

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 1 · 포인터로 배열 역순 출력**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment01_reverse.c -o exercise -lm
./exercise
```

**과제 2 · double 포인터로 최솟값과 첨자**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment02_minimum.c -o exercise -lm
./exercise
```

**과제 3 · int와 short의 저장 단위**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week13/assignment03_ex04_pointer_halves.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
