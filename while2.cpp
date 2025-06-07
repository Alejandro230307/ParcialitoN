#include <iostream>
using namespace std;
int main(void) {
    int numero;
    int suma = 0;

    cout << "Ingresa numeros (ingresa 0 para terminar):" << endl;

    do {
        cin >> numero;
        suma += numero;
    } while (numero != 0);

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}