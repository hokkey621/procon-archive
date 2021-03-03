n = int(input())

ans = 0
if(n % 10 != 0):
    while(0 < n):
        ans += n % 10
        n //= 10
else:
    ans = 10

print(ans)