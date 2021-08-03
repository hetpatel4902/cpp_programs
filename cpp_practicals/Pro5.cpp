#include<iostream>
#include<math.h>
using namespace std;

class area
{
public:
    void Tri(float x,float y,float z);
    void Sq(int a,int b);
    void Circle (int r);
};

void area::Tri(float x,float y,float z)
{
     cout << "Enter Three Sides Of Triangle: " << endl;
        cin >> x >> y >> z;
        float s = (x + y + z) / 2;
        float area;
        area = sqrt(s * (s - x) * (s - y) * (s - z));
        cout << "Area of the triangle is " << area << endl;
}
void area::Sq (int a,int b)
{
    cout << "Enter The Value Of a And b:" <<endl;
    cin >> a >> b ;
    cout << "Area Of Square is :" << a*b <<endl;
}
void area::Circle(int r)
{
    cout << "Enter The Value Of r" <<endl;
    cin >> r ;
    cout << "Area Of Circle is :" << 3.14*r*r <<endl;
}

int main()
{
    area o;
    int a,b,r;
    float x,y,z;
    o.Tri(x,y,z);
    o.Sq(a,b);
    o.Circle(r);
}
