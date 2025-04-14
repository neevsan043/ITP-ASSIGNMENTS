//7. Write a C++ program to remove all occurrences of a given
//character from a string
#include<iostream>
using namespace std;
int main(){
    string a,b;char d;
    b.clear();
    cout<<"enter a string:";
    getline(cin,a);
    cout<<"enter the character you want to remove:";
    cin>>d;
    for(char ch:a)
    { 
        if(ch!=d)
        {
            b+=ch;
        }
    }
        a.clear();
       for(char c:b)
       {
        a+=c;
       }
        cout<<"string after removal: "<<a;
        return 0;
    }
