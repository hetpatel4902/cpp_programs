#include<iostream>
using namespace std;

class PointS
{
    int x,y;
public:
    PointS ( int x1, int y1 )
     {
         x = x1;
         y = y1;
     }
    PointS (const PointS &p1)
    {
        x = p1.x;
        y = p1.y;
    }
    int getX()
     {
         return x;
     }
    int getY()
     {
         return y;
     }
};
int main()
{
    PointS p1(11,19);
    PointS p2 = p1;
    cout << "p1.x = " << p1.getX() << ", p1.y =" <<p1.getY() << endl;
    cout << "p2.x = " << p2.getX() << ", p2.y =" <<p2.getY() << endl;
    return 0;
}
