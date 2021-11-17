def fatorial(n):
    if n < 0:
        return 0
    fat = 1
    for i in range(n):
        fat *= n - i
    return fat

def main():
    fatorial(0)

import pytest
@pytest.mark.parametrize("entrada, esperado", [
    (0, 1),
    (1, 1),
    (-10, 0),
    (4, 24),
    (5, 120)])

def test_fatorial(entrada, esperado):
    assert fatorial(entrada) == esperado