
print("繰り返し開始\n")
result = 0
for i in 0..999 do
  if i % 3 == 0 or i % 5 == 0
    result += i
  end
end

print result
print("\n")
print("true") if result == 233168
