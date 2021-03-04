n = int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)

ans = 0
i = 0
while(i < 2 * n):
    ans += a[i + 1]
    i += 2

print(ans)