#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    void setbase1(int x)
    {
        a=x;
    }
    void getbase1()
    {
        cout<<"value of a is :"<<a<<endl;
    }
};
class base2
{
    protected:
    int b;
    public:
    void setbase2(int x)
    {
        b=x;
    }
    void getbase2()
    {
    cout<<"value of b is : "<<b<<endl;
    }
};
class derived : protected base2, protected base1
{
    protected:
    int c;
    public:
    void setderived(int x)
    {
        base1 :: setbase1(11);
        base2 :: setbase2(12);
        c=x;
    }
    void getderived()
    {
        base1 :: getbase1();
        base2 :: getbase2();
        cout<<"value of c is :"<<c<<endl;
        cout<<"product of a,bandc is:"<<a+b*c<<endl;
    }
};
int main()
{
    derived a;
    a.setderived(3);
    a.setderived();
}   