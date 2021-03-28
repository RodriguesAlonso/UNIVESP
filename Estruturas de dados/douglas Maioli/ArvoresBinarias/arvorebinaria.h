#include <iostream>
#include "aluno.h"

struct Node
{
    Aluno aluno;
    Node* filhoDireita;
    Node* filhoEsquerda;
};


class BinarySearchTree{
    private:
    Node* raiz;

    public:
    BinarySearchTree();
    ~BinarySearchTree();
    void deleteTree(Node* noAtual);

    Node* getRaiz();
    bool isFull();
    bool isEmpty();

    void insert(Aluno aluno);
    void remove(Aluno aluno);
    void busca(Aluno& aluno, bool& found);
    void removerbusca();
    void deletarNode();
    void obterSucessor();

    void printPreOrdem(Node* noAtual);
    void printOrdem(Node* noAtual);
    void printPosOrdem(Node* noAtual);

};