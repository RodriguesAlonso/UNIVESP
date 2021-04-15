#include<iostream>
#include "hash.h"
using namespace std;

Hash::Hash(int max){
    max_item = max;
    Aluno* structure[max_item];
}
Hash::~Hash(){
    delete []structure;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_item;
}

int Hash::getLenght(){
    return length;
}

void Hash::print(){
    for (int i = 0; i < max_item; i++ ){
        cout << endl << i <<": "<<structure[i].getNome() <<" RA: " << structure[i].getRa();
    }
}

void Hash::insertHash(Aluno aluno){
    cout <<"teste0";
    int location = getHash(aluno);
    cout <<"teste1";
    structure[location] = aluno;
    cout <<"teste3";
    length++;
    }
void Hash::deleteHash(Aluno aluno){
    int location = getHash(aluno);
    structure[location] = Aluno();
}
