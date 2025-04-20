#include <iostream>
using namespace std;

int main()
{
    int arr[100], distinct[100];
    int size, newSize = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == distinct[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            distinct[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "Array with distinct elements:\n";
    for (int i = 0; i < newSize; i++)
    {
        cout << distinct[i] << " ";
    }

    return 0;
}
