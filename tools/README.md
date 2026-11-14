# 검증 도구

[verify.py](verify.py)는 Python 표준 라이브러리만 사용해 각 C 프로그램을 따로 빌드하고 기대 출력·종료 코드·경계값을 확인한다. 빌드 실패나 출력 불일치가 있으면 비정상 종료한다. 프로그램별 실행 제한 시간은 5초이다.

```bash
python tools/verify.py --cc gcc
python tools/verify.py --cc "zig cc" --report
```

두 번째 명령은 실제 검사 기록을 갱신한다. [빌드 안내](../docs/reproduction.md)
