#include <iostream>
#include <cstddef>
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;
using std::bad_alloc;

Queue::Queue()
{
    front = NULL;
    rear = NULL;
}

Queue::~Queue(){
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front -> next;
        delete tempPtr;
    }
    rear = NULL;
}

bool Queue::isFull() const{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(const bad_alloc exception)
    {
        return true;
    }
}

bool Queue::isEmpty() const{
    return (front == NULL);
}

