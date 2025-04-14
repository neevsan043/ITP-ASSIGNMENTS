//2. Write a C++ program to find the total number of alphabets,
// digits and special characters in a string
#include<iostream>
#include<cctype>
using namespace std;
int main()
{   int n,i,alpha=0,dig=0,sp=0;
    cout<<"enter the size of the string";
    cin>>n;
    string a;
    cout<<"enter the elements";
    cin.ignore();
    getline(cin,a);
    for(char ch:a)
    {
        if(isalpha(ch))
        {
            alpha++;
        }
        else if(isdigit(ch))
    {
        dig++;
    }
    else{
        sp++;
    }
    }
cout<<"the no of alphabets: "<<alpha;
cout<<"\nthe no of digits:"<<dig;
cout<<"\nthe no ofspecial characters "<<sp;
return 0;
}