# week01 · 개발 환경과 첫 실행

## 목표

실습자료 1번의 과제를 구현하고 교재의 조건과 실행 결과를 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [mybook 솔루션](mybook/README.md) | 과제 1 · 프로젝트 3개 구성 | 교재 p.97 내용점검 04 |
| [assignment02_ex02_languages.c](assignment02_ex02_languages.c) | 과제 2-02 · printf 한 번으로 여러 줄 출력 | 교재 p.100 |
| [assignment02_ex04_creators.c](assignment02_ex04_creators.c) | 과제 2-04 · puts 한 번으로 여러 줄 출력 | 교재 p.100 |
| [assignment02_ex06_stars.c](assignment02_ex06_stars.c) | 과제 2-06 · 네 줄 별 출력 | 교재 p.101 |
| [hello.c](hello.c) | 실습 1 · 첫 프로그램 | 실습 PDF p.2 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

### 과제 2-02 · printf 한 번으로 여러 줄 출력

교재 프로그래밍 연습 02번. printf 호출 한 번과 줄바꿈 이스케이프를 사용한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex02_languages.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
C
Pascal
Java
Python
Kotlin
```

### 과제 2-04 · puts 한 번으로 여러 줄 출력

교재 프로그래밍 연습 04번. puts가 마지막 줄바꿈을 추가한다. 소스·출력은 UTF-8이다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex04_creators.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
데니스 리치
제임스 고슬링
귀도 반 로섬
```

### 과제 2-06 · 네 줄 별 출력

교재 프로그래밍 연습 06번. 입출력 기초 단계에 맞춰 반복문 없이 작성한다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/assignment02_ex06_stars.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
*
**
***
****
```

### 실습 1 · 첫 프로그램

Visual Studio 프로젝트 생성 연습에 대응하는 새 예제. 교재 과제의 대체 풀이가 아니다.

```bash
cc -std=c11 -Wall -Wextra -Wpedantic week01/hello.c -o exercise -lm
./exercise
```

표준입력이 필요 없는 고정 예제이다.

검증한 출력:

```text
Hello, C!
```

## 결과

4개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

[Visual Studio 솔루션](mybook/README.md)은 파일 구성을 검사했으며 GUI 실행은 수행하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
