def criamatriz(num_linhas, num_colunas):
    matriz = []
    for i in range(num_linhas):
        linha = []
        for j in range(num_colunas):
            linha.append(0)
        matriz.append(linha)
    return matriz

def dimensoes(matriz):
    linhas = len(matriz)
    colunas = len(matriz[0])    
    return f"{linhas}X{colunas}"

def soma_matrizes(m1, m2):
    if dimensoes(m1) != dimensoes(m2):
        return False
    else:
        linhas = len(m1)
        colunas = len(m1[0])    
        resultado = criamatriz(linhas, colunas)
        for i in range(linhas):
            for j in range(colunas):
                resultado[i][j] = m1[i][j] + m2[i][j]
        return resultado   
