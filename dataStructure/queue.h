#include  "node_type.h"

class Queue{
    public:
    Queue();
    ~Queue();

    void printQueue() const;
    bool isEmpty() const;
    bool isFull() const;

    void enqueue(ItemType item);
    ItemType dequeue();
    
    private:
    ItemType front;
    ItemType rear;
};