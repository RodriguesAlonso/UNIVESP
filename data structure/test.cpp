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
        stack.push(i);
    }
    
    stack.printStack();
    return 0;
};
