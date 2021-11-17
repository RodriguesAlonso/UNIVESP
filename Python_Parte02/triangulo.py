class Triangulo:
    def __init__(self, a, b, c) -> None:
        self.a = a
        self.b = b
        self.c = c

    def perimetro(self):
        return self.a + self.b + self.c
    def tipo_lado(self):
        if (self.a == self.b) and (self.a == self.c):
            tipo = 'equilátero'
            return tipo
        if self.a != self.b and self.b != self.c and self.c != self.a:
            tipo = 'escaleno'
            return tipo
        else: 
            tipo = 'isósceles'
            return tipo


import pytest
@pytest.mark.parametrize("a, b, c, tipo", [
    (1, 1, 1, 'equilátero'),
    (1, 1, 2, 'isósceles'),
    (1, 2, 3, 'escaleno')])
def test_tipo(a,b,c,tipo):
    t = Triangulo(a,b,c)
    assert t.tipo_lado() == tipo