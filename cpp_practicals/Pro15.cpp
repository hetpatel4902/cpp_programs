#include<iostream>
using namespace std;

    void swap_value(int a,int b)
    {
        int temp1;
        temp1 = a;
        a = b;
        b = temp1;
    }

    void swap_reference(int *a,int *b)
    {
        int temp2;
        temp2 = *a;
        *a = *b;
        *b = temp2;
    }

int main()
{
    int a,b;
    int d;
        cout << "Enter Value Of a And b :" <<endl;
        cin >> a >> b;
        cout << "enter 1 for swap by value and 2 for swap by reference " << endl;
        cin >> d;
    switch (d)
    {
    case 1:
        cout << "The Value Of a(before swaping) Is :" << a <<endl << "The Value Of b(before swaping) Is :" << b<<endl ;
        swap_value(a,b);
        cout << "The Value Of a(after swaping) Is :" << a <<endl << "The Value Of b(after swaping) Is :" << b<<endl;
        break;

    case 2:
        cout << "The Value Of a(before swaping) Is :" << a <<endl << "The Value Of b(before swaping) Is :" << b <<endl;
        swap_reference(&a,&b);
        cout << "The Value Of a(after swaping) Is :" << a <<endl << "The Value Of b(after swaping) Is :" << b <<endl;
        break;
 default:
        cout << "Enter 1 or 2 " ;
    }
    return 0;
}
