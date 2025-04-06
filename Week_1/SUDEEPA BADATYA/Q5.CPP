#include<iostream>
using namespace std;
int main() {
    int a, i=1;
    cout << "anter a number: ";
    cin >> a;
    while (i * i <= a) 
    {
        if (i * i == a) 
        {
            cout << "perfect square!" << endl;
            return 0;
        }
        i++;
    }

    cout << "not a perfect square." << endl;
    return 0;
}
