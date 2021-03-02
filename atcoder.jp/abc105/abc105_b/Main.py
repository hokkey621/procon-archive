n = int(input())

can = False
for i in range(100):
    for j in range(100):
        if 4 * i + 7 * j == n:
            can = True

if(can):
    print("Yes")
else:
    print("No")
