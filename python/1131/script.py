gols_inter = gols_gremio = num_grenais = 0
resposta = 1
vit_inter = vit_gremio = empates = 0

while resposta == 1:
    gols_inter, gols_gremio = map(int, input().split())
    num_grenais += 1
    if gols_inter > gols_gremio:
        vit_inter += 1
    elif gols_inter < gols_gremio:
        vit_gremio += 1
    elif gols_inter == gols_gremio:
        empates += 1
        
    resposta = int(input('Novo grenal (1-sim 2-nao)\n'))

print('%d grenais' %num_grenais)
print('Inter:%d' %vit_inter)
print('Gremio:%d' %vit_gremio)
print('Empates:%d' %empates)

if vit_inter > vit_gremio:
    print('Inter venceu mais')
elif vit_inter < vit_gremio:
    print('Gremio venceu mais')
elif vit_inter == vit_gremio:
    print('Nao houve vencedor')