#include <iostream>
using  std::cout;
using std::cin;
using std::endl;

// funções
int soma(int nun1, int nun2)
    {
        return nun1 + nun2;
    }
int sub(int nun1, int nun2){
    return nun1 - nun2;
}
int divi(int nun1, int nun2){
    return nun1 / nun2;
}
int mult(int nun1, int nun2){
    return nun1 * nun2;
}
int res(int nun1, int nun2){
    return nun1 % nun2;
}
int main()
{
cout << soma (10, 15) <<endl;
cout << sub (10, 15) <<endl;
cout << divi (10, 15) <<endl;
cout << mult (10, 15) <<endl;
cout << res (10, 15) <<endl;

    
    

    return 0;
}

/*
    ---------------------

//operações matématicos
        int nun1, nun2;
        
        cout << "Digite o valor fr nun1: " << endl;
        cin >> nun1;
        cout << "Digite o valor fr nun2: " << endl;
        cin >> nun2;

        int som = nun1 + nun2;
        int sub = nun1 - nun2;
        float div = (float)nun1 / (float)nun2;
        int mult = nun1 * nun2;
        int res = nun1 % nun2;
        
        cout << "soma: " << som << endl;
        cout << "subtração: " << sub << endl;
        cout << "divisão: " << div << endl;
        cout << "multiplicação: " << mult << endl;
        cout << "resto: " << res << endl;

    ----------------------------------------------
// condição if
    int nun1, nun2;
    cout << "Digite um número: " << endl;
    cin >> nun1;
    cout << "Digite outro número" << endl;
    cin >> nun2;
    if (nun1 == nun2){
        cout << nun1 << " = " << nun2 << endl;
    }
    if (nun1 > nun2){
        cout << nun1 << " > " << nun2 << endl;
    }
    if (nun1 < nun2){
        cout << nun1 << " < " << nun2 << endl;
    }

 ---------------------------------------------   
// laço for
    int total;
    for (int i = 0; i <= 20; i+=2){
        total += i;
    }
    cout << "testando for: " << total <<endl;
    -------------------
    
// laço do while
    int num;
    int contador = 0;
    int soma = 0 ;
    do{
        cout << "Digite um número: " << endl;
        cin >> num;
        cout << "Número: "<< num << endl;
        soma += num;
        cout <<"Soma: "<< soma << endl;
        contador++;
        cout <<"Contador: "<< contador <<endl; 
    } while (num != 0);
    float media =(float)soma / (float)(contador -1) ;
    cout << "A média da serie é " << media << endl;
------------------------------------------------------

    */