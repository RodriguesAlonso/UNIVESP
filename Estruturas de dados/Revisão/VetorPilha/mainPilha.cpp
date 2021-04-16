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
        cin.get(caracter);
    } while (caracter != '\n');
    pilha.print();
    cout<<"teste01";
    for (int i = 0; i < pilha.getLength(); i++)
    {
        cout<< i << "; ";
        cout << pilha.pop() << " ";
    }
    
    cout << endl << "FIM";
    pilha.print();
    return 0;
}