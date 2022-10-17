#include <iostream>

using namespace std;

int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
   int  mid=start+(end-start)/2;
  int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        //go to right 
       else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]) {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int lastocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
   int  mid=start+(end-start)/2;
  int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        //go to right 
       else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]) {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int even[5]={1,2,3,3,5};
    
   cout<<"first occurence of at on index 3"<<firstocc(even,5,3)<<endl;
    
cout<<"last occurence of at on index 3"<<lastocc(even,5,3)<<endl;
    
    return 0;
}
