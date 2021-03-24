#include<iostream>
#include<cstddef>
#include"queue.h"

using std::cout;
using std::cin;
using std::endl;

Queue::Queue(){
    front = NULL;
    rear = NULL;
};
Queue::~Queue(){
    while (front != NULL && rear != NULL)
    {
        NodeType* tempPtr;
        tempPtr = front;
        front = front->next;
        delete [] tempPtr;
    }
    rear = NULL;
};

bool Queue::isFull(){
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(const std::exception& e)
    {
        cout << "It is not possible to allocation another node";
    }
};
bool Queue::isEmpty(){
    return (front == rear);
};
    
void Queue::enQueue(ItemType item){
    if (isFull())
    {
        
    }
    

};
ItemType Queue::deQueue(){

};

void print();