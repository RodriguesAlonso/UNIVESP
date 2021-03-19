#include<iostream>
#include "hash.h"
using namespace std;

int main(){

    Hash alunoHash(10);
    int   ras[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
    string nomes[7] = {
    "Pedro", "Raul", "Paulo",
    "Carlos", "Lucas", "Maria",
    "Samanta"}; 

    for (int i = 0; i < 7; i++)
    {
        Aluno aluno = Aluno( ras[i], nomes[i]);
        alunoHash.insertItem(aluno);
        
    }
    alunoHash.print();
    cout << "------------------------------" <<  endl;
    Aluno aluno(12704,"");  
    bool     found = false;
    alunoHash.retriveItem(aluno, found);
    cout << aluno.getName() <<" -> "<< found << endl;

    cout << "------------------------------" <<  endl;

    alunoHash.deleteItem(aluno);
    alunoHash.print();

    cout << "FIM";

    return 0;
}