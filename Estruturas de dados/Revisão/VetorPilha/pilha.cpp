#include "pilha.h";
#include <iostream>

using namespace std;

Stack::Stack(){
    length = 0;
    structure = new ItemType[MAX_ITEM];
}
Stack::~Stack(){
    delete [] structure;
}

int Stack::getLength(){
    return length;
}

bool isFull(){
    return (length == MAX_ITEM);
}

