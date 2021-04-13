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

void Hash::retriveItem(Student& student, bool& found){
    int startLoc = getHash(student);
    int location = startLoc;
    bool moreSearch = true;
    do
    {
        if (structure[location].getRa() == getHash(student) || structure[location].getRa() == -1)
        {
            moreSearch = false;
        }else{
            location = (location + 1) % maxItem;
        }
    } while (startLoc != location && moreSearch);
    
    found = (structure[location].getRa() == student.getRa());
        if (found)
        {
            structure[location] = student;
        }
}

void Hash::deleteItem(Student student){
    int startLoc = getHash(student);
    int location = startLoc;
    bool moreSearch = true;
    do
    {
        if (structure[location].getRa() == student.getRa() ||structure[location].getRa() == -1)
        {
            structure[location] =
            moreSearch = false;
        }else{
            location = (location + 1) % maxItem;
        }
    } while (location != startLoc || moreSearch);
    if (structure[location].getRa() == student.getRa())
    {
        structure[location] = Student("", -2);
        length--;
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

