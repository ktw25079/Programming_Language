# 검증 도구

[verify.py](verify.py)는 Python 표준 라이브러리만 사용해 각 C 프로그램을 따로 빌드하고 기대 출력·종료 코드·경계값을 확인한다. 빌드 실패나 출력 불일치가 있으면 비정상 종료한다. 프로그램별 실행 제한 시간은 5초이다.

```bash
python tools/verify.py --cc gcc
python tools/verify.py --cc "zig cc" --report
python tools/verify.py --cc cl --report
```

`cl`은 Visual Studio의 x64 Native Tools Command Prompt에서 실행한다. MSVC에는 `/TC /std:c11 /W4 /WX /utf-8`을 적용하고, 다른 컴파일러에는 기존 C11 경고 옵션을 적용한다.

`--report`는 실제 검사 기록을 갱신한다. MSVC 결과는 `results/verification_msvc.json`과 주차별 `sample_run_msvc.txt`에 별도로 저장해 기존 검증 기록을 보존한다. 실행 파일은 `build/msvc/` 또는 `build/portable/`에 생성한다. [빌드 안내](../docs/reproduction.md)
