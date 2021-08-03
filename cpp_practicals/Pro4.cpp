#include<iostream>
using namespace std;
void LargestNumber(int a,int b,int c);
void swap(int &a,int &b,int &c);
int main()
{   int a,b,c;
    cout<<"Enter Three Numbers:"<<endl;
    cin>>a>>b>>c;
    LargestNumber(a,b,c);
    swap(a,b,c);
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
    return 0;
}

void LargestNumber(int a,int b,int c)
{
    int large;
    large=a>b?a>c?a:c:b>c?b:c;
    cout<<"The Largest Number is :"<<large<<endl;
}
void swap(int &a,int &b,int &c)
{
    int t;
    t=a;
    a=c;
    c=b;
    b=t;
}
