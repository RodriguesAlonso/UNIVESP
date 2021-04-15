#include<iostream>
#include "Aluno.h"

Aluno::Aluno(){
    ra = -1;
    nome = "VAZIO";
}
Aluno::Aluno(string nome, int ra){
    this->nome = nome;
    this->ra = ra;
}
int Aluno::getRa(){
    return ra;
}
string Aluno::getNome(){
    return nome;
}
