#include<iostream>

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