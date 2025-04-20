#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2, n = 5;
    rotateRight(arr, n, k);
    return 0;
}