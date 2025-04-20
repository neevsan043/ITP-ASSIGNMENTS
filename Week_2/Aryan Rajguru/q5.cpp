#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " distinct elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int first, second;
    
    if(arr[0] < arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second) {
            second = arr[i];
        }
    }

    cout << "Second smallest element is: " << second << endl;

    return 0;
}
