#include "fila.h"
#include <iostream>

using namespace std;

int main(){
    itemType a = 10;
    Queue fila;
    cout <<"FILA"<< endl;
    fila.enqueue(10);
    fila.enqueue(3);
    fila.enqueue(11);
    fila.enqueue(22);
    fila.enqueue(94);
    cout <<"ENQUEUE"<< endl;
    fila.print();
    fila.deque();
    cout <<"DENQUEUE"<< endl;
    fila.print();
    return 0;
}