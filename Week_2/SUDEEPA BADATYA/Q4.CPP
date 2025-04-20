#include <iostream>
using namespace std;

int main() 
{
    int arr[10] = {34,67,89,34,56,23,34,56,89,34};
    int count[100] = {0};

    for (int i = 0; i < 10; i++) 
    {
        count[arr[i]]++;
    }

    int max = 0, n = 0;
    for (int i = 0; i < 100; i++) 
    
    {
        if (count[i] > max) 
        {
            max = count[i];
            n= i;
        }
    }

    cout << "maximum occurring number is: " << n<< endl;

    return 0;
}
