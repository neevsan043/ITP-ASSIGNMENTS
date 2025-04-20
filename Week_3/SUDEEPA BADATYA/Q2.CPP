#include <iostream>
using namespace std;

int main()
{
    string input;
    int alphabets = 0, digits = 0, specialChars = 0;
    cout << "enter a string: ";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            specialChars++;
        }
    }
    cout << "\ntotal Alphabets: " << alphabets << endl;
    cout << "total digits: " << digits << endl;
    cout << "total special characters: " << specialChars << endl;
    return 0;
}
