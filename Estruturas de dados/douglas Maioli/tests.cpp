#include<iostream>

using namespace std;
/*
int** alocarMatriz(int Linhas,int Colunas){ //Recebe a quantidade de Linhas e Colunas como Parâmetro
 
  int i,j; //Variáveis Auxiliares
 
  int **m = (int**)malloc(Linhas * sizeof(int*)); //Aloca um Vetor de Ponteiros
 
  for (i = 0; i < Linhas; i++){ //Percorre as linhas do Vetor de Ponteiros
       m[i] = (int*) malloc(Colunas * sizeof(int)); //Aloca um Vetor de Inteiros para cada posição do Vetor de Ponteiros.
       for (j = 0; j < Colunas; j++){ //Percorre o Vetor de Inteiros atual.
            m[i][j] = 0; //Inicializa com 0.
       }
  }
return m; //Retorna o Ponteiro para a Matriz Alocada
}
*/
int main()
{
 int rows, columns;
    cout << "Enter the matrix rows: ";
    cin >> rows;
    cout << "Enter the matrix columns: ";
    cin >> columns;
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++){
        matrix[i] = (int*)malloc(columns * sizeof(int));
        for (int j = 0; j < columns; j++)
        {
            cout << "Insert the["<<i<<"]["<< j<<"] elements of the matrix01:"<<endl;
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }    
        /* code */
    
    
           //cout << "Insert the["<<i<<"]["<< j<<"] elements of the matrix01:"<<endl;
}
 

