#include<iostream>
#include"cidades.h"

using std::cout;
using std::cin;
using std::endl;

Cidades::Cidades(char nome = 'cidade', int ano = 0, int populacao =-1, char pais = 'Null'){
    this->ano = ano;
    this->populacao = populacao;
    this->pais[50] = pais;
    this->nome[50] = nome;
}

int Cidades::getAno(){
    return ano;
}

int Cidades::getPopulacao(){
    return populacao;
}
char Cidades::getPais(){
    return 'pais';
}
void Cidades::setAno(int ano){
    this->ano = ano;
}
void Cidades::setPais(char pais){
    this->pais[50] = pais;
}
void Cidades::setPopulacao(int populacao){
    this->populacao = populacao;
}

void Cidades::print(){
    cout << "Cidade: "<< nome << "\n Pais:"<< pais <<"\nfundação: "<<ano<<"\npopulacao: " <<populacao << endl;
}