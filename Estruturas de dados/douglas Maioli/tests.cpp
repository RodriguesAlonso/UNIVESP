#include<iostream>

using namespace std;

int main()
{
    int* a = NULL;   // Inicializa o ponteiro
    int n;           // Tamanho da matriz
    cout << "valor n: ";
    cin >> n;        // Entrada de dados para o tamanho da matriz
    a = new int[n];  // Allocação
    for (int i=0; i<n; i++)
    {
        a[i] = 0;       // atribuindo os valores para  cada elemento.
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++){
            a[i] = j*2;
            cout <<a[i][j] << " ";
        }
        j++;
        cout << endl;

    }

    
    
    return 0;
    
}
