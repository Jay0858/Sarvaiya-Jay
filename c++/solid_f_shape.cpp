#include <iostream>
using namespace std;
#define pi 3.14
class solids
{
public:
    float volume;
    solid()//a
    {
        cout << "   SOLID SHAPES " << endl;
    }
    solid(double a)//b
    {
        volume = (a * a * a);
        cout << "volume of cube :" << volume << endl;
    }
    solid(int r)//c
    {
        volume = (4  * pi * r * r * r)/3;
        cout << "volume of sphere :" << volume << endl;
    }
    solid(int r, int h)//d
    {
        volume = pi * (r * r) * h/3;
        cout << "volume of cone :" << volume << endl;
    }
    solid(double l, double h, double w)//e
    {
        volume = (l * h * w)/3;
        cout << "volume of pyramid :" << volume << endl;
    }
};
int main()
{
    solids a;
    a.solid();
    a.solid(50.0);
    a.solid(40);
    a.solid(40, 30);
    a.solid(40.0, 20.0, 30.0);
}