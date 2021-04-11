#include<iostream>
using namespace std;

class Student{
    private:
    std::string name;
    int ra;
    public:
    Student();
    Student(std::string name, int ra);
    std::string getName() const;
    int getRa() const;
};