# Programming Language

**C 언어 기초에서 배열·함수·포인터까지, 수업 과제를 실행 가능한 코드와 검증 결과로 정리한 저장소.**

## 정리 목적

대학교 프로그래밍언어 수업에서 다룬 문제를 다시 구현하며 자료형, 제어 흐름, 함수 분리와 메모리 접근을 설명할 수 있도록 정리했다. 제공된 2024년 실습자료를 바탕으로 **2026년에 AI 도구의 도움을 받아 새로 작성·검증한 복습 코드**이며, 당시 제출본이나 성적·수행 실적을 복원한 자료는 아니다.

## 구현 과정

실습 PDF의 과제 조건과 이미지 속 수식·출력 예시를 확인하고, 과제별로 독립 실행 가능한 C 파일을 작성했다. 시간 변환은 매크로와 함수로 각각 구현했으며, 전역변수 실습은 두 소스 파일로 분리했다. 스택은 가득 참·비어 있음, 포인터 역순 출력은 배열 경계까지 확인한다.

폴더 `week01`–`week13`은 **실습자료 1–13번의 순서**이다. 시험·휴강을 포함한 실제 달력 주차와의 대응은 제공 자료만으로 확정하지 않았다. 이론자료 00–14번은 개념 확인에 사용했다.

## 확인한 결과

**50개 독립 실행 프로그램 · 178개 실행 검사 통과 · C11 경고 0개.** Windows에서 Zig 0.14.1의 C 컴파일러로 확인했다.

- 정상 입력뿐 아니라 학점 경계, 반복 종료·재실행, 0 분모, 음수 지수와 정수 오버플로를 검사했다.
- 배열 전치, 스택 LIFO·용량 초과·빈 스택, 난수 게임의 정답 도달과 대소 힌트를 확인했다.
- 추가 교재 사진을 반영해 22개 프로그램을 보완하고, 배열 복사·전역변수·스택·최솟값 풀이를 교재 조건에 맞췄다.
- 1주차 `mybook` 솔루션과 3개 프로젝트를 추가했다. Visual Studio GUI 실행은 수행하지 않았다. [문항 대응과 구현 선택](docs/coverage.md)

[검증 방법과 한계](results/README.md) · [기계 판독 검사 결과](results/verification.json) · [코드 출처](docs/provenance.md)

## 주차별 코드

| 실습 | 다룬 내용 | 실행 프로그램 |
| --- | --- | ---: |
| [week01](week01/README.md) | 개발 환경과 첫 실행 | 4 |
| [week02](week02/README.md) | 변수·문자·실수 | 4 |
| [week03](week03/README.md) | 상수와 자료형 | 5 |
| [week04](week04/README.md) | 전처리·헤더·입출력 | 5 |
| [week05](week05/README.md) | 산술식과 비교 | 4 |
| [week06](week06/README.md) | 논리 연산과 수치 계산 | 4 |
| [week07](week07/README.md) | 조건문과 문자 판별 | 4 |
| [week08](week08/README.md) | 반복문 | 4 |
| [week09](week09/README.md) | 배열과 행렬 연산 | 4 |
| [week10](week10/README.md) | 함수와 원형 | 4 |
| [week11](week11/README.md) | 배열 함수·난수·재귀 | 3 |
| [week12](week12/README.md) | 변수 유효범위와 스택 | 2 |
| [week13](week13/README.md) | 포인터와 배열 | 3 |

각 주차에서 **목표 → 과정 → 결과** 순서로 문제 요약, 원문 페이지, 코드, 입력 예시와 실제 로그를 확인할 수 있다.

## 실행 방법

Python 3.10 이상과 C11 컴파일러가 필요하다. 개별 C 프로그램 실행에는 Python이 필요 없다.

```bash
git clone https://github.com/ktw25079/Programming_Language.git
cd Programming_Language
python tools/verify.py --cc gcc
```

Zig를 사용하는 경우:

```bash
python tools/verify.py --cc "zig cc"
```

개별 예제는 주차별 명령으로 실행한다. Visual Studio의 1주차 예제는 [mybook 솔루션](week01/mybook/README.md)을 열어 실행한다. 다른 예제는 C 파일 하나를 프로젝트에 추가하고, `week12` 난수 게임만 두 파일을 함께 추가한다. [Windows·Visual Studio 안내](docs/reproduction.md)

| 경로 | 내용 |
| --- | --- |
| `week01/`–`week13/` | 과제별 코드·설명·실행 로그 |
| [docs/](docs/README.md) | 원문 대응, 구현 선택, 입력과 빌드 조건 |
| [tests/](tests/README.md) | 프로그램 목록과 기대 출력 |
| [tools/](tools/README.md) | 컴파일·실행·경계값 검사 도구 |
| [results/](results/README.md) | 실제 검증 결과와 소스 해시 |
