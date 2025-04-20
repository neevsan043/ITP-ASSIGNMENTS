#include <iostream>
using namespace std;

void movenegatives(int arr[], int size)
{
    int position = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
            position++;
        }
    }
}

int main()
{
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    movenegatives(arr, size);
    cout << "\nArray after moving negatives to one side: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
