a = (0..999).to_a
data = a.sample(a.size) # テストデータ

start_time = Time.now
result = data.sort
end_time = Time.now

p result
p ("timeee " + (end_time - start_time).to_s + "s") # 時間の計測
