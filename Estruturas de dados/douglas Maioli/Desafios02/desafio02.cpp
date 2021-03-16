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
