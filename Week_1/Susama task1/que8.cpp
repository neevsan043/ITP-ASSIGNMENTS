//Write a C++ program to print the pattern
//sample output: for n=4
//1      1
//12    21
//123  321
//12344321

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i= 1; i<= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }

        int gap = 2 * (n - i);
        for (int g = 1; g <= gap; g++) {
            cout << " ";
        }
        
        for (int m = i; m >= 1; m--) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

