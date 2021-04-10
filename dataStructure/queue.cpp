#include <iostream>
#include <cstddef>
#include <new>
#include "queue.h"
using namespace std;

Queue::Queue()
{
    front = NULL;
    rear = NULL;
}
Queue::~Queue(){
    NodeType* tempPtr;
    while (front !=NULL){
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

bool Queue::isEmpty() const
{
    return (front == NULL);
}
bool Queue::isFull() const{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        return true;
    }
}

void Queue::printQueue() const{
    NodeType* locationTmp = front;
    cout << "[";
    while (locationTmp != NULL)
    {
        cout << locationTmp->info << "; ";
        locationTmp = locationTmp->next;
    }
    cout << "]" << endl;
}

void Queue::enqueue(ItemType item){
    if (!isFull())
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->next = NULL;
        newNode->info = item;
        if (rear == NULL)
        {
            front = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
    }else{
        throw "Queue is full";
    }
    
}
ItemType Queue::dequeue()
{
    if (!isEmpty())
    {
        cout << "FUNCIONA1";
        NodeType* tempPtr;
        tempPtr = front;
        ItemType item = front->info;
        front = front->next;
        if (front == NULL)  
            rear = NULL;
        delete tempPtr;
        return item;
    }else{
        cout << "FUNCIONA2";
        throw "Queue is empty.";
    }
}