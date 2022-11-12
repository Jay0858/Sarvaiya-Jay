#include<iostream>
using namespace std;
class car
{
    int a;          //data member privte

public:
    int b;
    void setdata(int n)     //function
    {
        a=n;
    }
    void setb(int n)
    {
        b=n;
    }
    void getdata()
    {
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
    }
};
int main()
{
    car x;      //object
    //x.a=10;
    x.setdata(5);
    x.setb(10);
    x.getdata();
    return 0;
}
