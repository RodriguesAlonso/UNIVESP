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
    Nodetype* root;

    void destroyTree(Nodetype*& tree);
    void retriveAluno(Nodetype* tree, Aluno& item, bool& found) const;
    void insertAluno(Nodetype*& tree, Aluno item);
    void deleteAluno(Nodetype*& tree, int aluno);
    void deleteNode(Nodetype*& tree);
    void getSucessor(Nodetype* tree, Aluno& data);
    
    void printerPreOrder(Nodetype* tree) const;
    void printerInOrder(Nodetype* tree) const;
    void printerPosOrder(Nodetype* tree) const;
    
};
