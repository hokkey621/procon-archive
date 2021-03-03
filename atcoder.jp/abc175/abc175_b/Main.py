n = int(input())
l = list(map(int, input().split()))

l_sorted = sorted(l)

num = len(l_sorted)
ans = 0
for i in range(num):
    for j in range(i + 1, num):
        for k in range(j + 1, num):
            if l_sorted[i] != l_sorted[j] and l_sorted[j] != l_sorted[k] and l_sorted[k] < l_sorted[i] + l_sorted[j]:
                ans += 1

print(ans)