#include "fila.h"
#include <iostream>
#include <cstddef>

using namespace std;

Queue::Queue(){
    front = NULL;
    rear = NULL;
}
Queue::~Queue(){
    nodeType* location;
    while (front != NULL)
    {
        location = front;
        front = front->next;
        delete location;
    }
    rear = NULL;
}
bool Queue::isfull(){
    try
    {
        nodeType* temp;
        temp = new nodeType;
        delete temp;
        return false;
    }
    catch(bad_alloc exception)
    {
        throw "Queue is already full";
    }
    
}
bool Queue::isEmpty(){
    
}
void Queue::enqueue(){

}
itemType Queue::deque(){

}
void Queue::print(){

}