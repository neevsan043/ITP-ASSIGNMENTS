//1. Write a C++ program to move all the negative elements to one
//side of the array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n],arr1[n],i,p=0,t;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr1[p]=arr[i];
            arr[i]=' ';
            p++;

        }
    }
    for(i=0;i<n;i++)
    {  if(arr[i]==' ')
        {
            continue;
        }
        arr1[p]=arr[i];
        p++;
    }

    for(i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
       cout<<arr[i];
    }
    
    return 0;
    



}