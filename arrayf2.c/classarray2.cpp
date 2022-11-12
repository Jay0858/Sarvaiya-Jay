// make bill using structure by passsing array
#include <iostream>
using namespace std;
class bill
{
    int rate, qty, amt, bill_amt, net_bill, dis, gst;
    char product[50];

public:
    void setdata()
    {
        cout<<"enter product name";
        cin>>
        cout << "enter quantity: ";
        cin >> qty;
        cout << "enter rate: ";
        cin >> rate;
    }
    void calc()
    {
        amt = rate * qty;
        dis = (amt * 5) / 100;
        bill_amt = amt - dis;
        gst = (bill_amt * 18) / 100;
        net_bill = bill_amt + gst;
    }
    void getdata()
    {
        calc();
        cout<<"amt :" <<amt<<endl;
        cout<<"dis:" <<dis<<endl;
        cout<<"bill_amt :" <<bill_amt<<endl;
        cout<<"gst :" <<gst<<endl;
        cout<<"net_bill :" <<net_bill<<endl;
    }
};
int main()
{
    bill b[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"enter product details :"<<i+1<<endl;
        b[i].setdata();
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        cout<<"product details :"<<i+1<<endl;
        b[i].getdata();
        cout<<endl;
    }
}
 