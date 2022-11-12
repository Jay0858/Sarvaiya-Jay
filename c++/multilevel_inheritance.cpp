#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setbase()
    {
        cout<<"enter a:";
        cin>>a;
    }
    void getbase()
    {
        cout<<"value of a is:"<<a<<endl;
    }
};
class derived : public base
{
    protected:
    int b;
    public:
    void setderived()
    {
        cout<<"enter b:";
        cin>>b;
    }
    void getderived()
    {
        cout<<"value of b is:"<<b<<endl;
    }
};
class abc : public derived
{
    protected:
    int c;
    public:
    void setabc()
    {
        cout<<"enter c :";
        cin>>c;
    }
    void getabc()
    {
        cout<<"value of c is :"<<c<<endl;    
    }
    void addition()
    {
        cout<<"total of a,b and c is :"<<a+b+c<<endl;
    }
};
int main()
{
    abc z;
    z.setbase();
    z.setderived();
    z.setabc();

    z.getbase();
    z.getderived();
    z.getabc();
    z.addition();
}