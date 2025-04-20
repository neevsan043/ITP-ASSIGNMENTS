// Find the Nth Fibonacci number using recursion
#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = fib(num);
    cout << "Fibonacci number at position " << num << " is: " << result << endl;

    return 0;
}
