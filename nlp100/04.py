s = "Hi He Lied Because Boron Could Not Oxidize Fluorine. New Nations Might Also Sign Peace Security Clause. Arthur King Can."

s = s.replace(".", "")
words = s.split(" ")
words_index = {}

for i, word in enumerate(words):
    if i in [1, 5, 6, 7, 8, 9, 15, 16, 19]:
        words_index[word[:1]] = i
    else:
        words_index[word[:2]] = i

print(words_index)
