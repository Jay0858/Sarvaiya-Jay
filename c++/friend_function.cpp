#include <iostream>
using namespace std;
class test
{
    int l, b;
    friend test add(test, test, test);

public:
    void setdata(int len, int bre)
    {
        l = len;
        b = bre;
    }
    int getdata()
    {
        return l * b;
    }
};
test add(test p, test q, test r)
{
    test t;
    t.l = p.l + q.l + r.l;
    t.b = p.b + q.b + r.b;
    return t;
}
int main()
{
    int a, b, c, d;
    int volume = 0;
    a.setdata(2, 2);
    volume = a.getdata();
    cout << "a volume is:" << volume << endl;

    b.setdata(3, 3);
    volume = b.getdata();
    cout << "b volume is:" << volume << endl;

    c.setdata(4, 4);
    volume = c.getdata();
    cout << "c volume is:" << volume << endl;
    
    d = add(a, b, c);
    volume = d.getdata();
    cout << "d volume is :" << volume << endl;
}
