n, m = map(int, input().split())
num = []
for i in range(m):
    a, b = (map(int, input().split()))
    num.append(a)
    num.append(b)

for i in range(1, n + 1):
    print(num.count(i))