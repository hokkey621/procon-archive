n, k = map(int, input().split())

cnt = 0
while(0 < n):
    cnt += 1
    n //= k

print(cnt)