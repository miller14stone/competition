
print("処理開始")
num = 4000000
fib1 = 1
fib2 = 2
fib3 = 0
v = 2
while fib3 < num do
  fib3 = fib1 + fib2
  # 偶数か判定する
  if fib3 % 2 == 0
    v = v + fib3
    print("\n")
    print(v)
  end
  # 次の処理を回すための準備
  fib1 = fib2
  fib2 = fib3
end
