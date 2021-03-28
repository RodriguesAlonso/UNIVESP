#include<iostream>
#include<cstddef>
#include "aluno.h"

struct Nodetype
{
    Aluno aluno;
    Nodetype* esquerda;
    Nodetype* direita;
};

class SearchTree{
    public:
    SearchTree();
    ~SearchTree();

    bool isFull() const;
    bool isEmpty() const;
    void retriveAluno(Aluno& item, bool& found) const;
    
    void insertAluno(Aluno item);
    void deleteAluno(int intem);

    void printerPreOrder() const;
    void PrinterInOrder() const;
    void PrinterPosOrder() const;

    private:

    
};
