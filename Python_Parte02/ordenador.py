from random import randint, random
class Ordenador:
    def selecao_direta(self, list):
        fim = len(list)
        for i in range(fim - 1):
            posicao_do_minimo = i
            for j in range(i + 1, fim):
                if list[j] < list[posicao_do_minimo]:
                    posicao_do_minimo = j
            list[i], list[posicao_do_minimo] = list[posicao_do_minimo], list[i]


def criar_lista(size):
    lista = []
    for i in range(size):
        lista.append(randint(0,2000))
    return lista
def main():
    lista = criar_lista(20)
    print(lista)
    ordenar = Ordenador()
    ordenar.selecao_direta(lista)
    print(lista)
main()
