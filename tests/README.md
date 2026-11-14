# 검사 명세

[programs.json](programs.json)은 프로그램별 원문 페이지, 빌드 소스, 입력과 기대 출력을 기록한다. `stdout: null`은 실행마다 값이 바뀌는 난수 게임이다. 주차별 설명의 추가 가정도 `note`에 기록했다.

전체 검사는 저장소 루트에서 `python tools/verify.py --cc gcc`로 실행한다. 경계값·오류·상태 전이 검사는 [verify.py](../tools/verify.py)에 있다.

`source: "textbook"`은 교재 인쇄 페이지, 이 필드가 없는 항목은 실습 PDF 페이지이다. `invalid_stdin`은 오류 입력을 별도로 지정하며, 문자 코드 예제는 물음표가 유효하므로 빈 입력(EOF)으로 검사한다. 출력은 UTF-8로 비교한다.

[function_contracts.c](function_contracts.c)는 실제 과제 함수를 포함해 배열 복사의 길이·독립성, 재귀 기저값, 최솟값 동률, 스택 경계와 비교 함수 반환값을 검사한다.
