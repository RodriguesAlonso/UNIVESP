def criamatriz(num_linhas, num_colunas, valor):
    matriz = []
    for i in range(num_linhas):
        linha = []
        for j in range(num_colunas):
            linha.append(valor)
        matriz.append(linha)
    return matriz

def imprimi_matriz(matriz):
    for i in range(len(matriz)):        
        print(matriz[i])

def criamatriz02(linhas, colunas):
    matriz = []
    for i in range(linhas):
        linha = []
        for j in range(colunas):
            valor = int(input(f"[{i}][{j}] = "))
            linha.append(valor)
        matriz.append(linha)
    return matriz

def le_matriz():
    linhas = int(input("Digite o números de linhas da matriz"))
    colunas = int(input("Digite o números de colunas da matriz"))
    matriz = criamatriz02(linhas, colunas)
    imprimi_matriz(matriz)


def listaNome(nome):
    tamanho = len(nome)
    menor = len(nome[0]) 
    menornome = nome[0]       
    for i in range(tamanho):
        if len(nome[i].strip()) < menor:
            menornome = nome[i]
            menor = len(nome[i].strip())
    print (f'O meenro nome é o {menornome.capitalize()} com {menor} letras')
        

def ordemLex(nome):
    maior = nome[0].lower() #na verdade é o menor
    for i in nome:
        if maior > i.lower():
            maior = i.lower()
    maior.capitalize()
    print (maior)

nome = ['joao', 'Paulo', 'rodrigues', ' bEL ', 'alonso']

ordemLex(nome)
