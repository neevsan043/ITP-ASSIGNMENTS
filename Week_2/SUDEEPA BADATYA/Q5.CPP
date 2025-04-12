#include <iostream>
using namespace std;

int main() {
 
    int arr[5] = {3 ,5,6, 8 ,9 }, smallest = arr[0]  ,  secondSmallest = arr[1],temp;

    if (secondSmallest < smallest) 
    {
        temp = smallest;
        smallest = secondSmallest;
        secondSmallest = temp;
    }


    for (int i = 2; i < 5; i++) 
    {
        if (arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest) 
        {
            secondSmallest = arr[i];
        }
    }

    cout << "second smallest element is: " << secondSmallest << endl;

    return 0;
}
