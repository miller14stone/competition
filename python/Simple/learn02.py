#-*- coding: utf-8 -*-
#1から50までの和を計算して表示

# 普通の方法
s = 0
for x in range(1, 51):
    s += x
print s

# sumを使う
print sum(range(1,51))

# generator式を使う
print sum(x for x in range(1,51))

# reduceを使う
print reduce(lambda x,y: x+y, range(1,51))

# 頭を使う
print 50*51/2
