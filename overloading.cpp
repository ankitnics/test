#include <iostrem>
using namespace std;
class complex
{
    int x,y;
    void set_data(int a,int b)
    {
        x=a;y=b;
    }
    void show_data()
    {
    cout<<x<<y;
    }
    complex operator -(complex c)
    {
       complex temp;
       temp.a=a-c.a;
       temp.b=b-c.b;
       return(temp);
    }
};
    int main()
    {
    complex c1,c2,c3;
    c1.set_data(5,6);
    c2.set_data(4,5);
    c3=c1-c2;
    c3.show_data();
    return 0;
    }
