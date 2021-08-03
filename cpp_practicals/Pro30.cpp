#include <iostream>
using namespace std;


class sub_arr {
   private:
      int SIZE;
      int* arr;
   public:
      sub_arr() {
          cout << "How Many Elements Do You Want In Array(Atleast Enter 10): " << endl;
          cin >> SIZE;
            arr = new int[SIZE];
        int i;
         for(i = 0; i < SIZE; i++) {
           arr[i] = i*i;
         }
      }
      void prnt(){
          for(int i = 0; i < SIZE; i++) {
           cout << arr[i] << " ";
         }
      }
      int& operator[](int i) {
         if( i >= SIZE ) {
            cout << "Index Running Out Of Size Of Array" << endl;
            return arr[0];
         }
         return arr[i];
      }
};

int main() {
   sub_arr A;
        cout << "Auto_genarated Array Is :" << endl;
        A.prnt();
   cout <<"\n\n**Using [] Operator For Find Subscript**" << endl;
   cout << "Value Of A[5] : " << A[5] <<endl;
   cout << "Value Of A[2] : " << A[2]<<endl;
   cout << "Value Of A[9] : " << A[9]<<endl;

   return 0;
}
