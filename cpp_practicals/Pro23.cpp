#include<iostream>
using namespace std;

class complex
{
    float x,y;
public:
    friend complex sum(complex,complex);
    void SetComplex()
    {
        cout << "Enter Real Part" << endl;
        cin >> x;
        cout << "Enter Imaginary Part" << endl;
        cin >> y;
    }
    void Display()
    {
        cout << x << " + " << y << "i" << endl;
    }
};
    complex sum(complex c1,complex c2)  {
        complex temp;
        temp.x=c1.x+c2.x;
        temp.y=c1.y+c2.y;
        return temp;
    }
    
int main() {
    complex o1,o2,res;
    o1.SetComplex();
    o2.SetComplex();
    o1.Display();
    o2.Display();
    res=sum(o1,o2);
    res.Display();
    return 0;
}
