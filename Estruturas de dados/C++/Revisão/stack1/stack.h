#include "item_type.h"

const int ITEM_MAX = 100;

class Stack{
    private:
    int length;
    ItemType* structure;

    public:
    bool isEmpty();
    bool isFull();
    

};
