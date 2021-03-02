s = input()
s_asc = sorted(s)
t = input()
t_desc = sorted(t,reverse=True)
if s_asc < t_desc:
    print("Yes")
else:
    print("No")