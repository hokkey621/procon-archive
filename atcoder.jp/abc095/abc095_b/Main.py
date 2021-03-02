n, x = map(int, input().split())
m = []
for i in range(n):
    m.append(int(input()))

res = x - sum(m)
print(n + (res // min(m)))