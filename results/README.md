# 검증 결과

2026-11-15 Windows에서 전체 과제 **50개 프로그램·178개 검사**를 Zig와 MSVC로 각각 통과했다. 두 빌드 모두 경고를 오류로 처리했다.

| 검증 환경 | 결과 | 기록 |
| --- | --- | --- |
| GCC 11.4.0, Linux x86_64, C11 | 50개 프로그램·178개 검사 통과 | [verification_gcc_linux.json](verification_gcc_linux.json) |
| Zig 0.14.1, C11 | 50개 프로그램·178개 검사 통과 | [verification.json](verification.json) |
| Visual Studio 2022 Community 17.14.45, MSVC 19.44.35230 x64, C11 | 50개 프로그램·178개 검사 통과 | [verification_msvc.json](verification_msvc.json) |
| mybook, MSBuild·v143·Windows SDK 10.0.26100.0 | 네 구성 빌드 성공·12회 실행 출력 일치 | [mybook_msvc.json](mybook_msvc.json) |

전체 과제는 MSVC의 `/TC /std:c11 /W4 /WX /utf-8` 옵션으로 자동 빌드·실행했다. 솔루션은 Debug/Release × Win32/x64의 네 구성을 확인했다. Visual Studio에서는 `mybook`의 Debug/x64 빌드와 ch01의 Ctrl+F5 실행, 종료 코드 0을 확인했다.

## 검사 내용과 기록

정상 출력, 오류 입력, 학점·세율 경계, 정수 오버플로, 반복 종료, 배열 복사, 스택 LIFO·빈 상태·재사용, 포인터와 재귀 함수의 조건을 확인했다. 난수 게임은 모든 후보를 입력하고 정답 도달 시점에서 이전 힌트의 일관성을 검사한다.

검사 JSON에는 플랫폼·컴파일러·검사 항목·C 소스와 헤더 SHA-256이 있다. 각 주차의 `results/sample_run.txt`는 Zig, `results/sample_run_msvc.txt`는 MSVC 실제 입출력이다. [기대값](../tests/programs.json) · [검증 도구](../tools/verify.py) · [빌드 안내](../docs/reproduction.md)

교재 예제와의 대응 및 구현 선택은 [과제 대응 문서](../docs/coverage.md)에 정리했다.
