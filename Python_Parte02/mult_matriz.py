def mult_matriz(A, B):
    linhasA, colunasA = len(A), len(A[0])
    linhasB, colunasB = len(B), len(B[0])
    assert linhasB == colunasA
    matriz_final = []
    for i in range(linhasA):
        matriz_final.append([])
        for j in range(colunasB):
            matriz_final[i].append(0)
            for c  in range(colunasA):
                matriz_final[i][j] += A[i][c] * B[c][j]
    return matriz_final



m1 = [[1, 2, 3], [4, 5, 6]]
m2 = [[1, 2], [3, 4], [5, 6]]
print(mult_matriz(m1, m2))