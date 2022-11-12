#include<iostream>
using namespace std;
class test
{
    public:
    test() //default
    {
        cout<<"default constructor is called..."<<endl;
    }
    test(int n)
    {
        cout<<"one parameterised constructor.one int argue is:"<<n<<endl;
    }
    test(int x,int y)
    {
        cout<<"two parameterised constructor.two argue is:"<<x<<"and"<<y<<endl;
    }
    test(char p)
    {
        cout<<"one char parameterised constructor.one char argue is:"<<p<<endl;
    }
};
int main()
{
    test a(20,50),b('A'),c(10);
}