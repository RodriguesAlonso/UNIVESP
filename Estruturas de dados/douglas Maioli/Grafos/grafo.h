// Simple graph not directed weighted

#include <iostream>

using namespace std;

typedef string TypeItem;

class Grafo
{ 
    private:
    int nullEdges;
    int maxVertices;
    int numVertices;
    TypeItem vertex;
    int** adjacentMatrix;
};