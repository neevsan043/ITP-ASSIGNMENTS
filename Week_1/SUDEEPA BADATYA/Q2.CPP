#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter 3 sides of the triangle ";
    cin>>a >> b >> c;
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        cout << "triangle can be formed." << endl;
        if (a == b && b == c) 
        {
            cout << " equilateral triangle." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << " isosceles triangle." << endl;
        }
        else 
        {
            cout << " scalene triangle." << endl;
        }
    } 
    else {
        cout << "triangle cant be formed ." << endl;
    }

    return 0;
}
