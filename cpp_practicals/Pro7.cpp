#include<iostream>
using namespace std;


class Data {
    const char* s;
public:
    Data()  {
        s = new char[7];
        s = "Het";
    }
  void showResult()    {
        cout << s << endl;
    }
};
int main()
{
    Data d =  Data();
    d.showResult();
}
