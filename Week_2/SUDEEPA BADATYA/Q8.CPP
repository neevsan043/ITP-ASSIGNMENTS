#include <iostream>
using namespace std;

int sumofdigits(int n) 
{
    if (n == 0)
        return 0;
    return n % 10 + sumofdigits(n / 10);
}

int main() 
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    cout << "sum of digits = " << sumofdigits(num) << endl;

    return 0;
}
