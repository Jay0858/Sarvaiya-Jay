#include <iostream>
using namespace std;

class circle
{
    int r;

public:

    void setdata(int);
    double getdata()
    {
        return (r * r) * 3.14;
    }
    circle operator*(circle &n)
    {
        circle t;
        t.r = r * n.r;
        return t;
    }
};
void circle :: setdata(int radious)
{
    r = radious;
}
int main()
{
    circle a, b, c;
    double volume = 0;
    a.setdata(2);
    volume = a.getdata();
    cout << "circle a volume is :" << volume << endl;

    b.setdata(3);
    volume = b.getdata();
    cout << "circle b volume is :" << volume << endl;

    c = a * b;
    volume = c.getdata();
    cout << "circle c volume is:" << volume << endl;
}