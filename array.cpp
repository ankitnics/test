#include<iostream>
using namespace std;
int binarysearch(int a[],int n)
{   
   
    int  start=0,end=n-1;
    int i=0;
    int mid= start + (end-start)/2;
    while(start<=end)
    { 
        if (a[mid]<a[mid+1])
        {
            start=mid+1;
        }
        else if (a[mid]<a[mid-1] && mid!=0)
        {
            end=mid-1;
        }
        else return mid;

         mid= start + (end-start)/2;
    }
    
    return -1;
    
}
int main()
{  
  int a[]={1,7,8,9,0} ;
  
    int c =binarysearch(a,5);
    cout<<c;
}
