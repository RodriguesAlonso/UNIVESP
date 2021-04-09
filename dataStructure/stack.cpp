#include <iostream>
#include <cstddef>
#include "stack.h"

using namespace std;

Stack::Stack(){
    structure = NULL;
}
Stack::~Stack(){
    NodeType* tempPtr;
    while (structure != NULL)
    {
        tempPtr = structure;
        structure = structure->next;
        delete [] tempPtr;
    }
}

bool Stack::isFull() const{
    NodeType* newNode;
    try
    {
        newNode = new NodeType;
        delete newNode;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        return true;
    }
    
}
bool Stack::isEmpty() const{
    return (structure == NULL);
}
void Stack::printStack() const{
    NodeType* tempPtr = structure;
    cout <<"stack [ ";
    while (tempPtr != NULL)
    {
        cout <<tempPtr->info << "; ";
        tempPtr = tempPtr->next;
    }
    cout << "]" << endl;

}
    
void Stack::push(ItemType item){
    if (!isFull()){
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = structure;
        structure = location;
        length++;
    }else{
        throw "Stack is full.";
    }
    

}
ItemType Stack::pop(){ 
    if (!isEmpty())
    {
    NodeType* location;
    location = structure;
    ItemType item = structure->info;
    structure = structure->next;
    delete location;
    length--;
    return item;
        
    }else{
        throw "stack is empty.";
    }
     
}