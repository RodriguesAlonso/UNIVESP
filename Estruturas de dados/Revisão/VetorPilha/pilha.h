typedef char ItemType;

const int MAX_ITEM = 100;

class Stack{
    private:
    int length;
    ItemType* estructure;
    ItemType top;
    public:
    Stack();
    ~Stack();
    int getLength();
    ItemType getTop();
    void push(ItemType item);
    ItemType pop();
    void print();
};