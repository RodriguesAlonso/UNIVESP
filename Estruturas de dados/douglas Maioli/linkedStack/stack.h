//Dynamic Stack.
typedef int ItemType;

class Stack{
    public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();
    void print();

    void push(ItemType item);
    ItemType pop();
};