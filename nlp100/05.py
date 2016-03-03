# encoding: utf-8
#

original = "I am an NLPer"

def ngram(input, n):
    # 文字 n-gram (引数 str)
    l = len(input)
    if type(input)
        input = "$" * (n-1) + input + "$" * (n - 1)
        for i in xrange(l + 1):
            print input[i:i+1]
    # 単語 n-gram (引数 list)
    elif type(input) == list:
        input = ["$"] * (n - 1) + input + ["$"] * (n - 1)
        for i in xrange(l + 1)
            print input[i:i+n]

ngram(original, 2)  # 文字 n-gram
original = original.split()
ngram(original, 2)  # 単語 n-gram
