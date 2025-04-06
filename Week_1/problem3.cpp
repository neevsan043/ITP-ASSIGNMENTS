// Write a C++ program to find the largest digit in a number
#include<iostream>
using namespace std;
int main(){
    int p,t;
    cin>>p;
    int a=0,b=0;
    while(p)
    {
       b=p%10;
       if(b>a)
       {
        a=b;
       }
       p/=10;
    }
    
       if(b>a)
    
       {
        a=b;
       }
       cout<<a;
       return 0;
    
}