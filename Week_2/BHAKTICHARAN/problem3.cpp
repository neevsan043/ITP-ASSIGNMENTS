//3. Write a C++ program to copy the elements of one array into another
//array.
#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter the size of the first array";
    cin>>a;
    cout<<"enter the size of the second array";
    cin>>b;
    if(b<a){
        cout<<"array can not copied to second array.please enter a required size of arry2";
    }
    else{
    int arr1[a],arr2[b];
    cout<<"enter the elements of the array:";
    for(i=0;i<a;i++)
    {
        cin>>arr1[i];

    }
    for(i=0;i<a;i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<"array2 elements are:\n";
    for(i=0;i<a;i++)
    {
        cout<<arr2[i];
    }
}

}