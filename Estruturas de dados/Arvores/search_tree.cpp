#include "search_tree.h"

void SearchTree::destroyTree(Nodetype*& tree)
{
    if (tree != NULL)
    {
        destroyTree(tree->esquerda);
        destroyTree(tree->direita);
        delete tree;
    }
    
}
bool SearchTree::isFull() const{
    Nodetype* location;
    try
    {
        location = new Nodetype;
        delete location;
        return false;
    }
    catch(std::bad_alloc exception)
    {
        return true;
    }
    
}
bool SearchTree::isEmpty() const{
    return root == NULL;
}

void SearchTree::retriveAluno(Nodetype* tree, Aluno& aluno, bool& found) const
{
    if (tree == NULL)
    {
        found = false;
    }
    else if ((aluno.getRa()) < tree->aluno.getRa())
    {
        retriveAluno(tree->esquerda, aluno, found);
    }
    else if (aluno.getRa() < tree->aluno.getRa())
    {
        retriveAluno(tree->direita, aluno, found);
    }
    else
    {
        aluno = tree->aluno;
        found = true;
    }
    
    
    
}
void SearchTree::insertAluno(Nodetype*& tree, Aluno aluno)
{
    if (tree == NULL)
    {
        tree = new Nodetype;
        tree->direita = NULL;
        tree->esquerda = NULL;
    }
    else if (aluno.getRa() < tree->aluno.getRa())
    {
        insertAluno(tree->esquerda, aluno);
    }
    else if (aluno.getRa() > tree->aluno.getRa())
    {
        insertAluno(tree->direita,aluno);
    }
}
void SearchTree::deleteAluno(Nodetype*& tree, int aluno) {

}
void SearchTree::deleteNode(Nodetype*& tree){

}
void SearchTree::getSucessor(Nodetype* tree, Aluno& data){

}
        
void SearchTree::printerPreOrder(Nodetype* tree) const{

}
void SearchTree::printerInOrder(Nodetype* tree) const{

}
void SearchTree::printerPosOrder(Nodetype* tree) const{

}