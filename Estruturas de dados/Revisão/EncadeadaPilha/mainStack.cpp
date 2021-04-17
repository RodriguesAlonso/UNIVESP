#include "stack.h"
#include <iostream>

using namespace std;

int main(){

    Stack pilha;
    cout << "\nPilha ok\n";
    pilha.push(10);
    pilha.push(5);
    pilha.push(3);
    cout << "\nPush ok\n";
    pilha.print();

    return 0;
}