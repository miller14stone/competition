# encoding: utf-8
# フィボナッチ数(1,1,2,3,5,8,13,.....)を2**31より小さい範囲まで表示する。

a = b = 1
while a < 2**31:
    print a
    a, b = b, a+b
    
