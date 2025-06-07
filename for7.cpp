#include <iostream>
using namespace std;
int main (void){
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0 & i % 5 == 0)
        {
            cout << i <<"\n";
        }
        
    }

    return 0;
}