N, Q = map(int, input().split())

a = [[] for i in range(N)]
for i in range(N):
  a[i] = list(map(int, input().split()))
  a[i].pop(0)

for i in range(Q):
  s, t = map(int, input().split())
  s -= 1
  t -= 1
  print(a[s][t])