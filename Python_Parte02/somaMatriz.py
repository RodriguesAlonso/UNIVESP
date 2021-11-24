import pytest
from app import imprimi_matriz

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

def multiplica_matrizes(m1, m2):
    linha_A, coluna_A = len(m1), len(m1[0])
    linha_B, coluna_B = len(m2), len(m2[0])
    assert linha_B == coluna_A    
    nova_matriz = []
    for i in range(linha_A):
        nova_matriz.append([])
        for j in range(coluna_B):
            for q in range(linha_A):
                nova_matriz[i][j] += m1[i][q] * m2[q][i]
    imprimi_matriz(nova_matriz)




if __name__ == '__main__':
    m1 = [[1, 2, 3], [4, 5, 6]]
    m2 = [[2, 3, 4], [5, 6, 7]]
    multiplica_matrizes(m1,m2)