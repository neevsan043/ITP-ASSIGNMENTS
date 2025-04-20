#include <iostream>
using namespace std;

int main() {
    string s;
    char ch;
    getline(cin, s);
    cin >> ch;
    for(char c : s)
        if(c != ch) cout << c;
    return 0;
}