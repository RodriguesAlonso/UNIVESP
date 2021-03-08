#include "stack.h"
#include <cstddef>
#include <new>

#include<iostream>
using std::cout;
using std::bad_alloc;

Stack::Stack(){
    structure = NULL;
}

Stack::~Stack(){
   NodeType* tempPtr;
   while (structure != NULL)
   {
       tempPtr = structure;
       structure =structure -> next;
       delete tempPtr;
   }
}

bool Stack::isEmpty() const{
    return (structure == NULL);
}
bool Stack::isFull() const{
    NodeType* location;
    try{
        location = new Nodetype;
        delete location;
        return false;
    }catch(const bad_alloc exception)
    {
        return true;
    }
}

void Stack::print() const{
    cout << 
}
