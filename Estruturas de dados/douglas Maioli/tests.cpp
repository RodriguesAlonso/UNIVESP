#include<iostream>

using namespace std;

int main()
{
 float notas[2];
    //float mescola;
    //float maluno;
    
    for (int i = 0; i < 3 ; i++)
    {
        cout << "digite a nota "<< i+1 <<": ";
        cin >> notas[i];
        cout <<endl;
    }
    return 0;
}
