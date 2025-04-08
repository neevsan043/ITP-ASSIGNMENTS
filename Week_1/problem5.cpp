// Write a C++ program to check if a Number is Perfect square using loops.
#include<iostream>
using namespace std;
int main()
{
    int i,a,j=0;
    cin>>a;
    if(a>0){
    for(i=0;i<a/4;i++)
    {
        if(a==i*i)
        {
cout<<"it is a perfect square of "<<i;
j=1;
       break;
        }
    }}
    else{
        cout<<"it is not a perfect square as it is a negative number"<<endl;
        j=2;
    }
    if(j==0)
    {
        cout<<"it is not a perfect square"<<endl;
    }
    return 0;
}