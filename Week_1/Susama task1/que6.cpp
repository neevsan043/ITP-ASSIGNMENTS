//Write a C++ program to print the pattern
//sample output: for n=3              for n=2
//123                                         12
//112233                                      1122
//111222333

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i= 1; i<= n; i++) {
        for (int j= 1; j<= n; j++) {
            for (int num = 1; num <= i; num++) {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
