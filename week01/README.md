# week01 · 개발 환경과 첫 실행

개발 환경을 구성하고 문자열과 줄바꿈을 출력하며 C 프로그램의 작성·빌드·실행 흐름을 복습했다.

## 과제와 코드

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [mybook 솔루션](mybook/README.md) | 과제 1 · 프로젝트 3개 구성 | 교재 p.97 내용점검 04 |
| [assignment02_ex02_languages.c](assignment02_ex02_languages.c) | 과제 2-02 · printf 한 번으로 여러 줄 출력 | 교재 p.100 |
| [assignment02_ex04_creators.c](assignment02_ex04_creators.c) | 과제 2-04 · puts 한 번으로 여러 줄 출력 | 교재 p.100 |
| [assignment02_ex06_stars.c](assignment02_ex06_stars.c) | 과제 2-06 · 네 줄 별 출력 | 교재 p.101 |
| [hello.c](hello.c) | 실습 1 · 첫 프로그램 | 실습 PDF p.2 |

## 풀이와 실행 결과

### 과제 1 · 프로젝트 3개 구성

**요구사항:** `mybook` 솔루션 아래 세 프로젝트를 구성한다.

**풀이:** `ch01`·`ch02`·`ch03`에 언어 이름·개발자 이름·별 출력 코드를 각각 연결하고 C11로 빌드하도록 설정했다.

**결과:** Debug/Release × Win32/x64 네 구성에서 빌드와 총 12회 실행이 성공했다. Visual Studio에서도 ch01의 정상 종료를 확인했다. [솔루션 안내](mybook/README.md) · [구성별 기록](../results/mybook_msvc.json)

### 과제 2-02 · printf 한 번으로 여러 줄 출력

**요구사항:** printf 한 번으로 다섯 언어의 이름을 한 줄씩 출력한다.

**풀이:** 문자열에 줄바꿈 문자 `\n`을 넣어 `printf` 한 번으로 C·Pascal·Java·Python·Kotlin을 출력했다.

**실행 결과**

```text
C
Pascal
Java
Python
Kotlin
```

### 과제 2-04 · puts 한 번으로 여러 줄 출력

**요구사항:** puts 한 번으로 세 개발자의 이름을 한 줄씩 출력한다.

**풀이:** 이름 사이에 `\n`을 넣고 마지막 줄바꿈은 `puts`가 추가하도록 작성했다. 한글 문자열은 UTF-8로 저장했다.

**실행 결과**

```text
데니스 리치
제임스 고슬링
귀도 반 로섬
```

### 과제 2-06 · 네 줄 별 출력

**요구사항:** 별의 개수를 1개부터 4개까지 늘려 네 줄로 출력한다.

**풀이:** 반복문 없이 네 줄의 문자열을 `printf`로 출력해 줄바꿈과 출력 순서를 확인했다.

**실행 결과**

```text
*
**
***
****
```

### 실습 1 · 첫 프로그램

**요구사항:** 첫 C 프로그램을 작성하고 빌드·실행한다.

**풀이:** `main`에서 `puts`로 인사말을 출력하고 `return 0`으로 정상 종료했다.

**실행 결과**

```text
Hello, C!
```

## 검증 결과

4개 프로그램을 Zig와 MSVC에서 C11로 빌드하고 실행했다. 경고 없이 컴파일되었으며 등록된 실행 검사를 통과했다.

[Zig 실행 로그](results/sample_run.txt) · [MSVC 실행 로그](results/sample_run_msvc.txt) · [전체 검증 결과](../results/README.md)

## 실행 방법

저장소 루트에서 아래 명령으로 한 프로그램씩 빌드·실행한다. GCC·Clang 계열 C11 컴파일러 기준이며, [Visual Studio 실행 방법](../docs/reproduction.md)도 확인할 수 있다.

<details>
<summary>과제별 컴파일·실행 명령</summary>

**과제 2-02 · printf 한 번으로 여러 줄 출력**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex02_languages.c -o exercise -lm
./exercise
```

**과제 2-04 · puts 한 번으로 여러 줄 출력**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex04_creators.c -o exercise -lm
./exercise
```

**과제 2-06 · 네 줄 별 출력**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex06_stars.c -o exercise -lm
./exercise
```

**실습 1 · 첫 프로그램**

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/hello.c -o exercise -lm
./exercise
```

</details>

[전체 목록](../README.md) · [과제 대응과 구현 조건](../docs/coverage.md)
