# 검사 명세

[programs.json](programs.json)은 프로그램별 원문 페이지, 빌드 소스, 입력과 기대 출력을 기록한다. `stdout: null`은 실행마다 값이 바뀌는 난수 게임이다. 주차별 설명의 추가 가정도 `note`에 기록했다.

전체 검사는 저장소 루트에서 `python tools/verify.py --cc gcc`로 실행한다. 경계값·오류·상태 전이 검사는 [verify.py](../tools/verify.py)에 있다.
