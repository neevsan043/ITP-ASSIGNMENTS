//Two array as input and merge them and print in rev order 

#include<iostream>
using namespace std;

int main(){
    int n1 , n2;

    cout<<"Enter the seize of 1st array:";
    cin>>n1;

    int arr1[n1];

    cout<<"Enter the size of array2: ";
    cin>>n2;

    int arr2[n2];
    
    cout<<"Enter the elements of first array:";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];

    }
    cout<<"Enter the elements of 2nd array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int mer[n1+n2];

    for(int i=0;i<n1;i++){
         mer[i]= arr1[i];
    }

    for (int i=0;i<n2;i++){
         mer[n1+i]=arr2[i];
    }

    for(int i=n1+n2-1;i>=0;i--){
        cout<<mer[i]<<" ";

    }
    return 0;






}