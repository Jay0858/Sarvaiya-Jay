#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    student()
    {
        cout << "             @  RESULT  @" << endl;
        cout << "------------------------------------------" << endl;
    }
    void getdata()
    {
        cout << "\nEnter student roll number:";
        cin >> roll;
        cout << "\nEnter student name:";
        cin >> name;
    }
    void setdata()
    {
        cout << "The student roll number:" << roll << endl;
        cout << "The student name:" << name << endl;
    }
};
class result : public Student
{
    int Maths, Sci, English, total, per;

public:
    void marks()
    {
        getdata();
        cout << "\nEnter the Maths Marks:";
        cin >> Maths;
        cout << "\nEnter the Sci Marks:";
        cin >> Sci;
        cout << "\nEnter the English Marks:";
        cin >> English;
    }
    void details()
    {
        cout << "Maths:" << Maths << endl;
        cout << "Sci:" << Sci << endl;
        cout << "English:" << English << endl;
    }
    void calculate()
    {
        total = (Maths + Sci + English);
        cout << "Total: " << total << endl;
        per = (Maths + Sci + English) / 3;
        cout << "Total percentage:" << per << endl;
        if (per < 35 || Maths < 35 || Sci < 35 || English < 35)
        {
            cout << "Fail" << endl;
            cout << " better luck next time...." << endl;
        }
        else
        {
            if (per >= 85)
                cout << "Grade A" << endl;
            else if (per >= 60)
                cout << "Grade B" << endl;
            else if (per >= 50)
                cout << "Grade C" << endl;
            else if (per >= 35)
                cout << "Grade D" << endl;
            cout << "congrets you've done !!!!" << endl;
        }
    }
};

int main()
{
    result d;
    d.student();
    d.marks();
    d.setdata();
    d.details();
    d.calculate();
}