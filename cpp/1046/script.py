hi, hf = map(int, input().split())

if (0 <= hi <= 23) and (0 <= hf <= 23):
    diferenca = (hf+24) - hi

    if diferenca > 24:
        diferenca -= 24

    print(diferenca)