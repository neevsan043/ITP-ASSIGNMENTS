//6. Write a C++ program to convert a string to lowercase without
//using inbuilt functions
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string a,b;
    b.clear();
    cout<<"enter a string:";
    getline(cin,a);
    for(char ch:a)
    { 
        if(isalpha(ch))
        {
            ch=ch+32;
        }
        b+=ch;
    }
        a.clear();
       for(char c:b)
       {
        a+=c;
       }
        cout<<a;
        return 0;
    }
