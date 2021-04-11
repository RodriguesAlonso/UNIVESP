#include "Student.h"

Student::Student(){
    name = "";
    ra = -1;
};
Student::Student(std::string name, int ra){
    this->name = name;
    this->ra = ra;
};

string Student::getName() const{
    return name;
}
int Student::getRa() const{
    return ra;
}