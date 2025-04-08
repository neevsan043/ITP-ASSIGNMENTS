// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n = 3 ,c=1 ,i ,j;
//     for (i = 1; i <= n; i++) {           
//         for (j = 1; j <= n; j++) {       
//             cout << c;
//             if (j < n) {
//                 cout << "*";                 
//             }
//             c++;
//         }
//         cout << endl;                         
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() 
{
    int n = 4 , c = 1 ,i ,j;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            cout << c;
            if (j < n - 1)
                cout << "*";
            c++;
        }
        cout << endl;
    }

    return 0;
}
