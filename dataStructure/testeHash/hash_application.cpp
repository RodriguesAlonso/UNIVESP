#include <iostream>
#include "hash.h"

using namespace std;

int main(){
    Hash studentHash(10);
    int ras[7] = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};

    std::string nomes[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 
    for (int i = 0; i < 7; i++)
    {   
        Student student = Student(nomes[i], ras[i]);
        studentHash.insertItem(student);
    }
    cout << endl << "------------------------------"<<endl;
    studentHash.printHash();
    cout << endl << "------------------------------" <<  endl;

    Student student("", 12704);
    bool found = false;
    studentHash.retriveItem(student, found);
    cout << student.getName() << " -->" << found << endl;
    cout << endl << "------------------------------" <<  endl;
    studentHash.deleteItem(student);
    studentHash.printHash();
    cout << "END" << endl;
}