#include<iostream>
#include<string.h>
using namespace std;
class Destruct {

    char *s;
    int size;
public:
    Destruct(char*);
    ~Destruct();
};
Destruct :: Destruct(char* c) {
    size = strlen(c);
    s = new char[size+1];
    strcpy(s,c);
}
Destruct :: ~Destruct() {
    delete[] s;
}
int main(){
    Destruct d1("Your memory is free");
}
