#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<< "enter the three sides of the triangle: "<<endl;
    cin>>a>>b>>c;
    if(a+b<c || a+c<b || c+b<a){
        cout<< "a triangle can be drawn from it or not"<<endl;
    }
    else if(a==b && b==c){
        cout<<"equilateral trainnale"<<endl;
    }
    else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a)){
        cout<<"isoceles triangle"<<endl;
    }
    else if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
        cout<<"right angled trianle"<<endl;
    }
    else{
        cout<<"scalene triangle"<<endl;
    }
   return 0;
}