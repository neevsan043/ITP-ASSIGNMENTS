//8. Write a C++ program to check whether a given string is a
//palindrome. (without using any built-in reverse function
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a;int flag=0,i;
    cout<<"enter a string:";
    getline(cin,a);
    int l=a.length();
    for(i=0;i<l;i++)
    { 
       if(a[i]==a[l-i]){  
        flag=1;}}

     if(flag==1)
     {
        cout<<"the string is palindrome";
     }
     else{
        cout<<"the string is not palindrome";
     }
    
    return 0;
}
