#include<iostream>
using namespace std;
int main()
{
   int a , b , dec , bi=0 , oct=0 ,p1=1 , p2=1 ,rem ;
    cout<<"enter a decimal no=";
    cin>>dec;
    a=dec;
    while (a > 0) 
    {
        rem = a % 2;
        bi = bi + rem * p1;
        p1 = p1 * 10;
        a = a / 2;
    }
    b=dec;
    while (b > 0) 
    {
        rem = b % 8;
        oct = oct + rem * p2;
        p2 = p2 * 10;
        b = b / 8;
    }
    cout << "binary= " << bi << endl;
    cout << "octal= " << oct << endl;

    return 0;
}