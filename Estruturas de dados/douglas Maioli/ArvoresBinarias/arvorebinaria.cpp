#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;

BinarySearchTree::BinarySearchTree(){
    raiz = NULL;
}
BinarySearchTree::~BinarySearchTree(){

}
void BinarySearchTree::deleteTree(Node* noAtual){
    
}

Node* BinarySearchTree::getRaiz(){
    return raiz;
}
bool BinarySearchTree::isFull(){
    try
    {
        Node* temp = new Node;
        delete temp;
        return false;
    }
    catch(bad_alloc exception())
    {
        return true;
    }
    

}
bool BinarySearchTree::isEmpty(){
    return (raiz == NULL);

}

void BinarySearchTree::insert(Aluno aluno){

}
void BinarySearchTree::remove(Aluno aluno){

}
void BinarySearchTree::busca(Aluno& aluno, bool& found){

}

void BinarySearchTree::printPreOrdem(Node* noAtual){

}
void BinarySearchTree::printOrdem(Node* noAtual){

}
void BinarySearchTree::printPosOrdem(Node* noAtual){

}