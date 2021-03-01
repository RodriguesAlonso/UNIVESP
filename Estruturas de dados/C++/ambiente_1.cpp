#include <iostream>
#define ELE 10

using std::cout;
using std::cin;
using std::endl;

void modificando_vetor_sintax_1(const int b[], int nun){ // const para não alterar o valor do vetor dentro da função
     for(int i = 0; i < nun; i++){
         b[i] = b[i] * 2;
     }
    }
void modificando_vetor_sintax_2(const int* b, int nun){
    for (int i = 0; i < nun; i++)
    {
        b[i] = b[i] * 2;
    }
    
}
main(){
    // alocação estática
    int c[ELE] = {1,2,3,4,5,6,7,8,9,10};
    // alocação dinâmica
    int *d = new int[ELE];
    for (int i = 0; i < ELE; i++){
        d[i] = i + 1;
    }
    cout << endl << "---antes-C--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"c["<< c[i] << "] ";        
    }
    cout << endl << "---antes-D--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"d["<< d[i] << "] ";        
    }

    modificando_vetor_sintax_1(c, ELE);
    modificando_vetor_sintax_2(c, ELE);

    modificando_vetor_sintax_1(d, ELE);
    modificando_vetor_sintax_2(d, ELE);
    cout << endl << "---depois-C--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"c["<< c[i] << "] ";        
    }
    cout << endl << "---depois-D--" << endl;
    for (int i = 0; i < ELE; i++)
    {
        cout <<"d["<< d[i] << "] ";        
    }
    
    cout << endl << "------" << endl;


return 0;
}