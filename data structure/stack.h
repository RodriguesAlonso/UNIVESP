#include "node_type.h"


class Stack
{
    private:
    nodeType* structure;
    
    public:
    Stack();
    ~Stack();

    bool isFull() const;
    bool isEmpty() const;
    void printStack() const;
    
    void push(ItemType item);
    ItemType pop();
};