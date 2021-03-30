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
    
}
bool SearchTree::isEmpty() const{
    return root == NULL;
}

void SearchTree::retriveAluno(Nodetype* tree, Aluno& item, bool& found) const
{

}
void SearchTree::insertAluno(Nodetype*& tree, Aluno item)
void SearchTree::deleteAluno(Nodetype*& tree, int aluno)
void SearchTree::deleteNode(Nodetype*& tree)
void SearchTree::getSucessor(Nodetype* tree, Aluno& data)
        
void SearchTree::printerPreOrder(Nodetype* tree) const
void SearchTree::printerInOrder(Nodetype* tree) const
void SearchTree::printerPosOrder(Nodetype* tree) const