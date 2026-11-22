# 빌드와 입력 안내

## 전체 검증

저장소 루트에서 Python 3.10 이상과 C11 컴파일러로 실행한다. 외부 Python 패키지는 필요 없다.

```bash
python3 tools/verify.py --cc gcc
python3 tools/verify.py --cc "zig cc"
```

컴파일러 경로에 공백이 있으면 `--cc` 값 안에서 실행 파일 경로를 따옴표로 감싼다. 출력은 `build/`에 생성한다. 프로그램마다 독립된 `main`이 있으므로 모든 C 파일을 한 번에 링크하지 않는다. `week12/assignment01_guess.c`만 `week12/guess.c`와 함께 링크한다.

기록을 새 실행 결과로 갱신하려면 `--report`를 붙인다. 이 옵션은 해당 컴파일러의 검사 JSON과 주차별 실행 로그를 갱신한다. Zig/GCC 계열은 `verification.json`·`sample_run.txt`, MSVC는 `verification_msvc.json`·`sample_run_msvc.txt`를 사용한다. 일반 검증은 저장된 기록을 수정하지 않는다.

## Windows와 Visual Studio

1주차는 [mybook 솔루션](../week01/mybook/README.md)을 제공한다. Visual Studio의 C++ 데스크톱 개발 도구가 설치되어 있다면 빈 콘솔 프로젝트를 만들고 원하는 `.c` 파일을 추가한다. 확장자는 `.c`로 유지한다. 같은 폴더의 `.h` 파일도 함께 보관한다. MSVC가 `scanf`에 C4996 경고를 표시하면 해당 프로젝트의 전처리기 정의에 `_CRT_SECURE_NO_WARNINGS`를 추가할 수 있다. Visual Studio 2022 Community 17.14.45의 MSVC와 Zig에서 각각 빌드·실행을 확인했다.

MSVC 전체 검사는 **x64 Native Tools Command Prompt for VS 2022**에서 저장소 루트로 이동한 뒤 실행한다. Python이 PATH에 없다면 설치된 Python 실행 파일의 절대경로를 사용한다.

```bat
python tools/verify.py --cc cl --report
msbuild week01\mybook\mybook.sln /t:Rebuild /p:Configuration=Debug /p:Platform=x64
```

솔루션의 `Configuration`은 Debug/Release, `Platform`은 Win32/x64로 바꿔 빌드할 수 있다. 전체 과제 검사는 x64이며, 솔루션 세 예제는 네 구성을 모두 검사했다. MSVC의 기록은 `_msvc` 접미사를 붙여 기존 Zig 기록과 구분한다.

명령줄 예제의 `./exercise`는 Windows에서는 `.\exercise.exe`로 실행한다. 실행 파일은 저장소에 포함하지 않는다.

## 입력 계약

주차별 README의 순서에 따라 공백 또는 줄바꿈으로 구분한 값을 입력한다. 프로그램은 검사 자동화를 위해 입력 프롬프트 없이 결과를 출력한다. 정수 입력은 **각 변수의 정수형으로 표현 가능한 숫자** (대부분 32비트 int, 세율 예제의 소득은 long long)를 전제로 한다. 숫자가 아닌 입력이나 프로그램별 범위 밖의 값은 대부분 종료 코드 1로 거부한다. 범위를 넘는 정수 문자열을 안전하게 파싱하는 범용 입력 라이브러리는 이 기초 `scanf` 실습의 범위가 아니다.

문자 코드 연산은 ASCII 기준이다. 개발자 이름 출력 소스와 출력은 UTF-8이며 MSVC는 `/utf-8` 옵션을 사용한다. Windows 터미널에서도 UTF-8 표시 설정을 사용한다. 수치 예제의 추가 범위 제한, 종료 값, 배열 초기값은 각 README에 명시했다. 고정 예제는 표준입력이 없다. 난수 게임은 1~100 값을 반복 입력하고, 구구단·함수 성적 처리는 계속 여부 1 또는 0을 입력한다. 시간 함수는 0 0 0으로 종료한다.

실수 출력은 표시 자릿수로 반올림되지만 학점 판정에는 반올림 전 평균을 쓴다. 난수 값은 실행마다 달라질 수 있어 저장된 로그와 숫자 순서가 같을 필요는 없다.
