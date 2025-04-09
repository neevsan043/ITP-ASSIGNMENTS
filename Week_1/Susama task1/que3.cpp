// Write a C++ program to find the largest digit in a number.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int n = 0;
    int a= num;

    while (a > 0) {
        int digit = a% 10;
        if (digit > n) {
             n= digit;
        }
        a = a / 10;
    }

    cout << "The largest digit in " << num << " is: " << n << endl;
    return 0;
}