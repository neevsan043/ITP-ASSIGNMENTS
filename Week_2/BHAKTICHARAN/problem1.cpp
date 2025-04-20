//1. Take two array as input, merge them and print it in reverse order
// using loop
#include<iostream>
using namespace std;
int main()
{int a,b,i;
  cout<<"enter the size of the first array:";
cin>>a;
cout<<"enter the size of the second  array:";
cin>>b;
int arr1[a],arr2[b],merge[a+b];
cout<<"enter array1:";
for(i=0;i<a;i++)
    {
    cin>>arr1[i];
    }
    cout<<"enter array2:";
    for(i=0;i<b;i++)
        {
        cin>>arr2[i];
        }
        for(i=0;i<a;i++)
        {
            merge[i]=arr1[i];
        }
        for(i=a;i<(a+b);i++)
        {
            merge[i]=arr2[i-a];
        }
for(i=(a+b-1);i>=0;i--)
{
cout<<merge[i];
}
return 0;
}