s = input()
divide = [ "eraser", "erase", "dreamer", "dream"]

for str in divide:
  s = s.replace(str, '#')#落ちてきたものとつながらないように文字を挿入
s = s.replace('#', '')
if len(s) == 0:
  print("YES")
else:
  print("NO")