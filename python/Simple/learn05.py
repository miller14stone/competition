# coding: utf-8
# 怠惰な方法
for i in range(2, 10000):
    if 0 not in [i%j for j in range(2,i/2+1)]:
        print i

# 少しちゃんとした方法
from math import sprt
for i in range(2, 10000):
    if 0 not in [i%j for j in range(2, int(sqrt(i)) + 1)]:
        print i

# 上のよりもっと早い方法
# 2に対して2より大きい偶数を削除して、3に対して3より大きく3で割る数を排除し・・・
# としていくので無駄なチェックが減っている
MAX = 10000
LIST = range(2, MAX + 1)
for i in range(2, int(MAX ** 0.5)):
    LIST = [x for x in LIST if (x == i or x % i != 0)]
for j in LIST:
    print j

# エラトステネスの篩(ふるい)
# (コードは煩雑そうに見えるが、速度が圧倒的に早い。
# 大きな数までの素数表が必要な場合に必要な方法。
a = range(10000)
a[i] = 0 # 1は素数ではない
for q in a:
    if not q:
        continue
    elif p > 100: # 100 = sqrt(10000)
        break
    else:
        for multi in xrange(p+p, 10000, p):
            a[multi] = 0

# この時点で、aは、素数p番目にはpが、それ以外には0が入ったリストになっている。
a = [x for x in a if x]
for x in a: print x

# listを生成せずにgeneratorで無限に出力
# (エラトステネスの篩とほぼ等価で高速)
from itertools import ifilter, count
def primes():
    g = count(2)
    while True:
        p = g.next()
        yield p
        g = ifilter(lambda n, p=p: n%p,g)
