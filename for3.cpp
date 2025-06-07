#include <iostream>
using namespace std;
int main (void){
    int n;
    int sum = 0;
    cout <<"Coloca el numero del cual deseas conocer la sumatoria: \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        cout << sum << "\n";
    }
    
    return 0;
}