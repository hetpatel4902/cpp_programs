#include <iostream>
using namespace std;

class strings
{
    char* p = "Het Patel";

public:
    void PrintP()
    {

        for (int i = 0; *(p + i); i++)
            cout << *(p + i);
        cout << endl;
    }
};
int main() {
    strings S;
    S.PrintP();
 return 0;
}
