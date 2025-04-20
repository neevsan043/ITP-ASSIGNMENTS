//4. Write a C++ program to rotate an array to the right by k
//positions
#include<iostream>
#include<cctype>
using namespace std;
int main()
{   int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n],arr1[n],i,k;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number of positions you want to shift:\n";
     cin>>k;
     for(i=0;i<n;i++)
     {
        arr1[(k+i)%n]=arr[i];
     }
     for(i=0;i<n;i++)
    {
        cout<<arr1[i];
    }
return 0;
}