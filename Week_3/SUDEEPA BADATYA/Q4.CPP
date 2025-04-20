#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, k;

    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate right: ";
    cin >> k;

    k = k % size;

    int temp[100];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[size - k + i];
    }

    for (int i = 0; i < size - k; i++)
    {
        temp[k + i] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    cout << "Array after rotating right by " << k << " positions:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
