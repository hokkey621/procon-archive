s = input()
check = [False for i in range(26)]

for str in s:
    check[ord(str) - ord('a')] = True

for i in range(26):
    if check[i] == False:
        print(chr(i + ord('a')))
        break
else:
    print("None")