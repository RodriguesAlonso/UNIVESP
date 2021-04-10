#include <iostream>
#include "queue.h"

using namespace std;

int main(){
    Queue queue;
    int lista[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a item: ";
        cin >> lista[i];
        queue.enqueue(lista[i]);
    }
    queue.printQueue();
    cout << queue.dequeue();
    return 0;
};
