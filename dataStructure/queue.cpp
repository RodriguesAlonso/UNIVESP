#include <iostream>
#include <cstddef>
#include <new>
#include "queue.h"
using namespace std;

Queue::Queue()
{
    this->front = NULL;
    this->rear = NULL;
}
Queue::~Queue()
{
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
bool Queue::isFull() const
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(std::bad_alloc exception){
        return true;
    }
}

void Queue::printQueue() const
{
    NodeType* locationTmp = front;
    while (front != NULL)
    {
        cout << front->info;
        locationTmp = locationTmp->next;
    }
    cout << endl;
}

void Queue::enqueue(ItemType item){
    if (!isFull()){
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = item;
        newNode->next = NULL;
        cout << endl << newNode->info;
        if (rear == NULL)
        {
            front = newNode;
        }
        else{
            rear->next = newNode;
            }
        rear = newNode;
        cout << endl <<front->info;
        cout << endl <<rear->info;
    }else{
        throw "Queue is full";
    }
}
ItemType Queue::dequeue()
{
    if (!isEmpty())
    {
        NodeType* tempPtr;
        tempPtr = front;
        ItemType item = front->info;
        front = front->next;
        if (front == NULL)  
            rear = NULL;
        delete tempPtr;
        return item;
    }else{
        throw "Queue is empty.";
    }
}