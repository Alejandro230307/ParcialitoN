#include <iostream>
#include <string>
using namespace std;
int main (void){
    string contrcorr = "fabi";
    string intento;

    do
    {
        cout <<"Ingrese su contraseña \n";
        cin >> intento;
        
        if (intento != contrcorr)
        {
            cout << "Contrasena incorrecta. Intenta de nuevo.\n"; 
        }
        
    } while (intento != contrcorr);
    cout << "¡Contrasena correcta! Acceso concedido.\n";
    

    return 0;
}