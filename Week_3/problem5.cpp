//5. Write a C++ program to remove duplicates from an array and
 //create a new array and store all distinct elements
 #include<iostream>
#include<cctype>
using namespace std;
int main()
{   int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n],i,k,j,m=0,d=0;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {  if(arr[i]!=' '){
            if(arr[i]==arr[j])
            {
                arr[j] =' ';
                m++;
            }}
        }
    }
    int arr1[n-m];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==' ')
        {   d++;
            continue;
        }
        else{
            arr1[i-d]=arr[i];
            
        }

    }
    
    for(i=0;i<(n-m);i++)
    {
        cout<<arr1[i];
    }
return 0;
}