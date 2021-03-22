#include"item_type.h";

class Stack{
    private:
    ItemType* structure;
    int length;


    public:
    Stack();
    ~Stack();

    bool isFull();
    bool isEmpty();
};