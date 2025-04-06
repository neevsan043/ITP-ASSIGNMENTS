// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n = 3;
//     for (int i = 1; i <= n; i++) 
//     {           
//         for (int j = 1; j <= n; j++) 
//         {       
//             for (int k = 1; k <= i; k++) 
//             {   
//                 cout << j;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() 
{
    int n = 2, i  ,j ,k;

    for (i = 1; i <= n; i++) 
    {           
        for (j = 1; j <= n; j++) 
        {       
            for (k = 1; k <= i; k++) 
            {    
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}


