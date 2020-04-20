nota1 = nota2 = 0
nota_parcial = 0
media = 0
resposta = 1
cont = 0

while resposta != 2:
    if(resposta == 1):
        while cont < 2:
            nota_parcial = float(input())
            if 0 <= nota_parcial <= 10:
                if(cont == 0):
                    nota1 = nota_parcial
                elif(cont == 1):
                    nota2 = nota_parcial
                cont += 1
            else:
                print('nota invalida')
        media = (nota1 + nota2)/2
        print('media = %.2f' %media)
        cont = 0

    print('novo calculo (1-sim 2-nao)')
    resposta = int(input())

# 'nota invalida'
# 'media = '