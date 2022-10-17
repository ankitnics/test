#include <iostream>
using namespace std;
int main()
{
     int i,position,n,a[],element;
     cout<<"enter the element and its position no. where you want to insert an element";
     cin>>element>>position;
     cout<<"enter the total no elements you print";
     cin>>n;
     cout<<"enter the elements";
     for(i=0;i<n;i++)
     {
     cin>>a[i];
     }
     cout<<a[i];
    for(i=0;i<n+1;i++)
    {
    a[position-1]=a[position-2];
    }
    a[position-1]=element;
       return 0;
}
