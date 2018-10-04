N = int(input())

for i in range(N):
    string = input()
    N = int(input())
    nova_string = ''
    for l in string:
        posicao = ord(l)-N
        #comando ord retorna o número do caracter na tabela ASC

        if(posicao < 65):
            nova_string += chr(91-(65-posicao))
            #comando 'chr' devolve o caracter conforme o número da tabela
        else:
            nova_string += chr(ord(l)-N)
    print(nova_string)
