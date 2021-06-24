from math import sqrt;
def calcPropor(pi, n, f):
    p = f / n
    calcProp = (p - pi) / sqrt(pi * (1 - pi) / n)
    return print(calcProp)

def calcMedia(mediaPopulacao, mediaAmostra, sigma, n):
    calcMed = ((mediaAmostra - mediaPopulacao) / (sigma / sqrt(n)))
    return print(calcMed)
    
def intersecsão(a, b):
    res = a*b
    print (res)

def unicao(a, b):
    return print(a + b)

def somaDeProbabilidades(a,b):
    res = a+b - (a * b)
    print (res)

#unicao(4/36, 5/36)
#intersecsão(4/6, 5/6)
#somaDeProbabilidades(4/36, 6/36)


#calcMedia(10, 6.2, 1.84, 10)
#calcPropor