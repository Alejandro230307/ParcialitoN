//Llena un arreglo con N números y calcula el producto de todos sus elementos//
#include <iostream>
using namespace std;
int main (void){
    int n;
    float producto = 1;
    cout <<"Ingresa la cantidad de valores que deseas conocer su producto: \n";
    cin >> n;
    float numero[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingrese el numero " << i + 1 << ": \n";
        cin >> numero[i];
        producto *= numero[i];
    }
    cout << "El producto de todos los números es: " << producto << "\n";


    return 0;
}