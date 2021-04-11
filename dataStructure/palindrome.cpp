#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

int main(){
    bool palindrome = true;
    char character;
    char stackChar;
    char queueChar;

    Stack stack;
    Queue queue;

    cout << "add string:" << endl;
    cin.get(character);

    while (character != '\n')
    {
        stack.push(character);
        queue.enqueue(character);
        cin.get(character);
    }
    stack.printStack();
    queue.printQueue();
    while (palindrome && !queue.isEmpty())
    {
        stackChar = stack.pop();
        queueChar =  queue.dequeue();
        if (stackChar != queueChar)
        {
            palindrome = false;
        }
    }
    if (palindrome)
    {
        cout << "yes palindrome";
    }else{
        cout << "no palindrome";
    }
    return 0;
}