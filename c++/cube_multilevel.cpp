//Multilevel inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		int n;
};
// class B:public A
// {
// 	public:
// 		int i;
// };
class C:public A
{
	public:
	int cube()
		{
			cout<<"enter the number :"<<endl;
			cin>>n;
			
				cout<<" cube of "<<n<<" is "<<"="<<(n*n*n)<<endl;
			
		}
};
int main()
{
	C object;
	object.cube();
}