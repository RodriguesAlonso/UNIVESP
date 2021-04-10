#include <iostream>
#include "queue.h"

using namespace std;

int main(){
    Queue queue;
    ItemType lista[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter a item: ";
        cin >> lista[i];
    }
    for (int i = 0; i < 4; i++){
        queue.enqueue(lista[i]);
    }
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    queue.dequeue();
    queue.printQueue();
    

    return 0;
};
