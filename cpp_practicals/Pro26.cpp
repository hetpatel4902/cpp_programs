#include <iostream>
using namespace std;


class arr_2d {
  private:
    int **arr;
    static int val;
    int columns;
    int rows;
  public:
    arr_2d();
    void inpt();
    void prnt();
};

arr_2d::arr_2d() {
     cout << "How Many Rows Do You Want To Add: " << endl;
        cin >> rows;
        cout << "How Many Columm Do You Want to Add: " << endl;
        cin >> columns;
    arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[columns];
}
void arr_2d::inpt(){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}
void arr_2d::prnt(){
     for (int i = 0; i < rows; i++){
       for (int j = 0; j < columns; j++){
          cout << arr[i][j] << " ";
       }
       cout << "\n";
     }
}
int main() {
 //arr_2d *arr1 = new arr_2d;
   // arr1->inpt();
   // arr1->prnt();

arr_2d obj;
obj.inpt();
obj.prnt();
    return 0;
}
