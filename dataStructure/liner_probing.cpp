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

bool Hash::isFull() const{
    return (length == maxItem);
}
int Hash::getLength() const{
    return length;
}
int Hash::getHash(Student student){
    return student.getRa() % maxItem;
}

void Hash::printHash() const{
    for (int i = 0; i < maxItem; i++)
    {
        cout << i << structure[i].getName() << " => "<< structure[i].getRa() <<endl;
    }
}

void Hash::insertItem(Student student){
    int location = getHash(student);
    while (structure[location].getRa() > 0)
    {
        location = (location + 1) % maxItem;
    }
    structure[location] = student;
    length++;
}