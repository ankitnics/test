#include<iostream>
using namespace std;
class parent
{
    public:
    void fun()
    {
    cout<<"this is a parent class";
    }
};
class child:public parent
{
    public:
    void funs()
    {
    cout<<"this is a child class";
    }
};
int main()
{
    parent p;
    child c;
    p.fun();
    cout<<endl;
    c.funs();
    cout<<endl;
    c.fun();
    return 0;
}
