// 6. Write a C++ program that takes two 2D arrays (matrices) of size
//  3×3 as input from the user. First, the program should calculate and
//  print the sum of the two original matrices. After that, it should compute
//  the transpose of both the original matrices. Finally, the program
//  should calculate and display the sum of the two transposed matrices
//  as well
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j,sum[3][3],c[3][3],d[3][3],sum2[3][3];
    cout<<"enter the elements of first matrices:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of secondmatrices:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"\nmatrix1 is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nmatrix2 is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"sum of matrix  is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=a[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        d[i][j]=b[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum2[i][j]=c[i][j]+d[i][j];
        }
    }
    cout<<"\ntranspose of matrix1 is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n transpose of matrix2 is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nsum of their transpose is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<sum2[i][j]<<" ";
        }
        cout<<"\n";
    }


    
return 0;
}