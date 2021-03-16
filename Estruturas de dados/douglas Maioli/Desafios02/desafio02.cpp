#include<iostream>
#include "desafio02.h"

using std::cout;
using std:: cin;
using std:: cout;
using std::endl;

void Desafio02::ex06() const{
    float familia[5];
    float mean;
    for (int i = 0; i < 5; i++)
    {
        cout << "Report family " << i + 1 <<" spending: ";
        cin >> familia[i];
    }
    mean = (familia[0] + familia[1] + familia[2] + familia[3] + familia[4])/5;
    cout << "family mean = "<<mean<< endl;

    for (int i = 0; i < 5; i++)
    {
        if (familia[i] > mean)
        {
            cout << "family " << i + 1 << " spending is higher then the averager household" << endl;
        }
        else if (familia[i] == mean)
        {
            cout << "family " << i + 1 << " spending is on averager household" << endl;
        }
        
        else{
            cout << "family " << i + 1 << " spending is lower then the averager household" << endl;
        }
        
    }
    
    
    
    
    

}
void Desafio02::ex07()const{
    int elements1;
    int elements2;
    int rows;
    int columns;
    int *matrix = new int[12, 2];
    cout << "Enter the matrix rows: ";
    cin >> rows;
    int *vectorRow = new int[rows];
    cout << "Enter the matrix columns: ";
    cin >> columns;
    int *vectorColumn = new int[columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Insert the["<<i<<"]["<< j<<"] elements of the matrix01:"<<endl;
            cin >> 
            
        }
    }
    
    
    
}
void Desafio02::ex08()const{

}
void Desafio02::ex09()const{

}
void Desafio02::ex010()const{

}