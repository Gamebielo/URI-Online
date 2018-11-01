X = []
for i in range(10):
    a = int(input())
    if(a < 1):
        a = 1
        X.append(a)
    else:
        X.append(a)

for i in range(10):
    print("X[%d] = %d" % (i, a))
