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

bool Stack::isFull(){
    return (length == MAX_ITEM);
}

bool Stack::isEmpty(){
    return(length == 0);
}

ItemType Stack::getTop(){
    return structure[length];
}

void Stack::print(){
    for (int i = 0; i < length; i++)
    {
        cout << i << ": " << structure[i] << endl;
    }
    
}

void Stack::push(ItemType item){
    structure[length + 1] = item;
    length++;
}
