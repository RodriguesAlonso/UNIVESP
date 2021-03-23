#include<iostream>
#include"stack.h"
#include<cstddef> //NULL

using std::cout;
using std::cin;
using std::endl;
using std::string;
    
Stack::Stack(){
    topNode = NULL;
}
Stack::~Stack(){
    node* tempnode;
    while (topNode != NULL){
        tempnode = topNode;
        topNode = topNode ->next;
        delete tempnode;
    };

}
bool Stack::isFull(){
    node* NewNode;
    try
    {
        NewNode = new node;
        delete NewNode;
        return false;
    }
    catch(std::bad_alloc expetion)
    {   
        cout << "Stack is full.";
        return true;
    }
    
}
bool Stack::isEmpty(){
    return topNode == NULL;
}
void Stack::print(){
    node* tempNode;

}

void Stack::push(ItemType item){

}
ItemType Stack::pop(){

}