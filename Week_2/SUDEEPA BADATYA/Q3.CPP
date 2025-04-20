#include <iostream>
using namespace std;

int main() {
    int a[5] = {11,33,55,77,99};
    int b[5];

 
    for (int i = 0; i < 5; i++) 
    {
        b[i] = a[i];
    }

    cout << "copied array:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << b[i] << " ";
    }

    return 0;
}
