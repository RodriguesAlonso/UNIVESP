#include<iostream>
#include"hash.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Hash::Hash(int max){
    max_items = max;
    length = 0;
    structure = new Aluno[max_items];
}
Hash::~Hash(){
    delete [] structure;
}
bool Hash::isFull(){
    return length == max_items;
}
int Hash::getLength() const{
    return length;
}

int Hash::getHash(Aluno aluno){
    return aluno.getRa() % max_items;
}

void Hash::insertItem(Aluno aluno){
    if (!isFull())
    {
        
    }
    
}

void Hash::retriveItem(Aluno& aluno, bool& found){

}