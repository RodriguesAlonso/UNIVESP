def ordemLex(nome):
    maior = nome[0].lower() #na verdade é o menor
    for i in nome:
        if maior > i.lower():
            maior = i.lower()
    maior.capitalize()
    print (maior)

def primeiro_lex(lista):
    menor = lista[0]
    for i in lista:
        if i < menor:
            menor = i
    return menor
