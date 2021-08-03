#include<iostream>
using namespace std;

void power(double m,int n) {   
    double res=1;
    for(int i=1;i<=n;i++)
    res*=m;  
    cout << "Answer Is :"<<res<<endl;
}
void power (int m,int n) {
    int res=1;
    for(int i=1;i<=n;i++) res*=m;
    cout<<"Answer Is :"<<res<<endl;
}
int main() {
    power(3.7,2);   power(7,2);
    return 0;
}
