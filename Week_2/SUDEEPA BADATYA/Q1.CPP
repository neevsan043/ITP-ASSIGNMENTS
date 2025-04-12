#include <iostream>
using namespace std;

int main() 
{
    int a[100], b[100], merged[200] ,n1, n2,i;
   

    
    cout << "enter number of elements in first array: ";
    cin >> n1;
    cout << "enter elements:\n";
    for (int i = 0; i < n1; i++) 
    {
        cin >> a[i];
    }
    cout << "enter number of elements in second array: ";
    cin >> n2;
    cout << "enter elements:\n";
    for (i = 0; i < n2; i++) 
    {
        cin >> b[i];
    }

    for (i = 0; i < n1; i++) 
    {
        merged[i] = a[i];
    }
    for (i = 0; i < n2; i++) 
    {
        merged[n1 + i] = b[i];
    }
    cout << "merged array in reverse:\n";
    for (i = n1 + n2 - 1; i >= 0; i--) 
    {
        cout << merged[i] << " ";
    }

    return 0;
}
