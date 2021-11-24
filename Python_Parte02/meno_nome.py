def menor_nome(lista_nome):
    menor = len(lista_nome[0])    
    nome = lista_nome[0]
    for i in lista_nome:
        string = str(i).strip().lower()
        tamanho = len(string)
        if menor > tamanho:
            nome = i
            menor = tamanho
    nome = nome.strip().capitalize()
    return nome

menor_nome(['zé', ' lu', 'fê'])