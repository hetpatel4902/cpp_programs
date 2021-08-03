#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;

class rectangle;
class polar
{
    float r,theta;
    public:
   friend void conversion(int t,polar &o1,rectangle &o2);
        void set_r_theta();
        void show_r_theta();

};
void polar:: set_r_theta()
        {
            cout<<"\nEnter The Value Of r And Theta(In degree):";
            cin>>r>>theta;
            theta*=PI/180;
        }
void polar::show_r_theta()
{
               cout<<" \nPOLAR FORM :\n"
                     <<" r = "<<r<<"\n"
                     <<" Theta = "<<(180/PI)*theta<<" Degree \n";
}
class rectangle
{
    float x,y;
    public:
    friend void conversion(int t,polar &o1,rectangle &o2);
        void set_xy()
        {
            cout<<"\nEnter value Of x And y:";
            cin>>x>>y;
        }
        void show_xy()
        {
            cout<<"\n CARTESIAN FORM\n";
            cout<<" x ="<<x<<endl;
            cout<<" y ="<<y<<endl;
        }
};
void conversion(int t,polar &o1,rectangle &o2)
{
           if(t==1)
            {       o2.set_xy();
                       o1.r=sqrt(o2.x*o2.x+o2.y*o2.y);

                      if(o2.x!=0)
                       {
                             o1.theta=atan(o2.y/o2.x);
                             o1.show_r_theta();
                       }

                    else
                      {
                              cout<<"\n POLAR FORM :\n"
                                     <<" r = "<<o1.r<<"\n"
                                    <<" Theta = 90 Degree\n";
                      }

             }
       else if(t==2)
          {         o1.set_r_theta();
                    o2.x=o1.r*cos(o1.theta);
                    o2.y=o1.r*sin(o1.theta);
                   o2.show_xy();
          }
}
int main()
{   int test;
    polar obj1;
    rectangle obj2;
cout<<" Press 1 To Input Certesian \n  Press 2 To Input Polar Point \n "
                     <<" What Is Your Input ? : ";
                    cin>>test;
                    conversion(test,obj1,obj2);
    return 0;
}
