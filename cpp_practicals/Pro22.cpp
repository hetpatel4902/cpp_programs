#include<iostream>
using namespace std;

class Sample {
    int a,b;
    friend float mean(Sample);
public:
    void SetValue()
    {
        cout << "Enter The Value Of a And b : " << endl;
        cin >> a >> b;
    }
};

float mean(Sample d)
{
    return ((d.a+d.b)/2.0);
}

int main()
{
    Sample o1;
    o1.SetValue();
    cout << "Mean Value Is :" << mean(o1) << endl;
    return 0;
}
