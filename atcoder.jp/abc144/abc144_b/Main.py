n = int(input())

can = False
for i in range(1, 10):
    for j in range(1, 10):
        if i * j == n:
            can = True

if(can):
    print("Yes")
else:
    print("No")