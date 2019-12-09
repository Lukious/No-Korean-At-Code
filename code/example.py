#한글주석이 가득한
#파이선 프로그래밍

import sys #시스템 라이브러리 추가
import re

def isHangul(text):	#한글 라이브러리
    #버전 확인
    pyVer3 =  sys.version_info >= (3, 0)

    if pyVer3 : # 한글 체크
        encText = text