from ordenador import Ordenador
from random import randint
from time import time
from busca import Busca

class Conta_tempos:

    def criar_lista(self, size):
        lista = []
        for i in range(size):
            lista.append(randint(0,100))
        return lista

    def criar_lista_quase_ordenada(self, size):
        lista = [x for x in range(size)]
        lista[110] = 100
        return lista
    
    def compara(self, n):
        lista01 = self.criar_lista_quase_ordenada(n)
        lista02 = lista01[:]
        
        ordem = Ordenador()

        antes = time()
        ordem.selecao_direta(lista01)
        depois = time()
        print(f'Ordem direta demorou {depois - antes}')

        antes = time()
        ordem.bolha(lista02)
        depois = time()
        print(f'Bolha demoro {depois - antes}')

    def compara_buscas(self, size, element):
        lista = [x for x in range(size)]
        b = Busca()
        antes = time()
        b.busca_sequencial(lista, element)
        depois = time()
        print(f'\nA busca sequencial demorou {depois - antes}')

        antes = time()
        b.busca_binaria(lista, element)
        depois = time()
        print(f'A busca binária demorou {depois - antes}')

        antes = time()
        b.busa_binaria_recursiva(lista, element)
        depois = time()
        print(f'A busca binária recursiva demorou {depois - antes}\n')


    

def main01():
    c = Conta_tempos()
    c.compara_buscas(10000, randint(0,100))
main01()
main01()
main01()
