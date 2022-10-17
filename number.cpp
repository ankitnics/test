#include<iostream>
using namespace std;
int main()
// {    cout<<"array"<<endl;
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
    
//     int left=0, right=n-1;
//     while (left<right)
//     {
//         while(arr[left]%2==0  && left<right)
//         { left++;
//         }
//         while( arr[right]%2!=0  && left<right)
//         {  right--;
//         }
//         int temp;
//              temp=arr[right];
//              arr[right]=arr[left];
//              arr[left]=temp;
//              left++;
//              right--;
            
             
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
// }
{    cout<<"array"<<endl;
    int arr[]={1,1,2,0,1,0,1,2};
    int n=8;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    int left=0, right=n-1;
    while (left<right)
    {
        while(arr[left]==0  && left<right)
        { left++;
        }
        while( arr[right]==2  && left<right)
        {  right--;
        }
        // int temp;
        //      temp=arr[right];
        //      arr[right]=arr[left];
        //      arr[left]=temp;
        if (arr[left]==arr[right])
        {
            swap(arr[left],arr[left+1]);
            swap(arr[right],arr[right-1]);
        }
        
        swap(arr[right],arr[left]);
             left++;
             right--;
            
             
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
