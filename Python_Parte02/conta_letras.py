def conta_letras(frase, contar='vogais'):
    lista_vogais = ['a', 'e', 'i', 'o', 'u']
    contador_vogais = 0
    contador_consoantes = 0
    frase = frase.replace(" ", "") 
    for i in frase:
        if i in lista_vogais:            
            contador_vogais += 1
        else: contador_consoantes +=1
    if contar == 'vogais':
        return contador_vogais
    else: return contador_consoantes
        
conta_letras('programamos em python', 'consoantes')
