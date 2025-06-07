#include <iostream>
using namespace std;
int main (void){
    int n;
    cout <<"Cuando numeros deseas ingresar? \n";
    cin >> n;
    int numeros [n];
    for (int i = 0; i < N; i++)
    {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }
    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < N; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    cout << "El número mayor es: " << mayor << "\n";
    cout << "El número menor es: " << menor << "\n";


    return 0;
}