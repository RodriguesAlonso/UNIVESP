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
    else if ()
    {
        retriveAluno(tree->esquerda, item, found);
    }
    
    
}
void SearchTree::insertAluno(Nodetype*& tree, Aluno item)
void SearchTree::deleteAluno(Nodetype*& tree, int aluno)
void SearchTree::deleteNode(Nodetype*& tree)
void SearchTree::getSucessor(Nodetype* tree, Aluno& data)
        
void SearchTree::printerPreOrder(Nodetype* tree) const
void SearchTree::printerInOrder(Nodetype* tree) const
void SearchTree::printerPosOrder(Nodetype* tree) const