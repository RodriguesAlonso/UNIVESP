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
            
#matriznova = criamatriz(2,4,6)
#imprimi_matriz(matriznova)

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

le_matriz()

