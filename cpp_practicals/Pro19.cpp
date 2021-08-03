#include<iostream>
using namespace std;

class Player {
  string nickname;
  static int id_code;
    public:

    void fixData()
    {
        id_code=1000;
        cout << "Enter Player's Nickname : " << endl;
        cin >> nickname;
        id_code++;
    }
    void getData()
    {
        cout << "The Nickname Of The Player Is : " << nickname << endl;
        cout << "And The Id Code Of The Player Is : " << id_code << endl;
    }
    static void  getid_code()
{
    cout<<"The Value Of Id Code is "<<id_code<<endl;
}


};

int Player :: id_code;

int main()
{
Player P1;
P1.fixData();
P1.getData();
Player::getid_code();


    return 0;
}
