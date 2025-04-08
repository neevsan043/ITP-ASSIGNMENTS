//. Write a C++ program to find maximum occurring integer in an array.
#include<iostream>
    using namespace std;
    int main()
    { int a,i,j;
        cout<<"enter the size of the array: ";
        cin>>a;
        int arr[a],visited[a],fr[a],max=0;
        cout<<"enter the elements:";
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<a;i++)
        {
            visited[i]=0;
        }
        for(i=0;i<a;i++)
        {
            fr[i]=0;
        }
        for(i=0;i<a;i++)
        {
            if(visited[i]==0)
            {
                for(j=i;j<a;j++)
                {
                   if(arr[i]==arr[j])
                   {
                    visited[j]++;
                    fr[i]++;
                   }
                }
            }
        }
        for(i=0;i<a;i++)
        {
            if(max<fr[i])
            {
                max=fr[i];
            }
        }
        cout<<"maximum occuring element is:";
        for(i=0;i<a;i++)
        {
            if(fr[i]==max){
                cout<<arr[i];
            }        
         }
         cout<<"\ncorresponding frequencies:";
         for(i=0;i<a;i++)
        {
            cout<<fr[i];      
         }



return 0;

   
    }