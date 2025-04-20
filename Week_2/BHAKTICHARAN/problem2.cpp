  //2. Write a C++ program to sort a given array using function
  #include<iostream>
  using namespace std;
  void sort(int*p,int a);
  int main()
  {
      int a,i,j;
      cout<<"enter the size of the array:";
      cin>>a;
      int arr[a];
      cout<<"enter the elements: ";
      for(i=0;i<a;i++)
      {
          cin>>arr[i];
      }
      
     sort(arr,a);
     cout<<"array after sorting:\n";
     for(i=0;i<a;i++)
      {
          cout<<arr[i]<<" ";
      }
      
  
      return 0;
  }
  void sort(int*p,int a)
  {   int i,j;
      for(i=0;i<a;i++)
      {
          for(j=0;j<a-1;j++)
          {
            if(*(p+j)>*(p+j+1))
            {
              int a=*(p+j);
              *(p+j)=*(p+j+1);
              *(p+j+1)=a;
            }
          }
      }
      return ;
  }