#include<iostream>
using namespace std;

int main()
{
    int a ,ld=0,no;
    cout<<"enter a number=";
    cin>>a;
    while(a>0)
    {
        no=a%10;
        if(no>ld)
        {
            ld=no;
        }
        a/=10;
    }
    
    cout<<"largestdigit="<<ld<<endl;
    return 0;
}
