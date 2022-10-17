#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l=0;
   //int n=6;
        int temp=0;
        //int a[7]={2,3,4,5,6,7,8};
        vector<int>v1{2,3,4,5,6,7,8};
     while(l!=3)
     {
         temp=v1[0];
        for(int i=0;i<v1.size()-1;i++)
            //a[i]=a[i+1];
            v1[i]=v1[i+1];
         v1[v1.size()-1]=temp;
         l++;
         
     }
        for(int c=0;c<=v1.size()-1;c++)
            //cout<<a[c];
            cout<<v1[c]<<" ";
            return 0;
        
    }  
