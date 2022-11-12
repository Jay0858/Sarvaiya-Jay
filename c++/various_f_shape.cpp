#include <iostream>
using namespace std;
#define pi 3.14
class shapes
{
public:
    float area;
    void shape()
    {
        cout << "   VARIOUS SHAPES "  << endl;
    }
    void shape(int r)
    {
        area = pi * (r * r);
        cout << "area of circle :" << area << endl;
    }
    void shape(int r, int h)
    {
        area = pi * (r * r) * h;
        cout << "area of ractangle :" << area << endl;
    }
    void shape(double h)
    {
        area = h * h;
        cout << "area of square :" << area << endl;
    }
    void shape(double h, double b)
    {
        area = h * b / 2;
        cout << "area of triangle :" << area << endl;
    }
};
int main()
{
    shapes a;
    a.shape ();
    a.shape(6);
    a.shape(30, 16);
    a.shape(50.0);
    a.shape(30.0, 60.0);
}