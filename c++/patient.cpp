#include <iostream>
using namespace std;
class doctor
{
    char name[200];
    char degree[200];

public:
    void getdatad()
    {
        cout << "Enter the Doctor Name : ";
        cin >> name;
        cout << "Enter Doctorate Degree : ";
        cin >> degree;
    }
    void showdatad()
    {
        cout << "\nDoctor Name : " << name;
        cout << "\nDoctor's Degree : " << degree;
    }
};
class patient
{
    char name[200];
    char number[200];

public:
    void getdatap()
    {
        cout << "\nEnter Patient Name : ";
        cin >> name;
        cout << "\nEnter Bed Number : ";
        cin >> number;
    }
    void showdatap()
    {
        cout << "\nPatient Name : " << name;
        cout << "\nBed Number : " << number;
    }
};
class amount
{
    int dues;
    patient patient;
    doctor doc;

public:
    void getdataa()
    {
        patient.getdatap();
        doc.getdatad();
        cout << "Enter Dues of Patient : ";
        cin >> dues;
    }
    void showdataa()
    {
        patient.showdatap();
        doc.showdatad();
        cout << "\nTotal Dues of Patient : " << dues;
    }
};
int main()
{
    amount a1;

    cout << "\nEnter Data ";
    a1.getdataa();
    cout << "\nInserted Data is : \n";
    a1.showdataa();
    return 0;
}