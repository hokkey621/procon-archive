n = int(input())
a = list(map(int, input().split()))

cnt = []
for data in a:
    tmp = 0
    while data % 2 == 0:
        data /= 2
        tmp += 1
    cnt.append(tmp)

print(min(cnt))