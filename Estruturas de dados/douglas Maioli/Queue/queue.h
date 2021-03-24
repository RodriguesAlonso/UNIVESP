typedef int ItemType;
struct Node
{
    ItemType info;
    Node* next;
};

class Queue{
    public:
    Queue();
    ~Queue();

    bool isfull();
    bool isEmpty();
    
    void enQueue(ItemType item);
    ItemType deQueue();

    void print();
};
