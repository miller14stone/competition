
# スタート値
num = 13
count = 0
while num != 0 do
  if num % 2 == 0
    num = num / 2
    p "#{num} ->"
    
  else
    num = 3 * num + 1
    p "#{num} ->"
  end
  count += 1
  p "#{count} 回の処理"
end
