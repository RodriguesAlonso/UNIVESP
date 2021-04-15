#include <iostream>
#include "Aluno.h"

class Hash{
    private:
    Aluno* structure;
    int length;
    int max_item;
    int getHash(Aluno aluno);

    public:
    Hash(int max);
    ~Hash();
    void getLenght();
    void print();
    void retriveHash();
    void insertHash();
    void deleteHash();


};