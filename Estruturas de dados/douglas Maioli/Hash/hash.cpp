#include<iostream>
#include "hash.h"


Hash::Hash(int max){
    max_item = max;
    Aluno* structure;
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

void Hash::insertHash(Aluno aluno){

}
