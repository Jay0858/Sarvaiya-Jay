#include <iostream>
using namespace std;
class result
{
	int m,s,e,total;
	double per;
	public:
	void setdata()
	{
		cout<<"Enter Mark Of Math's:"<<endl;
		cin>>m;
		cout<<"Enter Mark's Of Science:"<<endl;
		cin>>s;
		cout<<"Enter Mark's Of English:"<<endl;
		cin>>e;
	}
	void getdata()
	{
		total=m+s+e;
		cout<<"Total Mark's is="<<total;
		per=total/3;
		cout<<"Percentage is:"<<per;
	}
};

int main()
{
	result a;
	a.setdata();
	a.getdata();
	return 0;
}