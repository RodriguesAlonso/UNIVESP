#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    bool matched = true;
    Stack stack;
    ItemType character;
    ItemType stackItem;

    cout <<"Enter a string: ";
    cin.get(character);
    while (matched && character != '\n' )
    {
        if (character == '{' || character == '[' || character == '(')
        {
            stack.push(character);
        }
        if (character == '}' || character == ']' || character == ')')
        {
            if (stack.isEmpty())
            {
                matched = false;
            }else{
            stackItem = stack.pop();
            matched = (character == '}' && stackItem == '{') || (character == ']' && stackItem == '[') || (character == ')' && stackItem == '(');
            }
        }
        cin.get(character);
    }
    
    if (matched && stack.isEmpty())
    {
        cout << "\nString well-formed.\n";
    }else{
        cout << "\nString bad-formed.\n";
    }
    

    



    return 0;
}