#include <iostream>
#include <stdio.h>
using namespace std;

class stringS
{
public:
    void length()
    {
        char a[50];
        cout << "Enter a String: ";
        gets(a);
        int i;
        for (i = 0; a[i]; i++)
            ;
        cout << " Length Of The String Is " << i << endl;
    }

    void copy()
    {
        char a[30], b[30];
        cout << "\nEnter a String:";
        gets(a);
        int i;
        for (i = 0; a[i]; i++)
            b[i] = a[i];
        b[i] = '\0';
        cout << " Copied String Is: " << b;
    }

    void concat()
    {
        char a[30], b[30], c[60];
        int i, k;
        cout << "\nEnter First String:";
        gets(a);
        cout << "Enter Second String:";
        gets(b);
        for (i = 0; a[i]; i++)
            c[i] = a[i];

        for (k = 0; b[k]; k++)
        {
            c[i] = b[k];
            i++;
        }
        c[i] = '\0';
        cout << "Concatenation String ss:" << c;
    }

    void compare()
    {
        char a[30], b[30];
        cout << "\n\nEnter First String:";
        gets(a);
        cout << "Enter Second String:";
        gets(b);
        int i;
        for (i = 0; a[i]; i++)
        {
            if (a[i] != b[i])
            {
                cout << "Not Equal!\n";
                break;
            }
        }
        if (a[i] == '\0')
            cout << "\nEqual String!!" << endl;
    }

    void substring()
    {
        char s[40], sub[10];
        cout << "\n\nEnter a String:";
        gets(s);
        cout << "Enter a Substring:";
        gets(sub);
        int i, j, k, l;
        for (i = 0; sub[i]; i++)
            ;
        l = i;
        for (i = 0; s[i + l - 1]; i++)
        {
            k = i;
            for (j = 0; j < l; j++)
            {
                if (s[k] != sub[j])
                    break;
                k++;
            }
            if (j == l)
            {
                cout << "Sub String Found At :" << i + 1 << endl;
                break;
            }
        }

        if (j != l)
        {
            cout << "Sub String Is Not Found" << endl;
        }
    }
};

int main()
{
    stringS s1;
    s1.length();
    s1.copy();
    s1.compare();
    s1.concat();
    s1.substring();
    return 0;
}

// #include<iostream>
// #include<String>
// using namespace std;

// class StringS{
//     string S1,S2,S3,S4,S5;
//     public:
//       StringS(){
//           cin >> S1 >> S2 >> S3 >> S4 >> S5;
//       }

//       int Slength(string S1){
//           int i=0;
//           while(S1[i]!='0'){
//               i++;
//           }
//           return i;
//       }

//       void copy() {
//           int i = 0 ;
//           while(S2[i]!='0'){
//               S3.push_back(S2[i]);
//               i++;
//           }
//           cout << S2;
//       }

//       void strconta(string,string);
//       int subS(string,string);
// };

// void StringS :: strconta(string h,string t){
//     int i,j;
//     i=0;
//     j=0;
//     for(i=0;i<Slength(t);i++){
//         h.push_back(t[i]);
//     }
// }


// int StringS :: subS(string S, string P){
//     int i,j,k,l,m;
//     for(i=0;i<Slength(S);i++){
//         k=i;
//         l=0;
//         while(S[k] == P[l]){
//             if(l == Slength(P)){
//                 return i;
//             }
//             k++; l++;
//         }
//     }
//     return 0;
// }