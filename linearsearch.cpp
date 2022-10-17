#include<iostream>
using namespace std;
int main()
{   int arr[]={2,3,4,2,3,4,1};
      int n=7;
  for (int i = 0; i < n; i++)
  {
    for (int j= i+1; j < n; j++)
    {  cout<<"2nd loop"<<" @";
      if (arr[i]==arr[j])
      {
        continue;
        cout<<"*";
      }
      
      else if(j==n-1)
      cout<<arr[i]<<"arr ";
    }
    
  }
   
}
