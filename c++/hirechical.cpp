#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setbase()
    {
        cout<<"enter a :";
        cin>>a;
    }
    void getbase()
    {
        cout<<"value of a is :"<<a<<endl;
    }
};
class derived : public base 
{
    protected:
    int b;
    public:
    void setderived()
    {
        cout<<"enter b :";
        cin>>b;
    }
    void getderived()
    {
        cout<<"value of b is :"<<b<<endl;
    }
};
class abc : public base
{
    protected:
    int c;
    public:
    void setabc()
    {
        base :: setbase();
        cout<<"enter c :";
        cin >> c;
    }
    void abc()
    {
        
    }
}