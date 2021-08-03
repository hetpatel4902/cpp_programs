#include<iostream>
using namespace std;


class DISTANCE
{
int x,y,z;
float inches;
public:
    void input()
    {
        cout << "Enter Two Values In Feet to add and convert it into inches respectively: " <<endl;
        cin >> x >>y;
    }
    void sum()
    {
        z = x + y;
        inches = (z * 12);
    }
void output()
    {
        cout << "Total Distance In Feet Is " << z <<endl << "And In Inches Is " << inches ;
    }
};
int main() {
    DISTANCE d1;
    d1.input();
    d1.sum();
    d1.output();
}
