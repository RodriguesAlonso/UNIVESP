import pytest

class Busca:
    def busca_sequencial(self, lista, x):
        for i in range(len(lista)):
            if lista[i] == x:
                return i
        return -1

    def busca_binaria(self, lista, x):
        primeiro = 0
        ultimo = len(lista) - 1
        
        while primeiro <= ultimo:
            meio = (primeiro + ultimo) // 2
            if meio == x:
                return meio
            else:
                if x > primeiro:
                    ultimo = meio - 1
                else:
                    primeiro = meio + 1
        return -1

    def busa_binaria_recursiva(self, lista, elemento, min=0, max=None):
        if max == None:
            max = len(lista) - 1
        if max < min:
            return False
        else:
            meio = min + (max - min)//2
        if lista[meio] > elemento:
            return self.busa_binaria_recursiva(lista, elemento, min,meio - 1)
        elif lista[meio] < elemento:
            return self.busa_binaria_recursiva(lista, elemento, meio + 1, max)
        else:
            return meio

def busca(lista, elemento):
    primeiro = 0
    ultimo = len(lista) - 1
    while primeiro <= ultimo:
        meio = (primeiro + ultimo) // 2
        print (meio)
        if lista[meio] == elemento:
            return meio
        else:
            if lista[meio] < elemento:
                primeiro = meio + 1
            else:
                ultimo = meio - 1
    return False


def bubble_sort(lista):
    fim = len(lista)
    for i in range(fim - 1, 0, -1):
        for j in range(i):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j +1 ], lista[j]
                print(lista)
    return lista


a = [10, 20, 30, 40]
@pytest.mark.parametrize("lista, elemento, esperado", [
    (a, 10, 0),
    (a, 20, 1),
    (a, 30, 2),
    (a, 40, 3),
    (a, 25, False),
    (a, 250, False),
    (a, -25, False),
    (a, 11, False)
])
def test_busca_recursiva(lista, elemento, esperado):
    b = Busca()
    assert b.busa_binaria_recursiva(lista, elemento) == esperado