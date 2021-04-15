#include <iostream>
#include "hash.h"

using namespace std;

int main()
{
    Aluno aluno1("joao", 200);
    Aluno aluno2("Paulo", 201);
    Hash alunoHash(3);
    
    alunoHash.insertHash(aluno1);
    alunoHash.insertHash(aluno2);
    alunoHash.print();
    
    return 0;
    
}
