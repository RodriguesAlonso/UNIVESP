#include "hash.h"
#include <iostream>
using namespace std;

Hash::Hash(int max){
    maxItem = max;
    structure = new Student[maxItem];
    length = 0;
}
Hash::~Hash(){
    delete [] structure;
}

bool Hash::isFull(){
    return (length == maxItem);
}
int Hash::getLength(){
    return 
}
