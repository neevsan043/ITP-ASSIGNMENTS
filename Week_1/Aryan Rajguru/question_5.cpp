#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int a,b=0,c;
   cout<<"enter the nunmber"<<endl;
   cin>>a;
   for(int i=0;i<a;i++){
    if(i*i == a){
        cout<<"perfect square"<<endl;
        b = 1;
        break;
    }
    else{
        b=0;
    }
   }
   if(b==0){
    cout<<"not a perfect square";
   }
    return 0;
}