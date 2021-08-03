#include <iostream>
#include <cstring>
using namespace std;

class sample
{
    float credit;
    float balance;
    float withdraw;
    char *p;

public:
    sample(char *s, float a, float b) : credit(a), balance(a - b), withdraw(b)
    {
        p = new char[strlen(s)];
        strcpy(p, s);
    }
    ~sample()
    {
        delete[] p;
    }
    void Display()
    {
        cout.width(20);
        cout.fill('.');
        cout.setf(ios::left, ios::adjustfield);
        cout << p << endl;

        cout << "Credit:";
        cout.width(12);
        cout.precision(2);
        cout.setf(ios::right, ios::adjustfield);
        cout.fill(0);
        cout.setf(ios::showpos);
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed, ios::floatfield);
        cout << credit << endl;

        cout << "withdraw:";
        cout.setf(ios::right, ios::adjustfield);
        cout.width(12);
        cout << withdraw << endl;
        cout << "Balance :";
        cout.unsetf(ios::showpoint);
        cout.width(14);
        cout.fill('*');
        cout.setf(ios::internal, ios::adjustfield);
        cout << balance << endl;
    }
};
int main()
{
    sample s1("HET", 4000, 9700);
    s1.Display();
    return 0;
}
