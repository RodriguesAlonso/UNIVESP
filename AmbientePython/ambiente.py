from math import sqrt;
def calcPropor(pi, n, f):
    p = f / n
    calcProp = (p - pi) / sqrt(pi * (1 - pi) / n)
    return print(calcProp)

def calcMedia(mediaPopulacao, mediaAmostra, sigma, n):
    calcMed = ((mediaAmostra - mediaPopulacao) / (sigma / sqrt(n)))
    return print(calcMed)
    
#PROBABILISASW DEFs    
def intersecsãoTeoremaProdutoEventosIndependentes(a, b):
    res = a*b
    return res
def teoremaProduto(a, b):
    res = probabilidadeCondicional(a, b) * b
    return res

def somaUnicaoEventosExclusivos(a, b):#Se acontece um não acontece o outro
    res = a + b
    return res
def somaDeProbabilidadesDoisEventos(a,b):
    res = a+b - (a * b)
    return res

def eventoComplementar(a):
    res = 1 - a
    return res
def probabilidadeCondicional(a, b): #A condiconal B
    res = (a + b) / b
    return res

print(somaDeProbabilidadesDoisEventos(1/4, 1/12))