// 9. Print all elements of an array using recursion
#include<iostream>
using namespace std;
void show(int *p,int a,int b);

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
    show(arr,0,a);

    return 0;
    }
    void show(int *p,int a,int b)
    {
       if(a==b-1)
       {
        cout<<*(p+a)<<"\n";
        return;
       }
       cout<<*(p+a)<<" ";
       show(p,a+1,b);
    }