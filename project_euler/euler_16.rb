
# 215 = 32768 であり, これの数字和 ( 各桁の和 ) は 3 + 2 + 7 + 6 + 8 = 26 となる.
#
# 同様にして, 21000 の数字和を求めよ.

x = 2**1000
y = x.to_s.split('').map(&:to_i)
answer = 0
y.each do |z|
  answer += z.to_i
end

p answer
p answer == 1366
