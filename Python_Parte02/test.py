import pytest
from atividade01 import dimensoes
from somaMatriz import soma_matrizes
'''
def func(x):
    return x + 1
    
def test_answer():
    assert func(3) == 5


def test_minha_matriz01():
    minha_matriz = [[1, 2, 3], [4, 5, 6]]
    assert dimensoes(minha_matriz) == "2X3"

def test_minha_matriz02():
    minha_matriz = [[1], [2], [3]]
    assert dimensoes(minha_matriz) == "3X1"

def test_matriz03():
    minha_matriz = ([[1, 2], [3, 4]]) 
    assert dimensoes(minha_matriz) == "2X2"

m1 = [[1, 2, 3], [4, 5, 6]]
m2 = [[2, 3, 4], [5, 6, 7]]
def test_soma01():
    assert soma_matrizes(m1, m2) == [[3, 5, 7], [9, 11, 13]]

m3 = [[1], [2], [3]]
m4 = [[2, 3, 4], [5, 6, 7]]
def test_soma02():
    assert soma_matrizes(m3, m4) == False

#soma de matrizes 1x1
#IndexError: list index out of range
m4 = [[1]]
m5 = [[1]]
def test_1x1():
    assert soma_matrizes(m4, m5) == [[2]]

#soma de matrizes com dimensões diferentes: 1x1 e 3x3 - 
#IndexError: list index out of range
m6 = [[1]]
m7 = [[1,2,3],[1,2,3],[1,2,3]]
def test_1x1_3x3():
    assert soma_matrizes(m6, m7) == False
'''
