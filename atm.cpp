#include <iostream>
using namespace std;

class ATM
{
private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long totel = 0;

public:
    void setvalue()
    {
        cout << "Please Enter name of account Holder";
        cin.ignore();
        getline(cin, name);

        cout << " Please Enter a Account Number";
        cin >> accnumber;

        cout << "Please Enter a Type of Account";
        cin >> type;

        cout << "Please Enter Balance";
        cin >> totel;
    };

    void showdata()
    {

        cout << "Account Holder Name " << name << endl;
        cout << " Account No" << accnumber << endl;
        cout << " Account type" << type << endl;
        cout << " Balance" << totel << endl;
    };
    void deposit()
    {

        cout << "Enter amount to be Deposited " << endl;
        cin >> amount;
    }
    showbal()
    {

        totel = totel + amount;
        cout << "Yours Balance" << totel << endl;
    };
    withdraw()
    {

        int a, avai_balance;
        cout << " Plaese Enter Amount of withdraw";
        cin >> a;
        avai_balance = totel - a;
        cout << "Available Balance is " << avai_balance << endl;
    };
};
int main()
{
    ATM b;

    int choise;
    while (1)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choise;
        /* code */
        switch (choise)
        {
        case 1:
            b.setvalue();

            break;
        case 2:

            b.showdata();
            break;
        case 3:
            b.deposit();

            break;
        case 4:
            b.showbal();

            break;
        case 5:
            b.withdraw();

            break;
        case 6:
            exit(1);

            break;
        default:
            cout << " Invalid Choice";
        }
    }
}