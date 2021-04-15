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
    int location = getHash(aluno);
    structure[location] = aluno;
    length++;
    }

void Hash::deleteAluno(Aluno aluno){
    int location = getHash(aluno);
    structure[location] = Aluno();
    cout <<endl <<"delete: " << aluno.getNome();
    length--;
    
}

void Hash::retriveHash(Aluno& aluno, bool& found){
    int location = getHash(aluno);
    Aluno aux = structure[location];
    if (structure[location].getRa() != aluno.getRa())
    {
        found = false;        
    }
    else{
        found = true;
        aluno = aux;
    }

}
