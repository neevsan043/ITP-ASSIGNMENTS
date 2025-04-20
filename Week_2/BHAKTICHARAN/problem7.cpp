#include<iostream>
using namespace std;
void fibonacci(int c);
    int a=0, b=1;
int main()
{   int m;
    cout<<"enter no of terms you want to print:";
    cin>>m;
    fibonacci(m);
    return 0;
}
void fibonacci(int c)
{
   if(c==0)
   {
    return;
   }
   cout<<a<<" ";
   int d=a+b;
   a=b;b=d;
   fibonacci(c-1);
}