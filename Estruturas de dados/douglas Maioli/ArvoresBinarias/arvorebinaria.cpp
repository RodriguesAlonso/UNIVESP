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
    if (!isFull())
    {
        Node* newNode = new Node;
        newNode->aluno = aluno;
        newNode->filhoDireita = NULL;
        newNode->filhoEsquerda = NULL;
        if (isEmpty)
        {
            raiz = newNode;
        }else{
            Node* temp = raiz;
            while (temp !=NULL)
            {
                if (aluno.getName() < temp->aluno.getName())
                {
                    if (temp->filhoEsquerda == NULL)
                    {
                        temp->filhoEsquerda = newNode;
                        break;
                    }else{
                        temp = temp ->filhoEsquerda;
                    }
                }else{
                    if (temp->filhoDireita == NULL)
                    {
                        temp->filhoDireita = newNode;
                        break;
                    }else{
                        temp = temp ->filhoDireita;
                    }
                }
            }
        }
    }else{
        throw "Tree is full.";
    }
    

}
void BinarySearchTree::remove(Aluno aluno){
    removerbusca(aluno, raiz);
}
void BinarySearchTree::removerbusca(Aluno aluno, Node*& noAtual)
{
    if (aluno.getRa() < noAtual->aluno.getRa())
    {
        removerbusca(aluno, noAtual->filhoEsquerda);
    }
    else if (aluno.getRa() > noAtual->aluno.getRa())
    {
        removerbusca(aluno, noAtual->filhoDireita);
    }
    else
    {
        deletarNode(noAtual);
    }
    
}
void BinarySearchTree::deletarNode(Node*& noAtual){

}
void BinarySearchTree::obterSucessor(Aluno& AlunoSucessor,Node* noTemp){
    
}
void BinarySearchTree::busca(Aluno& aluno, bool& found){
    found = false;
    Node* noAtual = raiz;
    while (noAtual != NULL)
    {
        if (aluno.getRa() < noAtual->aluno.getRa())
        {
            noAtual = noAtual ->filhoEsquerda;
        }
        else if (aluno.getRa() > noAtual->aluno.getRa())
        {
            noAtual = noAtual ->filhoDireita;
        }else{
            found = true;
            aluno = noAtual->aluno;
            break;
        }
    }
}

void BinarySearchTree::printPreOrdem(Node* noAtual){

}
void BinarySearchTree::printOrdem(Node* noAtual){

}
void BinarySearchTree::printPosOrdem(Node* noAtual){

}