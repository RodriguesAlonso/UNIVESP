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
    int getLenght();
    void print();
    void retriveHash(Aluno aluno);
    void insertHash(Aluno aluno);
    void deleteHash(Aluno aluno);


};