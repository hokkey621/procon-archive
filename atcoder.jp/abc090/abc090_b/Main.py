a, b = map(int, input().split())

cnt = 0
for i in range(a, b + 1):
    num = list(str(i))
    if num[0] == num[4] and num[1] == num[3]:
        cnt += 1

print(cnt)