#include <iostream>
using namespace std;
int main()
{
	int arr[10],n1;
	for (int n = 0; n < 10; n++) {
		cin >> arr[n];
		cout << arr[n] << "--" << endl;
		n1 = arr[n];
	}
	cout << "Array was ended by " << n1 << endl;

	int arr2[4][5], k,n2;
	k = 1;
	for (int na = 0; na < 20; na++) {
		k++;
		arr[na] = k;
		cout << arr[na] << "--" << endl;
		n2 = arr[na];
	}
	cout << "Array was ended by " << n2 << endl;
	return 0;
}
