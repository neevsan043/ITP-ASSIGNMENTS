// //Write a C++ program that takes two 2D arrays (matrices) of size
//  3×3 as input from the user. First, the program should calculate and
//  print the sum of the two original matrices. After that, it should compute
//  the transpose of both the original matrices. Finally, the program
//  should calculate and display the sum of the two transposed matrices
//  as well

#include<iostream>
using namespace std;

const int SIZE = 3;

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int sum[SIZE][SIZE], transpose1[SIZE][SIZE], transpose2[SIZE][SIZE], sumTranspose[SIZE][SIZE];

    
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> mat1[i][j];
        }
    }

    
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> mat2[i][j];
        }
    }

    
    cout << "\nSum of the original matrices:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            transpose1[j][i] = mat1[i][j];
            transpose2[j][i] = mat2[i][j];
        }
    }

    cout << "\nTranspose of first matrix:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << transpose1[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\nTranspose of second matrix:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << transpose2[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "\nSum of the transposed matrices:\n";
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            sumTranspose[i][j] = transpose1[i][j] + transpose2[i][j];
            cout << sumTranspose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
