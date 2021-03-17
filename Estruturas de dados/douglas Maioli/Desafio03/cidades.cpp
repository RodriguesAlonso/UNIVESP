#include<iostream>
#include"cidades.h"

using std::cout;
using std::cin;
using std::endl;

Cidades::Cidades(int ano = 0, int populacao =-1, char pais = 'Null'){
    this->ano = ano;
    this->populacao = populacao;
    pais = pais;
}
