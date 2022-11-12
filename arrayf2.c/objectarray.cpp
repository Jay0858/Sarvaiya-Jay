#include <iostream>
using namespace std;
class student
{
    int m, s, e;
    float total, percentage;

public:
    void setdata()
    {
        cout << "enter maths marks: ";
        cin >> m;
        cout << "enter science marks: ";
        cin >> s;
        cout << "enter english marks: ";
        cin >> e;
    }
    void calc()
    {
        total = (float)(m + s + e);
        percentage = total / 3;
    }
    void getdata()
    {
        calc();
        cout << "maths :" << m << endl;
        cout << "science :" << s << endl;
        cout << "english :" << e << endl;
        cout << "total :" << total << endl;
        cout << "percentage :" << percentage << endl;
    }
};
int main()
{
    student s[5];
    int i;
    for (i = 0; i < 2; i++)
    {
        cout << "enter student data :" << i + 1 << endl;
        s[i].setdata();
        cout << endl;
    }
    for (i = 0; i < 2; i++)
    {
        cout << "result of student  :" << i + 1 << endl;
        s[i].getdata();
        cout << endl;
    }
}
