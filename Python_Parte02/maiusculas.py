def maiusculas(frase):
    letrasMaiusculas = ''
    for i in frase:
        if ord(i) <= 90 and ord(i) > 65:
            letrasMaiusculas += i
    return letrasMaiusculas
    
frase = "Olá meu nome é Joao Paulo"
print (maiusculas(frase))