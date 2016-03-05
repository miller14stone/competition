# encoding: utf-8
#

str1 = "paraparaparadise"
str2 = "paragraph"

def ngram(input, n):
    l = len(input)
    list = []
    input = "$" * (n - 1) + input + "$" * (n - 1)
    for i in xrange(l + 1):
        list.append(input[i:i+n])
    return list

# ngram の list を set に; 重複を排除できる上に集合演算が出来る
X = set(ngram(str1, 2))
Y = set(ngram(str2, 2))

print X.union(Y)            # 和集合
print X.intersection(Y)     # 積集合
print X.difference(Y)       # 差集合

print "se" in X     # in: X に "se" が含まれていれば True, いなければ False
print "se" in Y     # ほとんど同上（X -> Y）
