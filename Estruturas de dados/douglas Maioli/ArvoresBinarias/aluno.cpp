
#include "aluno.h"

using namespace std;

    Aluno::Aluno()
    {
        ra = - 1;
        name = " ";
    }
    Aluno::Aluno(int r,string n){
        ra = r;
        name = n;
    }
    int Aluno::getRa(){
        return ra;
    }
    string Aluno::getName(){
        return name;

    }