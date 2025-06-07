//Solicita N números, guárdalos en un arreglo y calcula el promedio.//
#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"¿De cuantos numeros deseas conocer el promedio? \n";
    cin >> n;

    float numero[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingrese el numero " << i + 1 << ": \n";
        cin >> numeros[i];
        suma += numeros[i];
    }
    float promedio = suma / n;
    
    cout << "El promedio de los " << N << " números es: " << promedio << "\n";
    
    
    return 0;
}