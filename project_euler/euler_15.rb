
# 2×2 のマス目の左上からスタートした場合, 引き返しなしで右下にいくルートは 6 つある.
#
# では, 20×20 のマス目ではいくつのルートがあるか.
#
# パスカルの三角形
# http://d.hatena.ne.jp/n9d/20100928/p1
num = 20
ar = 
num1 = 0
num2 = 0
gridSize = [20,20]

for x in 1..20 do
  for y in 1..20 do
    if (x > 0 && y > 0 )
      num1 - 1
      num2 - 1

    else
      num1 + 1
      num2 + 2
    end
  end
end

p num1
p num2
