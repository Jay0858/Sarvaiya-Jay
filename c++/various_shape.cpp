#include <iostream>
using namespace std;
#define pi 3.14
class shape
{
public:
    float area;
    shape()
    {
        cout << "   VARIOUS SHAPES "  << endl;
    }
    shape(int r)
    {
        area = pi * (r * r);
        cout << "area of circle :" << area << endl;
    }
    shape(int r, int h)
    {
        area = pi * (r * r) * h;
        cout << "area of ractangle :" << area << endl;
    }
    shape(double h)
    {
        area = h * h;
        cout << "area of square :" << area << endl;
    }
    shape(double h, double b)
    {
        area = h * b / 2;
        cout << "area of triangle :" << area << endl;
    }
};
int main()
{
    shape g,a(6), b(30, 16), c(50.0), d(30.0, 60.0);
}