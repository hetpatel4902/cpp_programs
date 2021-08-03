#include<bits/stdc++.h>
using namespace std;


int* createVector(int s){
    int *m=new int[s];
    return m;
}
int main(){
    
cout<<"Enter Size M You Want To Create Vector:-";
int size;
cin>>size;
int *ptr =createVector(size);
cout<<"Enter "<<size<<" Numbers:"<<endl;
for(int i=0;i<size;i++){
    cin>>*(ptr+i);
}
cout<<"\n\nEntered Data Is:";
for(int i=0;i<size;i++)
cout<<*(ptr+i)<<" ";

cout<<"\n If You Wants To Delete Memory Enter 'Y' :";
char choice;
cin>>choice;
if(choice=='y'||choice=='Y'){
        delete []ptr;
        cout<<"\n Deleted Successfully....\n";
}
}
