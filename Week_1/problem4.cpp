//Write a C++ program to input a decimal number and convert it into binary and
//octal number system using loops
#include<iostream>
using namespace std;
int main()
{
    int a,b,m=0,r;
    cin>>a;
    b=a;
    r=a;
    int c=a;
    int n=0;
    while(b)
    {
        b=b/2;
        n=n+1;

    }
    while(r)
    {
        r=r/8;
        m=m+1;

    }
    int arr[n],arr1[n];
    int k=0,i;
    while(a)
    {
        if(a%2==0)
        {
          arr[k]=0;
        }
        else{
          arr[k]=1;
        }
        k=k+1;

        a=a/2;
      }
      cout<<"binary"<<endl;
    for(i=n-1;i>=0;i--)
    {
      cout<<arr[i];
    }
    int j=0;
    while(c)
    {
      arr1[j]=c%8;
      c=c/8;
      j=j+1;
    }
    cout<<"\noctal"<<endl;
    for(i=m-1;i>=0;i--)
    {
      cout<<arr1[i];
    }

    return 0;

}