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
    
    def bolha(self,lista):
        fim = len(lista)
        for i in range(fim - 1, 0, -1):
            trocou = False
            for j in range(i):
                if lista[j] > lista[j+1]:
                    lista[j], lista[j+1] = lista[j+1], lista[j]
                    trocou = True
            if not trocou:
                return

    def merge_sort(self, lista):
        if len(lista) <= 1:
            return lista
        meio = len(lista) // 2

        lado_esquerdo = self.merge_sort(lista[:meio])
        lado_direito = self.merge_sort(lista[meio:])

        return self.merge(lado_esquerdo, lado_direito)

    def merge(self, lado_esquerdo, lado_direito):
        if not lado_esquerdo:
            return lado_direito
        if not lado_direito:
            return lado_esquerdo
        if lado_esquerdo[0] < lado_direito[0]:
            return [lado_esquerdo[0]] + self.merge(lado_esquerdo[1:], lado_direito)
        return [lado_direito[0]] + self.merge(lado_esquerdo, lado_direito[:1])

def criar_lista(size):
    lista = []
    for i in range(size):
        lista.append(randint(0,100))
    return lista
def main():

    lista = criar_lista(4)
    print(lista)
    o = Ordenador()
    o.merge_sort(lista)
    print(lista)

main()