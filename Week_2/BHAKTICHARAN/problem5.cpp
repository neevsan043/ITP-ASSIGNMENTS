//. Write a C++ program to find the second smallest elements in a
// given array of integers(all elements of array distinct).
#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"enter the size of the array:";
    cin>>a;
    int arr[a];
    cout<<"enter the elements";
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
            int a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
          }
        }
    }
    cout<<"the second smallest element is"<<arr[1];
    return 0;
}