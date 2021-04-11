#include "hash.h"
using namespace std;

Hash::Hash(int max){
    length = 0;
    maxItem = max;
    structure = new Student[maxItem];
}

Hash::~Hash(){
    delete [] structure;
}

bool Hash::isFull() const{
    return length == maxItem;
}

int Hash::getLength() const{
    return length;
}

void Hash::printHash() const{
    for (int i = 0; i < maxItem; i++)
    {
        cout << i << " : " <<structure[i].getName() << " - "<< structure[i].getRa()<<endl;
    }
}

int Hash::getHash(Student student){
    return student.getRa() % maxItem;
}

void Hash::insertItem(Student student){
    int location = getHash(student);
    structure[location] = student;
    length++;
}
void Hash::deleteItem(Student student){
    int location = getHash(student);
    structure[location] = Student();
    length--;
}
void Hash::retriveItem(Student& student,bool& found){
    int location = getHash(student);
    Student aux = structure[location];
    if (aux.getRa() != student.getRa())
    {
        found = false;
    }else{
        found = true;
        student = aux;
    }
    

}