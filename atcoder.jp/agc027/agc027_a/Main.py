n, x = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

cnt = 0
for i in range(n - 1):
    if 0 <= x - a[i]:
        x -= a[i]
        cnt += 1

if x == a[n - 1]:
    cnt += 1

print(cnt)