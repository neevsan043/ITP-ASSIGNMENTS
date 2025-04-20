//7. Write a C++ program to print the pattern
//sample output: for n=3                  sample output: for n=4
//1*2*3                                                 1*2*3*4
//4*5*6                                                 5*6*7*8
//7*8*9                                                 9*10*11*1
#include<iostream>
using namespace std;
int main()
{
    int num,j;
    cin>>num;
    int i;
    for(i=1;i<=3*num;i=i+num)
    {
        for(j=i;j<i+num;j++)
        {
            cout<<j;
            if(j<i+num&&j+1<i+num)
            {
                cout<<"*";
            }
        }
    cout<<"\n";
    }
    return 0;
}