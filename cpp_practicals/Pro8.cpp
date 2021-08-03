#include<iostream>
using namespace std;

class Computer {
     const char* s;
 public:
    Computer()
    {
        s = new char[20];
        s = "Info";
    }

    void display()
    {
        cout << "The String Is : " << s << endl;
    }
};
int main() {
    Computer S1 = Computer();
    S1.display();
}
