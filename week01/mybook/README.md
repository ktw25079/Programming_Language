# mybook 솔루션

교재 p.97 내용점검 04의 솔루션 `mybook`, 프로젝트 `ch01`·`ch02`·`ch03` 구성을 작성했다. 각 프로젝트에 Source Files·Header Files·Resource Files 필터가 있다. 빈 헤더·리소스 파일을 임의로 만들지는 않았다.

| 프로젝트 | 연결한 실행 예제 |
| --- | --- |
| ch01 | [언어 이름 출력](../assignment02_ex02_languages.c) |
| ch02 | [개발자 이름 출력](../assignment02_ex04_creators.c) |
| ch03 | [별 출력](../assignment02_ex06_stars.c) |

Visual Studio 2022의 C++ 데스크톱 개발 도구(v143, Windows 10/11 SDK)로 [mybook.sln](mybook.sln)을 열고, 실행할 프로젝트를 시작 프로젝트로 지정한다. 소스는 상위 폴더의 파일을 참조하므로 이 폴더만 따로 옮기지 않는다. 출력은 저장소의 `build/mybook/`에 생성된다.

솔루션의 프로젝트 연결·XML·소스 경로·필터를 검사했다. Visual Studio 2022 Community 17.14.45에서 네 구성(Debug/Release × Win32/x64)을 MSBuild로 빌드하고, 세 프로젝트를 각 구성에서 실행해 총 12회 기대 출력과 비교했다. 프로젝트는 C11·경고 수준 4·경고를 오류로 처리하도록 설정했다.

IDE에서도 Debug/x64로 빌드하고 Ctrl+F5로 ch01을 실행해 종료 코드 0을 확인했다. [구성별 결과](../../results/mybook_msvc.json)
