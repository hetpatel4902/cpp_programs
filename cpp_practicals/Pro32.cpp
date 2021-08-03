
#include <iostream>
using namespace std;

class conTemp {
    double feh;
    float cel;
public:
    conTemp(){}
    conTemp(double temp){
feh=temp;
    }
    conTemp(float t):cel(t)   {
        cout<<"Temprature In Fahrenheit: "<<1.8*cel+32;
    } operator double(){
        double con;
        con = (5.0 / 9) * (feh - 32) + 273.15;
        return con;
    }
};
int main(){
    double kel,feh=79.6;
    float cel=99.1;
    conTemp c1(feh),c2;
    kel = c1;
    cout << "Temprature In Kelvin: "<<kel<< endl;
    c2=cel;
    return 0;
}
