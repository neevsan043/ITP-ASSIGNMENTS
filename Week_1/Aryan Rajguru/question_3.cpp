#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int a,b=0,c=0,d,max=0;
   cout<<"enter the number"<<endl;
   cin>>a;
   d = a;
   while(d!=0){
    d = d/10;
    b = b+1;
   }

   for(int i = 0; i < b; i++){
    c = a%10;
    a = a/10;
    if(c>max){
        max = c;
    }
   }
   cout<<"the largest digit in the number is: "<<max<<endl;
}