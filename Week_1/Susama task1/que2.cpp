// Write a C++ program to input 3 sides of triangle and a triangle can be drawn
// from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
// scalene triangle
#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout <<"a=";
cin >>a;
cout <<"b=";
cin >>b;
cout <<"c=";
cin >>c;
cout <<"You entered"<<" "<< a <<" "<< b <<" "<< c <<" "<<endl;

if(a+b>c && b+c>a && c+a>b){
cout <<"Triangle is Possible"<<endl;
    if(a==b && b==c && c==a){
        cout <<"Its an equilateral triangle";
    } 
    else if(a==b || b==c || c==a ){
        cout << "Its an isosceles triangle";
        
    }
    else{
        cout <<"Its a scalene triangle"; 
    }
    
}
else {
    cout <<"Not Possible";
}
return 0;
}