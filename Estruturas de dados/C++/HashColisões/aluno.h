#include<iostream>
using std::string;

class Aluno{
    private:
    int ra;
    string name;

    public:
    Aluno();
    Aluno(int ra, string name);
    int getRa();
    string getName();

};