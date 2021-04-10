#ifndef NODETYPE_H
#define NODETYPE_H

typedef int ItemType;

struct NodeType
{
    ItemType info;
    NodeType* next;
};

#endif