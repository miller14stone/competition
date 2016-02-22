# encoding: utf-8
#
# テキストファイル'text.txt'から数字を読み込み大きい数から順に並べて画面に表示する

a = open("text.txt").read().split()
a.sort()
for i in a[::-1]: print i

# 別回答
# print sorted(open('text.txt').read().split(),key = int, reverse = True)
