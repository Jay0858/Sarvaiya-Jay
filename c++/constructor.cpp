/*
costructor => class name and function name are same.
           => automatically called by itself when object is create.
           => no return type and no return value.
           => always in public section.
*/
#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test()      //default costructor
    {
        cout<<"default constructer is called..."<<endl;
        x = 2;
    }
    test(int n)     //parameterised costructor
    {
        cout<<"parameterised constructor is called..."<<endl;
        x = n;
    }
    void getdata()
    {
        cout<<"value of x is:"<<x<<endl;
    }
};
int main()
{
    test s(50),a;
    a.getdata();
    s.getdata();
}