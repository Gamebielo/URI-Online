s, t, f = input().split(' ')
s = int(s)
t = int(t)
f = int(f)

if s is 0:
    s = 24

total = s + t + (f)

if total >= 24:
    total -= 24

print(total)
