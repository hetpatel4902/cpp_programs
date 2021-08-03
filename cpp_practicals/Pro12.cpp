#include<iostream>
using namespace std;

class Temp
{
    float fahrenheit,celcius;
 public:
    float convert(float f)
    {
        fahrenheit = f;
        celcius = (fahrenheit - 32) * 5.0 / 9.0;
        return celcius;
    }

};

int main()
{
    Temp t;
    float f;
    cout << "Enter Temperature In Fahrenheit = ";
    cin >> f;
    cout << "Temperature In Celsius = " << t.convert(f);
    return 0;
}
