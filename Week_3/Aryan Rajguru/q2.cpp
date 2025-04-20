#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int alpha = 0, digit = 0, special = 0;
    for(char c : s) {
        if(isalpha(c)) alpha++;
        else if(isdigit(c)) digit++;
        else special++;
    }
    cout << "Alphabets: " << alpha << "\nDigits: " << digit << "\nSpecial: " << special;
    return 0;
}