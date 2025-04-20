#include <iostream>
using namespace std;

int main()
{
    string input, result = "";

    cout << "enter a string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            result += ch;
        }
    }

    cout << "\nstring with only alphabets: " << result << endl;

    return 0;
}
