#include <iostream>

using namespace std;
int main()
{
    /*int total;
    for (int i = 0; i <= 20; i+=2){
        total += i;
    }
    cout << "testando for: " << total <<endl;*/
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
    float media =(float)soma / (float)(contador) ;
    cout << "A média da serie é " << media << endl;
    return 0;
}
