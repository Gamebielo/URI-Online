# O split(' ') permite pegar vários valores separados por um espaço
a, b, c, d, e = input().split(' ')
a = int(a)
b = int(b)
c = int(c)
d = int(d)
e = int(e)
A, B, C, D, E = input().split(' ')
A = int(A)
B = int(B)
C = int(C)
D = int(D)
E = int(E)

if (a == A or b == B or c == C or d == D or e == E):
    print('N')
else:
    print('Y')
