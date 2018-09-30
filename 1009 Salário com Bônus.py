nome = input()
salario = float(input())
vendas = float(input())

bonus = float(vendas*(15/100))

total = salario + bonus

print("TOTAL = R$ %0.2f" %total)
