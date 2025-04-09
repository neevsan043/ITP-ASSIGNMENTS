//Write a C++ program to input a decimal number and convert it into binary and
// octal number system using loops.

#include <iostream>
using namespace std;

int binary(int a) {
    int num = 0, digit= 1;
    while (a > 0) {
        int rem = a % 2;
        num += rem * digit;
        digit *= 10;
        a /= 2;
    }
    return num;
}

int octal(int a) {
    int num = 0, digit = 1;
    while (a > 0) {
        int rem = a % 8;
        num += rem * digit;
        digit *= 10;
        a /= 8;
    }
    return num;
}

int main() {
    int numb;
    cout << "Enter a decimal number: ";
    cin >> numb;

    cout << "Binary num is " << binary(numb) << endl;
    cout << "Octal num is " << octal(numb) << endl;

    return 0;
}
