#include <iostream>
#include "Aluno.h"

class Hash{
    private:
    int length;
    int max_item;
    Aluno* structure = new Aluno[max_item];
    int getHash(Aluno aluno);

    public:
    Hash(int max);
    ~Hash();
    int getLenght();
    void print();
    void retriveHash(Aluno& aluno, bool& found);
    void insertHash(Aluno aluno);
    void deleteAluno(Aluno aluno);


};