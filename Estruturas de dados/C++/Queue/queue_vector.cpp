#include<iostream>
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;

bool Queue::isEmpty() const{
    return lenght == 0;
}
bool Queue::isFull() const{
    return lenght == MAX_ITEM;
}

void Queue::print() const{
    cout <<"Queue: ";
    for (int i = 0; i < lenght; i++)
    {
        cout << structure[i] << ", ";
    }
    cout << endl;
    
}

void Queue::push(ItemType item){
    if (!isFull){
        structure[-1] = item;
        lenght++;
    } else{
        throw "Queue already full!";
    }
}
ItemType Queue::pop(){
    if (!isEmpty)
    {
        ItemType aux = structure[0];
        lenght--;
        return aux;
    }else{
        throw "Queue is empty!";
    }
    
}

