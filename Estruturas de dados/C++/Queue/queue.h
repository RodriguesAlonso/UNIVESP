#include "item_type.h"

const int MAX_ITEM = 100;
 
class Queue
{
private:
    /* data */
    ItemType* structure;
    int lenght;
    

public:
    Queue();
    ~Queue();
    /*pop, push, print, isEmpty, isFull*/
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();


};