# coding: utf-8
# 2つの自然数の最大公約数を求める (ユークリッドの互除法)

a,b=input(),input()

# 再帰関数
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b,a%b)
print gcd(a,b)
