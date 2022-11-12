#include<iostream>
using namespace std;
class calc
{
    public:
    int a,b;
    void setdata()
    {
       cout<<"Enter a:";
       cin>>a;
       cout<<"Enter b:";
       cin>>b;
    }
  void Add()
  {
    int c = a + b;
    cout<<"Sum is :"<<c<<endl;
  }
  void sub()
  {
    int c = a - b;
    cout<<"sub is :"<<c<<endl;
  }
  void mul()
  {
    int c = a * b;
    cout<<"mul is :"<<c<<endl;
  }
  void div()
  {
    int c = a / b;
    cout<<"div is :"<<c<<endl;
  }
   void getdata()
    {
       cout << "value of a :" <<a<< endl;
       cout << "value of b :" <<b<< endl; 
    }
};
int main()
{
    calc x;
    x.setdata();
    x.getdata();
    x.Add();
    x.sub();
    x.mul();
    x.div();
    return 0;
}