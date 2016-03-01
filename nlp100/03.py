x = "Now I need a drink, alcoholic of course, after the heavy lectures involving quantum mechanics."

words = x.split(" ")
count = []

for word in words:
    count.append(len(word))

print(count)
