#include<iostream>
using namespace std;


class Calc {
public :
    int x,y;
    void getinput()
    {
        cout << "Enter a any 2 Number:\n";
        cin >> x >> y;
    }
    void sum()
    {
        cout << "\n SUM =" << x+y;
    }
    void subtract()
    {
        cout << "\n SUBTRACTION = " << x-y;
    }
    void mult()
    {
        cout << "\n MULTIPLICATION = " << x*y;
    }
    void div()
    {
        cout << "\n DIVISION = " << x/y;
    }
    void mod()
    {
        cout << "\n MODULAR = " << x%y;
    }
};

int main()
{
    Calc C;
    C.getinput();
    C.sum();
    C.subtract();
    C.mult();
    C.div();
    C.mod();
    return 0;
}
