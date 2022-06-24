#include<iostream>
#include<conio.h>

using namespace std;

class Bank
{
 char name[30];
 char Accname[20];
 char type[20];
 int ibalance;
 int dop;
 int with;
 public:
     void menu(void);
     void get(void);
     void deposit(void);
     void withdraw(void);
     void info(void);

};
void Bank::menu()
{
    int me;
    cout << "\t\nChoose your option from 1-to-6\n";
    cout << "\t1.create Account\n";
    cout << "\t2.Deposit Your Money\n";
    cout << "\t3.Check Your Balance\n";
    cout << "\t4.Withdraw Amount\n";
    cout << "\t5.Your Account's All Info\n";
    cout << "\t6.Exit";
    cout << "\n\t\t";
    cin >> me;
    switch(me)
    {
        case 1:
            get();
        case 2:
            deposit();
            break;

        case 3:
            check();
            break;


        case 4:
            withdraw();
            break;




        case 5:
            info();
            break;


        case 6:
          exit();
            break;

}
}
void  Bank::get()
{
    int go;
    cout << "\n\t\tEnter Name:";
    cin >> name;
    cout << "\t\tEnter Account Name:";
    cin >> Accname;
    cout << "\n";
    cout << "\t\tEnter the Type of Account:";
    cin >> type;
    cout << "\n";
    cout << "\t\tHow Much Money Do You Want To Deposit:";
    cout << "\n\t\t";
    cin >> ibalance;

    cout << "\t\tHit \'0\ for GoTo MainMenu:";
    cout << "\n";
    cin >>go;
    if(go==0)
    {
        menu();
    }

}
void Bank::deposit()
{
    int go;
    cout << "\n\t\tHow Much Do You Want To Deposit?";
    cout << "\t\t";
    cin >> dop;
    dop+=ibalance;
    cout << "\n\t\tHit \'0\' for GoTo MainMenu:";
    cout << "\n";
    cin >>go;
    if(go==0)
    {
        menu();
    }
}

void Bank::check()
{
    cout << "Your Current Balance:"<< dop<<"\n";
}
int main()
{
    Bank obj;
    obj.menu();
    getch();
    return 0;
}
