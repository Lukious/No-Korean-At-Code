import sys
import re
from googletrans import Translator


def isHangul(text):
    #Check the Python Version
    pyVer3 =  sys.version_info >= (3, 0)

    if pyVer3 : # for Ver 3 or later
        encText = text
    else: # for Ver 2.x
        if type(text) is not unicode:
            encText = text.decode('utf-8')
        else:
            encText = text

    hanCount = len(re.findall(u'[\u3130-\u318F\uAC00-\uD7A3]+', encText))
    return hanCount > 0

if __name__ == '__main__':
    translator = Translator()
    i = 0
    filename = input("Input file name:")
    #filename = 'example.cpp'
    f = open('./code/'+filename, 'r',encoding='UTF-8')
    w_f = open('./code/Translated_'+filename, 'w',encoding='UTF-8')
    while True:
        line = f.readline()
        if not line: break
        splitedline=line.split(' ')
        while i < len(splitedline):
            #print(splitedline[i])
            if splitedline[i] == '':
                splitedline[i] = ' '
            else :
                splitedline[i] = splitedline[i]+' '
            if isHangul(splitedline[i]) == True:
                temp = ''.join(splitedline[i:])
                splitedline = ''.join(splitedline[0:i])
                tr_results = translator.translate(temp)
                splitedline = splitedline + tr_results.text
                #print(splitedline)
                break
            i += 1
        i = 0
        list2str = ''.join(splitedline)
        w_f.write(list2str + '\n')
        print(list2str)
    f.close()
    w_f.close()
print('DONE!')