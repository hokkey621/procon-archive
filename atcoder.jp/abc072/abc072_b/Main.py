s = input()
length = len(s)

i = 0
ans = ""
while(i < length):
    ans += s[i]
    i += 2

print(ans)