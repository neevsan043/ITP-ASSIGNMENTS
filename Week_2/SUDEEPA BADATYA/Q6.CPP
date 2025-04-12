#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sumMatrix[3][3] , transpose1[3][3], transpose2[3][3], transposeSum[3][3];
    
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\ntranspose of first matrix:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            transpose1[j][i] = matrix1[i][j];  
            cout << transpose1[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\ntranspose of second matrix:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            transpose2[j][i] = matrix2[i][j]; 
            cout << transpose2[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of the transposed matrices:\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            transposeSum[i][j] = transpose1[i][j] + transpose2[i][j];
            cout << transposeSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
