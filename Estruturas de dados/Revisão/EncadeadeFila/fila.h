typedef int itemType;
struct nodeType{

    itemType info;
    itemType front;
    itemType rear;
    nodeType* structure;

};


class Queue{
    public:
    Queue();
    ~Queue();
    bool isfull();
    bool isEmpty();
    void enqueue();
    itemType deque();
    void print();
    
    private:





};