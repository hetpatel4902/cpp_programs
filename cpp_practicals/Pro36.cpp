#include <iostream>
#include <string.h>
using namespace std;

class person  {
    char name[20];
protected:
    void setname(char *n)  {
        strcpy(name, n);
    }
public:
    char *getname() {
        return name;
    }
};
class employe : public person  {
    float salary;
protected:
    void setsalary(float s)   {
        salary = s;
    }
public:
    float getsalary() {
        return salary;
    }
    void setEmployee(char *n, float s)  {
        setname(n);
        setsalary(s);
    }
};
class person_protect  {
    char name[20];
protected:
    void setname(char *n) {
        strcpy(name, n);
    }
public:
    char *getname()  {
        return name;
    }
};
class employe_protect : protected person_protect  {
    float salary;
protected:
    void setsalary(float s)  {
        salary = s;
    }
public:
    float getsalary()    {
        return salary;
    }
    void setEmployee(char *n, float s)  {
        setname(n);
        setsalary(s);
    }
    void getInfo()  {
        cout << "Employee Name Is : " << getname() << endl;
        cout << "Salary Is :" << getsalary() << endl;
    }
};
class person_private  {
    char name[20];
protected:
    void setname(char *n)  {
        strcpy(name, n);
    }
public:
    char *getname()   {
        return name;
    }
};
class employe_private : private person_private  {
float salary;
protected:
    void setsalary(float s)   {
        salary = s;
    }
public:
    float getsalary()    {
        return salary;
    }
    void setEmployee(char *n, float s)   {
        setname(n);
        setsalary(s);
    }
 void getInfo()  {
        cout << "Employee Name Is : " << getname() << endl;
        cout << "Salary Is :" << getsalary() << endl;
    }
};
int main()  {
    char name[20];
    float salary;
    cout << "-------Public Inheritance-------" << endl;
    cout << "Enter a Name:";
    cin >> name;
    cout << "Enter Salary:";
    cin >> salary;
    employe e1;
    e1.setEmployee(name, salary);
    cout << "Employee name Is : " << e1.getname() << endl;
    cout << "Salary Is :" << e1.getsalary() << endl;

    cout << "\n-------Protected Inheritance-------" << endl;
    employe_protect e2;
    cout << "Enter a Name:";
    cin >> name;
    cout << "Enter Salary:";
    cin >> salary;
    e2.setEmployee(name, salary);
    e2.getInfo();

    cout << "\n-------private Inheritance-------" << endl;
    employe_private e3;
    cout << "Enter a Name:";
    cin >> name;
    cout << "Enter Salary:";
    cin >> salary;
    e3.setEmployee(name, salary);
    e3.getInfo();
    return 0;
}
