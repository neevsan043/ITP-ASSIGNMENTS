//Write a C++ program to input 3 sides of triangle and a triangle can be drawn
//from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
//scalene triangle
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the side1"<<endl;
    cin>>a;
    cout<<"enter the side2"<<endl;
    cin>>b;
    cout<<"enter the side3"<<endl;
    cin>>c;
    if(a+b>c&&b+c>a&&a+c>b){
        if((a*a+b*b==c*c)|(a*a+c*c==b*b)|(b*b+c*c==a*a))
    {
        cout<<"right angled"<<endl;
    }
    if(a==b&&b==c){
        cout<<"equilateral"<<endl;
    }
    if((a==b|b==c|c==a)^(a==b&&b==c)){
        cout<<"isoscales"<<endl;
    }
    if(a!=b&&b!=c&&c!=a)
    {
        cout<<"scalene"<<endl;
    }

    }
    else{
        cout<<"these are not the sides of triangle"<<endl;
    }


    return 0;
}