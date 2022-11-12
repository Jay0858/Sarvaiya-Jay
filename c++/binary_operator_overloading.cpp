#include <iostream>
using namespace std;
class box
{
    int l, b, h;

public:
    void setdata(int, int, int);
    int getdata()
    {
        return l * b * h;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.b = b + n.b;
        t.h = h + n.h;
        return t;
    }
};
void box ::setdata(int len, int bre, int hei)
{
    l = len;
    b = bre;
    h = hei;
}
int main()
{
    box a, b, c;
    int volume = 0;
    a.setdata(2, 2, 2);
    volume = a.getdata();
    cout << "box a volume is :" << volume << endl;

    b.setdata(3, 3, 3);
    volume = b.getdata();
    cout << "box b volume is :" << volume << endl;

    c = a + b;
    volume = c.getdata();
    cout << "box c volume is:" << volume << endl;
}