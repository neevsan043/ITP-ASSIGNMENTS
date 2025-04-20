#include <iostream>
using namespace std;

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            input[i] = ch + 32;
        }
    }
    cout << "Lowercase string: " << input << endl;

    return 0;
}
