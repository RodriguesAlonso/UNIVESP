#include "Student.h"

Student::Student(){
    name = "";
    ra = -1;
};
Student::Student(int ra, std::string name){
    this->name = name;
    this->ra = ra;
};

string Student::getName() const{
    return name;
}
int Student::getRa() const{
    return ra;
}