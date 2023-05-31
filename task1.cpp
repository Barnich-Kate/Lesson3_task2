   1
#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n;
	cout << "Type array size: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		int a = i;
		if (a % 2!= 0) {
		cout <<	arr[a] << endl;
		}
	}
	
}
