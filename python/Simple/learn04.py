# coding: utf-8
# 2つの自然数の最小公倍数を求める
a,b=input(),input()

# 再帰関数
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b,a%b)

print a*b/gcd(a,b)
