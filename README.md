# Programming Language

**C 언어 수업 과제를 다시 풀며 정리한 코드·풀이·실행 결과.**

## 정리 목적

취업 준비를 위해 대학교 프로그래밍언어 수업을 복습하며 자료형, 제어문, 배열, 함수와 포인터를 활용한 문제 해결 과정을 정리했다.

## 대표 과제와 풀이

| 과제 요구사항 | 풀이 방법 | 확인한 결과 |
| --- | --- | --- |
| [평균과 학점 계산](week09/assignment01_grades.c) | 배열에 점수를 저장하고 평균에 따라 조건 분기 | 90·80·100·70·60점 입력 시 평균 80.00, B학점 |
| [5×3 행렬 전치](week09/assignment02_transpose.c) | 이중 반복문으로 행과 열의 위치를 교환 | 3×5 행렬의 원소 배치 확인 |
| [숫자 맞히기와 변수 유효범위](week12/README.md) | 전역 정답과 지역 입력을 구분하고 비교 함수를 별도 파일로 분리 | 대소 힌트 출력, 정답 입력 시 종료 |
| [용량 3의 스택](week12/assignment02_03_stack.c) | 배열과 top으로 push/pop, 가득 참·빈 상태 처리 | 3·5·9 삽입 후 9·5·3 순서로 반환 |
| [포인터로 최솟값 탐색](week13/assignment02_minimum.c) | 포인터로 순회하며 더 작은 원소의 주소 저장 | 최솟값 1.5, 첫 위치의 첨자 2 |

## 확인한 결과

**50개 C 프로그램 · 컴파일러별 178개 검사 통과 · 컴파일 경고 0개.** Windows에서 Zig와 Visual Studio의 MSVC로 확인했다.

정상 출력과 함께 학점 경계, 0 분모, 정수 오버플로, 반복 종료, 배열 복사와 스택의 가득 참·빈 상태를 검사했다. [검증 환경과 실행 기록](results/README.md) · [과제 대응과 구현 조건](docs/coverage.md)

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

실습자료 순서로 구성했으며, 각 문서에서 **요구사항 → 풀이 → 실행 결과**와 개별 실행 명령을 확인할 수 있다.

## 실행 방법

전체 검사는 Python 3.10 이상과 C11 컴파일러로 실행한다.

```bash
git clone https://github.com/ktw25079/Programming_Language.git
cd Programming_Language
python tools/verify.py --cc gcc
```

개별 프로그램은 Python 없이 실행할 수 있다. [컴파일러별 실행 안내](docs/reproduction.md) · [Visual Studio 솔루션](week01/mybook/README.md)

| 경로 | 내용 |
| --- | --- |
| [docs/](docs/README.md) | 원문 대응, 구현 선택, 입력과 빌드 조건 |
| [tests/](tests/README.md) | 프로그램 목록과 기대 출력 |
| [tools/](tools/README.md) | 컴파일·실행·경계값 검사 도구 |
| [results/](results/README.md) | 실제 검증 결과와 소스 해시 |
