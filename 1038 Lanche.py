entrada = input().split()   #Para dividir a entrada, ler mais de um valor na linha

cod = int(entrada[0])   #Recebendo int do primeiro valor que digirei na entrada
qtd = int(entrada[1])   #Recebendo int do 2º valor da entrada
resp = 0.0

if cod is 1:
    resp = 4.0 * qtd

elif cod is 2:
    resp = 4.5 * qtd

elif cod is 3:
    resp = 5.0 * qtd

elif cod is 4:
    resp = 2.0 * qtd

elif cod is 5:
    resp = 1.5 * qtd

print ("Total: R$ %0.2f" %resp)
