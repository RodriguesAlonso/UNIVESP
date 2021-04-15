#include <iostream>
using namespace std;

class Aluno{
    private:
    int ra;
    string nome;
    
    public:
    Aluno();
    Aluno(string nome, int ra);
    int getRa();
    string getNome();
};