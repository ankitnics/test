#include<iostream>
using namespace std;
int main()
{   
    int n, i=0;
    cin>>n;
    while (n%2==0)
    {
        n=n/2;
        i++;
        
    } cout<<i;
    if (i%2!=0 || i==0)
    {
        cout<<"no";
    }
    else cout<<"yes";
    
    
    return 0;
}
