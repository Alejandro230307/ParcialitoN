#include <iostream>
using namespace std;
int main (void){
    int n;
    int suma = 0;
    cout <<"Ingresa el numero de cual deseas conocer la sumaria de sus numeros pares: \n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
     cout << "la suma de los numeros pares de la cifra que usted digito es: " << suma << "\n";
    
    
    return 0;
}