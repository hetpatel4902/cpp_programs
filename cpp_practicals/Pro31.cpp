#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class tolwr{
    char* str;
    //istream extraction operator ' >> ' Overloading as Global Functions
	friend istream & operator>>(istream & in,tolwr &);
	//ostream insertion operator ' << ' Overloading as Global Functions
	friend  ostream &operator<<( ostream &os,tolwr &);
public:

// No-args constructor
    tolwr()
    {}

//Overloaded constructor
    tolwr(const char* s)

     {
        str = new char[ strlen(s) + 1];
        strcpy(str,s);
    }

// Copy constructor
tolwr(const tolwr& source)
    {
    str = new char[ strlen(source.str) + 1];
    strcpy(str,source.str);
}

//Copy Assignment Overloading
tolwr &operator=(const tolwr& rhs)
{
    if (this == &rhs) {
        return *this;
    }
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}


// Destructor
    ~tolwr() {

    delete[] str;
}
};
//ostream insertion operator ' << ' Overloading as Global Functions
 ostream& operator<<( ostream &os,tolwr &rhs){
	os << rhs.str;
	return os;
}

//istream extraction operator ' >> ' Overloading as Global Functions
 istream &operator>>( istream &in,tolwr &rhs){
     char* temp= new char[15];
    in>>temp;
    rhs.str=new char[strlen(temp)+1];
    strcpy(rhs.str,temp);
    delete []temp;
	return in;
    }

int main(){
    tolwr k1("Mr.");
	tolwr k2("HB");
	tolwr k3;

	cout << "Enter The Last Name: \n";
	cin >> k3;
	cout << "The Name Is: " << k1 << " "<< k2 << " " << k3 << endl;

	cout << "Enter The New Name As First Name , Middle Name , Last Name Separated By A Space: \n" << endl;
	cin >> k1 >> k2 >> k3;
cout << " New Name Is Given By: " <<   k1 << " "<< k2 << " "  << k3 << endl;
    return 0;
}
