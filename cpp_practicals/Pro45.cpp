#include<iostream>
#include<conio.h>
#include<string.h>
#include <fstream>
#include<stdlib.h>
using namespace std;
int main()
{

	char fname[20];
	char rec[80], ch;

	cout<<"Enter File Name: ";
	cin.get(fname, 20);

	fstream fout(fname, ios::out);

	if(!fout)
	{
		cout<<"Error In Opening The File "<<fname;
		getch();
		exit(1);
	}
	cin.get(ch);

	cout<<"\nEnter a Line To Store In The File:\n";
	cin.get(rec, 80);
	fout<<rec<<"\n";
	cout<<"\nThe Entered Line Stored In The File Successfully..!!";
	cout<<"\nPress Any Key To See...\n";
	getch();
	fout.close();

	fstream fin(fname, ios::in);
	if(!fin)
	{
		cout<<"Error In Opening The file "<<fname;
		cout<<"\nPress Any Key To Exit...";
		getch();
		exit(2);
	}

	cin.get(ch);
	fin.get(rec, 80);
	cout<<"\nThe File Contains:\n";
	cout<<rec;
	cout<<"\n\nPress Any Key To Exit...\n";
	fin.close();

    getch();
	return 0;
}
