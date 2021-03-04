ball = {}
n, k = map(int, input().split())
a = list(map(int, input().split()))
size = 0
for x in a:
    if x not in ball:
        ball[x] = 0
        size += 1
    ball[x] += 1

ball_sorted = sorted(ball.items(), key = lambda x:x[1])

ans = 0
if k < size:
    for key, num in ball_sorted:
        ans += num
        size -= 1
        if k == size:
            break

print(ans)