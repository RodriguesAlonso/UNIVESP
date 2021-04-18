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
}
bool Queue::isfull(){

}
bool Queue::isEmpty(){

}
void Queue::enqueue(){

}
itemType Queue::deque(){

}
void Queue::print(){

}