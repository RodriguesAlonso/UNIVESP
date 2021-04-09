#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    Stack stack;
    int nun;
    
    cout << "Enter number of Item: ";
    cin >> nun;
    ItemType lista[nun];
    for (int i = 0; i < nun; i++)
    {
        cout << "Enter a Item: ";
        cin >> lista[i];
    }
    for (int i = 0; i < nun; i++)
    {
        stack.push(lista[i]);
    }
    cout << "-=-=-=-=-=\n";
    stack.printStack();
    cout << "\n-=-=-=-=-=\n";
    for (int i = 0; i < nun; i++)
    {
        cout << "pop: " << stack.pop() <<endl;
        stack.printStack();
        cout << "\n-=-=-=-=-=\n";
    }
    
    cout << stack.pop();

    return 0;
};
