#include <iostream>
using namespace std;
int main (void){
    int opc;
    do
    {
        cout <<"Que operacion desea realizar: \n";
        cout <<"1-) Suma \n";
        cout <<"2-) Resta \n";
        cout <<"3-) Multiplicacion \n";
        cout <<"4-) Division \n";
        cout <<"5-) Salir \n";
        cin >> opc;
    } while (opc != 5);
    cout <<"Usted a decidido salirse de la calculadora \n";
    
    return 0;
}