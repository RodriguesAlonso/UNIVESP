#include"exercicios.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int Exercicios::soma(int elementos, float *lista){
    float somar = 0;
    for (int i = 0; i < elementos; i++){
        somar += lista[i];
    }
    return somar;
}

void Exercicios::ex01(float nun){
    cout<< ((nun*nun) -3*nun +5);
}
void Exercicios::ex02(){
    float notas[2];
    float mescola;
    float maluno;
    
    cout<<"digite a media da escola: ";
    cin >> mescola;
    for (int i = 0; i < 3 ; i++)
    {
        cout << "digite a nota "<< i+1 <<": ";
        cin >> notas[i];
        cout <<endl;
    }
    maluno = soma(3, notas)/3;
    cout << "Media do aluno: "<<maluno << endl;
    cout<< "Media da escola: "<<mescola <<endl;
    cout <<"-=-=-=-=-=-=-=-=-="<<endl;
    if (maluno > mescola){
        cout << "Aluno acima da media da escola";}
    else if (maluno < mescola){
        cout << "Aluno abaixo da media da escola";
    }else{
        cout << "Aluno com media igual a da escola";
    }
    
}