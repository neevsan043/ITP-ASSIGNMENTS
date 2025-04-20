#include <iostream>
using namespace std;

int main()
{
    string input;
    char toRemove;
    string result = "";
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Enter the character to remove: ";
    cin >> toRemove;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != toRemove)
        {
            result += input[i];
        }
    }
    cout << "String after removing '" << toRemove << "': " << result << endl;

    return 0;
}
