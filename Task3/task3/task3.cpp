#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string name;
    string bankNumber;
    double money;
public:
    BankAccount(string yourName, string accountNumber, double yourMoney)
    {
        name = yourName;
        bankNumber = accountNumber;
        money = yourMoney;
    }
    void information()
    {
        cout << "The cluent name: " << name << endl;
        cout << "Your account number: " << bankNumber << endl;
        cout << "Balance is: " << money << endl;
    }
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            money = money + amount;
            cout << "Deposit successful. New balance: " << money << endl;
        }
        else 
        {
            cout << "Invalid deposit " << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= money) 
        {
            money = money - amount;
            cout << "Withdrawal successful. New balance: " << money << endl;
        }
        else 
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
    
};

int main()
{
    string name, accNumber;
    double yourBalance, depositAmount, withdrawAmount;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    getline(cin, accNumber);

    cout << "Enter balance: ";
    cin >> yourBalance;
    BankAccount account(name, accNumber,yourBalance);

    cout << "Account Information:" << endl;
    account.information();

    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << endl;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << endl;
    cout << "Updated Account Information:" << endl;
    account.information();
}
    