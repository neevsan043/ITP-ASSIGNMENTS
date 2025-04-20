//Write a C++ program to print the pattern
//sample output: for n=3              for n=2
//123                                 12
//112233                              1122
//11122233
#include<iostream>
using namespace std;
int main()
{    int n,i,j,num;
    cin>>num;
    n=1;
    while(n<=num)
    {
        for(i=1;i<=num;i++)
        {
            for(j=1;j<=n;j++){
            cout<<i;
            }
        }
        cout<<"\n";
   n++;
}
    return 0;
}