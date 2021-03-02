n = int(input())
a = list(range(1, n + 1))

cnt = []
for data in a:
    tmp = 0
    while data % 2 == 0:
        data /= 2
        tmp += 1
    cnt.append(tmp)

print(cnt.index(max(cnt)) + 1)