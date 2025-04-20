// Write a C++ program to find maximum occurring integer in an array

#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,7,9,10,27};

    int max = arr[0]; 

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum value in the array is: " << max << endl;

    return 0;
}