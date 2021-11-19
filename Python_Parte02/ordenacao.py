def ordenada(lista):
    fim = len(lista)
    for i in range(fim - 1):
        for j in range(i + 1, fim - 1):
            if lista[i] > lista[j]:
                return False
    return True

def busca(lista, elemento):
    cont = 0
    for i in lista:
        if i == elemento:
            return cont
        cont += 1
    return False



def test_lista01():
    assert ordenada([1,2,3,4,5]) == True
def test_lista02():
    assert ordenada([3,2,1,4,2]) == False
def test_lista03():
    assert ordenada([1,1,1,2,2,2,3,3,3,10]) == True

def test_busca01():
    assert busca(['a', 'e', 'i'], 'e') == 1
    
def test_busca02():
    assert busca([12, 13, 14], 15) == False

def test_busca03():
    assert busca([12, 13, 14, 18, 17, 15], 15) == 5