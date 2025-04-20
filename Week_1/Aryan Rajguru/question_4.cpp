#include<iostream>
using namespace std;

int main(){
    int a,b=0,c,d,e=0,f,g;
    cin>>a;
    d = a;
    g = a;
    while(d!=0){
        f = d%2;
        d = d/2;
        e+=1;
    }
    int arr1[e];
    e = 0;
    while(a!=0){
        c = a%2;
        arr1[e] = c;
        a = a/2;
        e+=1;
        // cout<<e;
        // cout<<c;
    }
    cout<<endl;
    cout<<"binary: "<<endl;
    for(int i = e-1; i>=0; i--){
        cout<<arr1[i];
    }

    //octal::
    b=0,c=0,d=0,e=0,f=0;
    d = g;
    while(d!=0){
        f = d%8;
        d = d/8;
        e+=1;
    }
    int arr2[e];
    e = 0;
    while(g!=0){
        c = g%8;
        arr2[e] = c;
        g = g/8;
        e+=1;
        // cout<<e;
        // cout<<c;
    }
    cout<<endl;
    cout<<"octal: "<<endl;
    for(int i = e-1; i>=0; i--){
        cout<<arr2[i];
    }

    return 0;
}