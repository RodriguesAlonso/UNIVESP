from math import sqrt;
def calcPropor(pi, n, f):
    p = f / n
    calcProp = (p - pi) / sqrt(pi * (1 - pi) / n)
    return print(calcProp)

def calcMedia(mediaPopulacao, mediaAmostra, sigma, n):
    calcMed = ((mediaAmostra - mediaPopulacao) / (sigma / sqrt(n)))
    return print(calcMed)
dp = sqrt(3.4)
print(dp)
calcMedia(10, 6.2, 1.84, 10)
