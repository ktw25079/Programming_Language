# Programming Language

**C 언어 기초에서 배열·함수·포인터까지, 수업 과제를 실행 가능한 코드와 검증 결과로 정리한 저장소.**

## 정리 목적

취업 준비를 위해 대학교 프로그래밍언어 수업 과제를 다시 풀며 C 언어의 기본기를 복습했다. 문제의 요구사항을 코드로 구현하고, 입력에 따라 의도한 결과가 나오는지 확인해 풀이와 실행 결과를 주차별로 정리했다.

## 구현 과정

각 문제의 수식, 자료형, 함수 원형과 출력 형식을 확인하고 독립 실행 가능한 C 프로그램으로 구현했다.

| 과제 요구사항 | 풀이 방법 | 확인한 결과 |
| --- | --- | --- |
| 점수의 평균과 학점 계산 | 배열에 점수를 저장하고 평균에 따라 조건 분기 | 90·80·100·70·60점 입력 시 평균 80.00, B학점 |
| 5×3 행렬 전치 | 이중 반복문으로 행과 열의 위치를 교환 | 3×5 행렬의 원소 배치 확인 |
| 숫자 맞히기와 변수 유효범위 | 전역 정답과 지역 입력을 구분하고 비교 함수를 별도 파일로 분리 | 대소 힌트 출력, 정답 입력 시 종료 |
| 용량 3의 스택 구현 | 배열과 top으로 push/pop, 가득 참·빈 상태 처리 | 3·5·9 삽입 후 9·5·3 순서로 반환 |
| 포인터를 이용한 배열 탐색 | 포인터 이동으로 원소에 접근해 역순 출력과 최솟값 탐색 | 배열 경계와 최솟값·위치 확인 |

`week01`–`week13`에 실습자료 순서대로 코드와 풀이를 정리했다.

## 확인한 결과

**50개 독립 실행 프로그램 · 178개 실행 검사 통과 · C11 경고 0개.** Windows에서 **Zig 0.14.1과 Visual Studio 2022의 MSVC 19.44.35230으로 각각 확인**했다.

- 정상 입력뿐 아니라 학점 경계, 반복 종료·재실행, 0 분모, 음수 지수와 정수 오버플로를 검사했다.
- 배열 전치, 스택 LIFO·용량 초과·빈 스택, 난수 게임의 정답 도달과 대소 힌트를 확인했다.
- 1주차 `mybook` 솔루션은 Debug/Release × Win32/x64 네 구성을 빌드하고 실행했다. Visual Studio 화면에서도 `ch01`의 정상 종료를 확인했다. [문항 대응과 구현 선택](docs/coverage.md)

[검증 결과](results/README.md) · [전체 검사 기록](results/verification.json) · [참고 자료](docs/provenance.md)

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

각 주차에서 **요구사항 → 풀이 → 실행 결과** 순서로 문제 요약, 원문 페이지, 코드, 입력 예시와 실제 로그를 확인할 수 있다.

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
