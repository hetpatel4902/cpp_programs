#include<iostream>
#include<iomanip>
using namespace std;

class manage
{
    char *p;
    int code;

    float cost;
    public:
        manage()
        {
            p=new char[20];

            cout<<"Enter Item Name:";
            cin.ignore();
            cin.getline(p,19);
            cout<<"Enter Item Code:";
            cin.ignore();
            cin>>code;
            cout<<"Enter Item Cost:";
            cin>>cost;
            cout<<endl;
        }

        ~manage()
        {
            delete []p;
        }

      void Display()
      {
          cout<<setw(15);
          cout.setf(ios::left,ios::adjustfield);
          cout<<this->p;
            cout<<setw(5);
            cout.setf(ios::right,ios::adjustfield);
            cout<<this->code;
            cout<<setw(15)<<setprecision(2);
            cout.setf(ios::showpoint);
            cout.setf(ios::fixed,ios::floatfield);
            cout<<this->cost<<endl;
      }
};
  void indexDisplay()
        {
            cout<<setw(15)<<setiosflags(ios::left)<<"NAME";
            cout<<setw(5);
            cout.setf(ios::right,ios::adjustfield);
            cout<<"CODE";
            cout<<setw(15)<<"COST"<<endl;
        }
    void horizontalLine()
    {
        cout<<setw(30)<<setfill('-')<<"\n";
            cout.fill(' ');
        cout<<endl;
    }
int main()
{   int size;
    cout<<"How Many Products Do You Wants To Enter:";
    cin>>size;
    manage qty[size];
    horizontalLine();
    indexDisplay();
    horizontalLine();
    for(int i=0;i<size;i++)
        qty[i].Display();
    horizontalLine();
    return 0;
}
