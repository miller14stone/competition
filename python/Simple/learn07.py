# encoding: utf-8
# 無限にフィボナッチ級数を返し続けるgenerator
def fib():
    a = b = 1
    while True:
        yield a
        a, b = b, a+b
