#include  "node_type.h"

class Queue{
    public:
    Queue();
    ~Queue();

    void printQueue() const;
    bool isEmpty() const;
    bool isFull() const;

    void enqueue(ItemType);
    ItemType dequeue();
    
    private:
    NodeType* front;
    NodeType* rear;
};