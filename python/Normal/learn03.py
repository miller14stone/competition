# encoding: utf-8
#
# 摂氏を入力すると、華氏で出力。華氏を入力すると、摂氏で出力。動作例: "41F"を入力すると"5C"、"5C"を入力すると"41F"と表示する

def convt():
    import re
    r = re.compile(r'^([\.\d]+)(CIF)$',re.l)
    t = raw_input('temperature(C or F)=(ex 5C, 41F, etc)?')
    q = r.match(t)
    if q:
        if q.group(2).upper() == 'C':
            print '%fF' % (float(q.group(1)) * 9/5 + 32)
        if q.group(2).upper() == 'F':
            print '%fC' % ((float(q.group(1)) - 32) * 5/9)

            
