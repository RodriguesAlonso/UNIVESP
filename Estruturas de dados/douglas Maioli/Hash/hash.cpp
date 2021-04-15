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
    while (structure[location].getRa() > 0)
    {
        location = (location + 1) % max_item;
    }
    structure[location] = aluno;
    length++;
    }

void Hash::deleteAluno(Aluno aluno){
    int location = getHash(aluno);
    bool test = false;
    while (structure[location].getRa() != -1)
    {
        if (structure[location].getRa() == aluno.getRa())
        {
            test = true;
            structure[location] = Aluno("", -2);
            cout <<endl <<"delete: " << aluno.getNome();
            length--;
            break;
        }
        location = (location +1) % max_item;
    }
    if (!test)
    {
        cout << "\nNenhum aluno foi encontrado" << endl;
    }
}

void Hash::retriveHash(Aluno& aluno, bool& found){
    int location = getHash(aluno);
    found = false;
    Aluno aux = structure[location];
    while (structure[location].getRa() != -1)
    {
        location = (location + 1) % max_item;
        if (structure[location].getRa() == aluno.getRa())
        {
            found = true;
            aluno = aux;
            found = false;        
        }
    }
    found = false;        
}
