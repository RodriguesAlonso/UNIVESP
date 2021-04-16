#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    Stack pilha;
    ItemType caracter;
    cout << "Digite uma string:";
    cin.get(caracter);
    do
    {
        pilha.push(caracter);
        pilha.print();
        cin.get(caracter);
    } while (caracter != '\n');
    return 0;
}