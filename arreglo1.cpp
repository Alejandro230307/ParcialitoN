#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> N;

    int numeros[N];  
    int suma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];  
    }

    cout << "La suma de los " << N << " números es: " << suma << endl;

    return 0;
}
