#include<iostream>
using namespace std;

class Student{
    public:
    Student();
    Student(std::string name, int ra);
    std::string getName() const;
    int getRa() const;
    private:
    std::string name;
    int ra;
};