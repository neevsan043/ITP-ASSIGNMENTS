#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.length();
    bool isPal = true;
    for(int i = 0; i < n/2; i++)
        if(s[i] != s[n-1-i]) {
            isPal = false;
            break;
        }
    cout << (isPal ? "Palindrome" : "Not Palindrome");
    return 0;
}