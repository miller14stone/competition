a = (0..9).to_a
a = a.sample(a.length)

start_time = Time.now

i = 0
while i < a.length
  j = 1
  # jの位置よりも前かどうか判別
    while j < a.length - i
      #比較する
      if a[i] > a[i+j] then
          a[i], a[i+j]=a[i+j], a[i]
      end
      j += 1
    end
    i += 1
end

end_time = Time.now

p a
p ("timeee " + (end_time - start_time).to_s + "s")
