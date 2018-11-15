def fatorial(n):
    if n is 0:
        return 1
    return n * (fatorial(n - 1))


# MAIN
while True:
    try:
        a, b = input().split(' ')
        a = int(a)
        b = int(b)

        s = fatorial(a) + fatorial(b)
        print(s)
# O fim da entrada é determinado por eof.
    except EOFError:
        break
