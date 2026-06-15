#include <iostream>
#include <string>
using namespace std;

class bank
{
    string userNames[4];
    string passwords[4];
    int money[4] = {0, 0, 0, 0};
    int count;
    friend class transaction;

public:
    void openAccount(string userInputName, string userInputPass);
    void deleteAccount(string userDeleteName, string userDeletePass);
    void countVar(void)
    {
        count = 0;
    }
    void depositMoney(string userInputName, string userInputPass, int userInputDeposit);
    void withdrawMoney(string userInputName, string userInputPass, int userInputWithdraw);
    void checkBalance(string userInputName, string userInputPass);
};

void bank ::openAccount(string userInputName, string userInputPass)
{
    userNames[count] = userInputName;
    passwords[count] = userInputPass;
    count++;
}
void bank ::deleteAccount(string userDeleteName, string userDeletePass)
{
    bool isBreak = false;
    for (int i = 0; i < sizeof(userNames) / sizeof(userNames[0]); i++)
    {
        if (userNames[i] == userDeleteName && passwords[i] == userDeletePass)
        {
            userNames[i] = "";
            passwords[i] = "";
            money[i] = 0;
            cout << endl;
            cout << "your account '" << userDeleteName << "' is successfully deleted" << endl;
            cout << endl;
            isBreak = true;
            break;
        }
    }
    if (isBreak != true)
    {
        cout << endl;
        cout << "invalid username or password" << endl;
        cout << endl;
    }
}

void bank ::depositMoney(string userInputName, string userInputPass, int userInputDeposit)
{
    bool is_true = true;
    for (int i = 0; i < sizeof(userNames) / sizeof(userNames[0]); i++)
    {
        if (userNames[i] == userInputName && passwords[i] == userInputPass)
        {
            money[i] += userInputDeposit;
            is_true = false;
            cout << endl;
            cout << "$" << userInputDeposit << " is succesfully deposited to your account name '" << userInputName << "'" << endl;
            cout << endl;
            break;
        }
    }
    if (is_true)
    {
        cout << "invalid username or password " << endl;
    }
    // cout<<money[0]<<endl;
    // cout<<money[1]<<endl;
    // cout<<money[2]<<endl;
    // cout<<money[3]<<endl;
}

void bank ::withdrawMoney(string userInputName, string userInputPass, int userInputWithdraw)
{
    bool is_true = true;
    for (int i = 0; i < sizeof(userNames) / sizeof(userNames[0]); i++)
    {
        if (userNames[i] == userInputName && passwords[i] == userInputPass)
        {
            if (money[i] >= userInputWithdraw)
            {
                money[i] -= userInputWithdraw;
                is_true = false;
                cout << endl;
                cout << "₹ " << userInputWithdraw << " is succesfully withdrawl from your account name '" << userInputName << "'" << endl;
                cout << endl;
                break;
            }
            else
            {
                cout << endl;
                cout << "insufficient balance you can only withdraw : " << money[i] << endl;
                cout << endl;
                is_true = false;
                break;
            }
        }
    }
    if (is_true)
    {
        cout << endl;
        cout << "invalid username or password " << endl;
        cout << endl;
    }
    // cout<<money[0]<<endl;
    // cout<<money[1]<<endl;
    // cout<<money[2]<<endl;
    // cout<<money[3]<<endl;
}

void bank ::checkBalance(string userInputName, string userInputPass)
{
    bool is_true = true;
    for (int i = 0; i < sizeof(userNames) / sizeof(userNames[0]); i++)
    {
        if (userNames[i] == userInputName && passwords[i] == userInputPass)
        {
            is_true = false;
            cout << endl;
            cout << "Account name " << "'" << userInputName << "'" << "have $" << money[i] << " in it. " << endl;
            cout << endl;
            break;
        }
    }
    if (is_true)
    {
        cout << endl;
        cout << "invalid username or password " << endl;
        cout << endl;
    }
}

int main()
{

    bank user;

    string userTempName;
    string userTempPass;

    int userTempRaw;

    int TempMoney;
    user.countVar();

    while (true)
    {
        cout << endl;
        cout << "welcome to our bank system " << endl;
        cout << "1) Create Account\n 2) Delete Account\n 3) Deposit Money\n 4) Withdraw Money\n 5) Check Balance\n -1) exit\n";
        cout << endl;
        cin >> userTempRaw;
        if (userTempRaw == 1)
        {
            cout << "enter your account Name: ";
            cin >> userTempName;
            cout << "enter your password: ";
            cin >> userTempPass;
            user.openAccount(userTempName, userTempPass);
        }
        else if (userTempRaw == 2)
        {
            cout << "enter account name: ";
            cin >> userTempName;
            cout << "enter the password: ";
            cin >> userTempPass;
            user.deleteAccount(userTempName, userTempPass);
        }
        else if (userTempRaw == 3)
        {
            cout << "enter account name to transfer money: ";
            cin >> userTempName;
            cout << "enter account '" << userTempName << "' password: ";
            cin >> userTempPass;
            cout << "enter the ammount to deposit: ";
            cin >> TempMoney;
            user.depositMoney(userTempName, userTempPass, TempMoney);
        }
        else if (userTempRaw == 4)
        {
            cout << "enter account name to withdraw money: ";
            cin >> userTempName;
            cout << "enter account '" << userTempName << "' password: ";
            cin >> userTempPass;
            cout << "enter the ammount to withdraw: ";
            cin >> TempMoney;
            user.withdrawMoney(userTempName, userTempPass, TempMoney);
        }
        else if (userTempRaw == 5)
        {
            cout << "enter account name to check balance: ";
            cin >> userTempName;
            cout << "enter account '" << userTempName << "' password: ";
            cin >> userTempPass;
            user.checkBalance(userTempName, userTempPass);
        }
        else if (userTempRaw == -1)
        {
            // exit(0);
            break;
        }
        else
        {
            cout << endl;
            cout << "please enter valid inputs only" << endl;
            cout << endl;
        }
    }

    return 0;
}