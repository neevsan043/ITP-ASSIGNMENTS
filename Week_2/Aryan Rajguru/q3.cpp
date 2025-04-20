//Write a C++ program to copy the elements of one array into another array

#include<iostream>
using namespace std;

int main (){
    int arr[5]={5,9,7,2,4};

    int arr2[5];


    for (int i=0;i<5;i++){
        arr2[i]=arr[i];

    }
    cout << "Copied elements into arr2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;

}
