#include <iostream>


BinarySearchTree();
    ~BinarySearchTree();
    void deleteTree(Node* noAtual);

    Node* getRaiz();
    bool isFull();
    bool isEmpty();

    void insert(Aluno aluno);
    void remove(Aluno aluno);
    void busca(Aluno& aluno, bool& found);

    void printPreOrdem(Node* noAtual);
    void printOrdem(Node* noAtual);
    void printPosOrdem(Node* noAtual);