#include <iostream>
#include <string>
using namespace std;
int main()
{
    const float pi = 3.14159;
    float redius, hight, volume;
    cout << "Input radius: ";
    cin >> redius;
    cout << "Input height: ";
    cin >> hight;
    // volume.
    volume = pi * (redius * redius) * hight;
    cout << "The volume of the cylinder is: " << volume;
    return 0;
}
