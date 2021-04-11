#include "Student.h"

class Hash{
    private:
    int maxItem;
    int length;
    Student* structure;
    int getHash(Student student);

    public:
    Hash(int maxItem = 100);
    ~Hash();

    bool isFull() const;
    int getLength() const;

    void retriveItem(Student& aluno, bool& found);
    void insertItem(Student student);
    void deleteItem(Student student);
    void printHash() const;


};