#include<iostream>
using namespace std;

float fa(float x){
    return (x*x) -3*x +5;
}
int main()
{
    cout << fa(4) << endl;
    cout << fa(1) << endl;
    cout << fa(40) << endl;
    cout << fa(9) << endl;
    cout << fa(0) << endl;
    return 0;
}

