while (True):
    x = int(input())
    soma = 0
    
    if (x==0):
        break

    if (x%2!=0):
        x += 1

    for i in range(5):
        soma += x
        x += 2

    print(soma)