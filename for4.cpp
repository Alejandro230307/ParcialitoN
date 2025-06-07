#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"Ingrese el numero del cual desea conocer su tabla de multiplicar: \n";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout <<"Su tablad de multiplicar seria " <<n <<" x " << i << " = " << n * i <<"\n";
    }
    
    return 0;
}