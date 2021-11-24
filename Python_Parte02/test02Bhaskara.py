from Bhaskara import Bhaskara
import pytest

class TestBhaskaraParametrize:


    @pytest.mark.parametrize("entrada, resultado", [((1,0,0),(1,0))])

    def test_bhaskara(entrada, resultado):
        b = Bhaskara()
        assert b.calcula_raiz(entrada) == (resultado)