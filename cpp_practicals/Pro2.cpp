#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char name[30];
    int age;
public :
    void read()
    {
        cout << "Enter Student Name: ";
        gets(name);
        cout << "Enter Student Age: ";
        cin >> age;
        fflush(stdin);
    }
    void display()
    {
        cout << " Name :- " << name;
        cout << " Age :- " << age;
    }
};
int main()
{
    student s1,s2;
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    return 0;
}
