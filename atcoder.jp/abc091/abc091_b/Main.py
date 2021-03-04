card = {}
n = int(input())
for i in range(n):
    s = input()
    if s not in card:
        card[s] = 0
    card[s] += 1

m = int(input())
for i in range(m):
    t = input()
    if t in card:
        card[t] -= 1

ans = 0
for x in card:
    ans = max(ans, card[x])

print(ans)