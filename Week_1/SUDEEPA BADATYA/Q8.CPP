#include <iostream>
using namespace std;

int main() 
{
    int n = 4, i,j,k;
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
            cout << j;
        for (k = 1; k <= 2 * (n - i); k++) 
            cout << " ";
        for (j = i; j >= 1; j--)
            cout << j;
        cout << endl;
    }
}
