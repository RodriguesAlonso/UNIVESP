#include "node_type.h"


class Stack{
    private:
    NoteType* structure;

    public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();

};