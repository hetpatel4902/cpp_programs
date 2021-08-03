#include<iostream>
using namespace std;

class Time {
    int Hour,Min,Sec;
     public:
        void fixTime(int ,int ,int);
        void showTime();
        void normalize();
        void add(Time d1,Time d2);
};
void Time :: add(Time d1,Time d2)
{
    Hour = d1.Hour + d2.Hour;
    Min  = d1.Min + d2.Min;
    Sec  = d1.Sec + d2.Sec;
}

void Time :: fixTime(int h,int m,int s)
{
    Hour = h;
    Min = m;
    Sec = s;
}

void Time :: showTime()
{

    cout << Hour << ":" << Min << ":" << Sec << endl;
}

void Time :: normalize()
{
    Min += Sec / 60;
    Sec %= 60;
    Hour += Min / 60;
    Min %= 60;
}
int main()
{
    Time T1,T2,T;
    T1.fixTime(7,154,298);
    T2.fixTime(9,199,563);
    cout << "--------------------------" <<endl;
    T1.showTime();
    T2.showTime();
    T.add(T1,T2);
    T.normalize();
    cout << "Sum Is :- > " ;
    T.showTime();
    cout << "--------------------------" <<endl;
    return 0;
}
