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
    ~test(int n)     //distructor
    {
        cout<<"distructor is called..."<<endl;
    }
    test (int n)        //parameterised costructor.
    {
        cout<<"parameterised costructor is called...:"<<endl;
        x = n;
    }
    void getdata()
    {
        cout<<"value of x is :"<<x<<endl;
    }
};
int main()
{
    test a;
    {
    test b(50);    
    b.getdata();
    }
    a.getdata();
    s.getdata();
}