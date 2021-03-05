#include<iostream>
#include "queue.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Queue queue;
    ItemType character;
    ItemType queueItem;

    cout << "Add one String." <<endl;
    cin.get(character);
    while (character != '\n')
    {
        queue.push(character);
        cin.get(character);
    }
    while (!queue.isEmpty())
    {
        queueItem = queue.pop();
        cout << queueItem;
    }

    return 0;
}
