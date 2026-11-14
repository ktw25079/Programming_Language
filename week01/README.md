# week01 · 개발 환경과 첫 실행

## 목표

실습자료 1번의 첫 프로그램 생성·실행 흐름을 확인한다.

## 과정

| 코드 | 요구사항 | 원문 위치 |
| --- | --- | --- |
| [hello.c](hello.c) | 실습 1 · 첫 프로그램 | 실습 PDF p.2 |

각 프로그램은 별도의 `main`을 가진다. 저장소 루트에서 **한 프로그램씩** 컴파일한다.

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

1개 프로그램의 경고 없는 컴파일과 실행을 확인했다. [실제 실행 로그](results/sample_run.txt) · [전체 검사 결과](../results/verification.json)

명령줄 컴파일·실행 결과이며, Visual Studio GUI에서 프로젝트를 생성하거나 디버거를 조작한 기록은 아니다.

### 원문 추가 확인 항목

과제 1: 교재 p.97 내용점검 4번(프로젝트 생성). 과제 2: p.100–101 프로그래밍 연습 02·04·06번. 문제 본문이 없어 풀이 완료로 계산하지 않았다.

[전체 목록](../README.md) · [입력·빌드 안내](../docs/reproduction.md) · [출처와 범위](../docs/provenance.md)
