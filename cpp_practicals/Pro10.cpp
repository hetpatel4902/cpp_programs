#include<iostream>
using namespace std;


int main() {
	int x, n;
	cout << "Enter the number of products:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " products" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
	return 0;
       }

