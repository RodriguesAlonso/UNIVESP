#include<iostream>
using std::string;

class Student{
    private:
    string name;
    int ra;
    public:
    Student();
    Student(string name, int ra);
    string getName() const;
    int getRa() const;
};