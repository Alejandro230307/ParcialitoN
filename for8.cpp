#include <iostream>
using namespace std;
int main (void){
    int n;
    int fac = 1;
    cout <<"Digite el numero de cual desea conocer su factorial: \n";
    cin >> n;
    for (int i = 1; i <= n ; i++)
    {
        fac *= i;
    }
    cout << "El numero factorial de " << n << " es: " << fac << "\n";
    return 0;
}