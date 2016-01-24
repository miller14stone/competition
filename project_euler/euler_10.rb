
# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
#
# Find the sum of all the primes below two million.


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

result = 0
(1..2000000).each do |num|
  if prime(num)
    result += num
    p result
  end
end

# 142913828922
