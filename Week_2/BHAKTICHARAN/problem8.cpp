// 8. Find the sum of digits of a number using recursion
#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int a,d;
    cout<<"enter a digit: ";
    cin>>a;
   d= sum(a,0);
   cout<<"the sum of the digits is: "<<d;
    return 0;
}
int sum(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    b=b+a%10;
    a=a/10;
    sum(a,b);

}