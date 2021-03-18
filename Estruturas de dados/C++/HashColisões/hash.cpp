#include<iostream>
#include"hash.h"

using namespace std;

Hash::Hash(int max){
    length = 0;
    max_item = max;
    Hash* structure;
}

Hash::~Hash(){
    delete []structure;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_item;
    }

bool Hash::isFull(){
    return length == max_item;
}

int Hash::getlength(){
    return length;
}

void Hash::print(){
    for (int i = 0; i < max_item; i++)
    {
        cout <<i <<"- Aluno: "<< structure[i].getName() <<", RA: "<<structure[i].getRa()<<endl;
    }
        
}

void Hash::retriveItem(Aluno& aluno, bool& found){

}
void Hash::deleteItem(Aluno aluno){

}
void Hash::insertItem(Aluno aluno){
    
}
