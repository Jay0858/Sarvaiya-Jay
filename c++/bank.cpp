#include <iostream>
using namespace std;
class bank
{
        float balance=10000;

public:
       void deposite(int d)
       {
        balance = balance + d;
       }
       void withdraw(int w)
       {
        int amt;
        if(balance < amt)
        {
                cout<<"insufficient balance";
        }
        else
        {
                balance = balance - w;              
        }
       }
       void showbal()
       {
        cout<<"Your balance is : "<<balance;
       }
};

int main()
{
       bank kotak;
       int ch,amt;
        int choice;
        while (ch != 0)
       {  
        cout << "\n----- BANKING -----  " << endl;
        cout << "1 : Deposite  " << endl;
        cout << "2 : Withdraw  " << endl;
        cout << "3 : Show Balance   " << endl;
        cout << "4 : Exit  " << endl;
        cout << "Enter Your choice :   ";
        cin>>ch;
        
        switch (ch)
        {
         
                case 1:
                        cout << "Enter deposit : ";
                        cin >> amt;
                        kotak.deposite(amt);
                        break;
                case 2:
                        cout << "Enter Withdraw : ";
                        cin >> amt;
                        kotak.withdraw(amt);
                        break;
                case 3:
                        kotak.showbal();
                        break;
                case 4:
                        cout<<"have a nice day !"<<endl;
                        return 0;
                        break;

                default:
                        cout << "Invalid input :" << endl;
                }
        
        } 
       
        return 0;
}
