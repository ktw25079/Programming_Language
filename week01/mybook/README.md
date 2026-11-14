# mybook 솔루션

교재 p.97 내용점검 04의 솔루션 `mybook`, 프로젝트 `ch01`·`ch02`·`ch03` 구성을 작성했다. 각 프로젝트에 Source Files·Header Files·Resource Files 필터가 있다. 빈 헤더·리소스 파일을 임의로 만들지는 않았다.

| 프로젝트 | 연결한 실행 예제 |
| --- | --- |
| ch01 | [언어 이름 출력](../assignment02_ex02_languages.c) |
| ch02 | [개발자 이름 출력](../assignment02_ex04_creators.c) |
| ch03 | [별 출력](../assignment02_ex06_stars.c) |

Visual Studio 2022의 C++ 데스크톱 개발 도구(v143, Windows 10/11 SDK)로 [mybook.sln](mybook.sln)을 열고, 실행할 프로젝트를 시작 프로젝트로 지정한다. 소스는 상위 폴더의 파일을 참조하므로 이 폴더만 따로 옮기지 않는다. 출력은 저장소의 `build/mybook/`에 생성된다.

솔루션의 프로젝트 연결·XML·소스 경로·필터를 자동 검사했다. 연결된 C 코드의 실행은 Zig로 검증했으며, Visual Studio 자체의 빌드·GUI 실행은 수행하지 않았다.
