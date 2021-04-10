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

    }
    
}