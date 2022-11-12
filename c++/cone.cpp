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
    volume = (1.0 / 3.0) * pi * (redius * redius) * hight;
    cout << "The volume of the cone is: " << volume;
    return 0;
}
