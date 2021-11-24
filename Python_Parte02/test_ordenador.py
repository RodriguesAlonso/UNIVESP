from random import randint
import pytest
from ordenador import Ordenador, criar_lista

class TestaOrdenador:
    
    def gera_lista(self, n):
        lista = [x for x in range(n)]
        for x in range(n):
            lista[x] = randint(0, 500)
        return lista

    def gera_lista_quase_ordenada(self, n):
        lista = [x for x in range(n)]
        lista[n//10] = randint(0,100)
        lista[n//2] = randint(0,100)
        lista[n//5] = randint(0,100)
        return lista

    def esta_ordenada(self, lista):
        for i in range(len(lista) - 1):
            if lista[i] > lista[i+1]:
                return False
        return True
    @pytest.fixture
    def o(self):
        return Ordenador()

    @pytest.fixture
    def l(self):
        return self.gera_lista(100)

    @pytest.fixture
    def  l_quase(self):
        return self.gera_lista_quase_ordenada(100)

    def testa_bolha_aleato(self, o,l):
        o.bolha(l)
        assert self.esta_ordenada(l)
    def testa_selecao_direta(self, o, l):
        o.selecao_direta(l)
        assert self.esta_ordenada(l)

    def testa_bolha_quase(self,o,l_quase):
        o.bolha(l_quase)
        assert self.esta_ordenada(l_quase)
    def testa_selecao_direta_quase(self,o,l_quase):
        o.selecao_direta(l_quase)
        assert self.esta_ordenada(l_quase)