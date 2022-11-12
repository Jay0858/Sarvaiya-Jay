#include <iostream>
using namespace std;
class result
{
    int m, s, e, total, per;

public:
    result()
    {
        cout << "maths: ";
        cin >> m;
        cout << "science: ";
        cin >> s;
        cout << "english: ";
        cin >> e;
        total = (float)(m + s + e);
        per = total / 3;
    }
    void getdata()
    {
        cout << "total :" << total << endl;
        cout << "per :" << per << endl;
    }
};
int main()
{
    result a;
    a.getdata();
}
