// Write a C++ program to check if a Number is Perfect square using loops

#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int i;
    for (i = 1; i * i <= a; i++) {
        if (i * i == a) {
            cout << "It's a perfect square number." << endl;
        } else {
            cout << "It's not a perfect square number." << endl;
        }
        }
    

    return 0;
}