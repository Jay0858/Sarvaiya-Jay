#include <iostream>
using namespace std;
int main()
{
    int arr1[100], arr2[100], merge[100], i = 0;

    cout << "input 1st array" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    cout << "input 2nd array" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }
    for (i = 0; i < 5; i++)
    {
        merge[i] = arr1[i];
        merge[i + 5] = arr2[i];
    }
    for (i = 0; i < 10; i++)
    {
        cout << "merged array is" << merge[i] << endl;
    }
    return 0;
}
