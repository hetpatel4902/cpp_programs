#include<iostream>
#include<stdio.h>
#include<conio.h>


using namespace std;
class Account {
public:
    char name[20];
    char account_type[20];
    int account_number;
    int balance;
void initialize()  {
        cout << "Enter Depositer Name : "  << endl;
        gets(name);
        cout << "Enter Type Of Account : "   << endl;
        gets(account_type);
        cout << "Enter Account Number : "  << endl;
        cin >> account_number ;
        cout << "Enter Balance Amount In The Account : "  ;
        cin >> balance ;
    }
    void Deposit();
    void Withdraw();
    void Display();
};
void Account::Deposit() {
    int diposit;
    cout << "Enter Deposit Amount = ";
    cin >> diposit;
    balance+=diposit;
}
void Account::Withdraw() {
    int withdraw;
    cout << "Enter Withdraw Amount = ";
    cin >> withdraw;
    balance-=withdraw;
}
void Account ::Display() {
    cout << "-----------------------------------------------------" << endl;
    cout << "Net Balance = " << balance;
}
int main() {
    Account b1;
    b1.initialize();
    Account d1;
    d1.Deposit();
    Account w1;
    w1.Withdraw();
    Account d2;
    d2.Display();
    return 0;
}

