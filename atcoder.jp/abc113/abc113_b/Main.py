n = int(input())
t, a = map(int, input().split())
h = list(map(int, input().split()))

data = []
for x in h:
    data.append(abs(a - (t - x * 0.006)))

print(data.index(min(data)) + 1)