//3. Write a C++ program to remove all characters except alphabets
//in a string.
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string a,b;
    cout<<"enter a string:";
    getline(cin,a);
    for(char ch:a)
    { 
        if(isalpha(ch))
        {
            b+=ch;
        }

    }
    a=b;
        cout<<"\n the string with only alphabets:"<<a;
        return 0;
}