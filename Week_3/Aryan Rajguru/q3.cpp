#include <iostream>
using namespace std;

int main() {
    string s, result = "";
    getline(cin, s);
    for(char c : s)
        if(isalpha(c)) result += c;
    cout << result;
    return 0;
}