
# 素数を小さい方から6つ並べると 2, 3, 5, 7, 11, 13 であり, 6番目の素数は 13 である.
#
# 10 001 番目の素数を求めよ.

# 素数を判定
def prime(n)
  case n
  when 1 then
    false
  when 2 then
    true
  else
    # 計算
    (2..(n-1)).each do |v|
      if n % v == 0
        return false
      end
    end
    return true
  end
end


 #1から100000000までの素数の判定
k = 0
(1..100000000).each do |num|
  if prime(num)
    k += 1
    puts k
    if k == 10001
      puts "------------"
      puts "こいつが10001番目の素数だぁ！！！！！！"
      puts num
      break
    end
  end
end
