import math

class Bhaskara:
    def delta(self, a, b, c):
        return (b ** 2) - (4 * a * c)

    def calcula_raiz(self, a, b, c):
        d = self.delta(a, b, c)
        if d == 0:
            raiz = (-b + math.sqrt(d)) / (2 * a)
            return 1, raiz
        else: 
            if d < 0:
                return 0
            else:    
                raiz1 = ((-b + math.sqrt(d)) / (2 * a))
                raiz2 = ((-b - math.sqrt(d)) / (2 * a))
                return 2, raiz1, raiz2

    def main(self):
        a = float(input("Digite o valor de a: "))
        b = float(input("Digite o valor de b: "))
        c = float(input("Digite o valor de c: "))
        print(self.calcula_raiz(a, b, c))

b = Bhaskara()
b.calcula_raiz(1, -5, 6)