//Write a C++ program to print the pattern
//sample output: for n=4
//1      1
//12    21
//123  321
//12344321
//program given below

#include<iostream>
using namespace std;
int main()
{  int num,i,j,k,l;
    cout<<"enter the number of rows:";
    cin>>num;
    cout<<"output:\n";
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(k=0;k<(2*num-2*i);k++)
        {
            cout<<" " ;
        }
        for(l=j-1;l>=1;l--)
        {
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}