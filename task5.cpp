#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n, fib;
	cout << "Type array size: ";
	cin >> n;
	int arr[n];
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i-2] + arr [i-1];	
	}
	
	for (int i = 0; i<n; i++) {
		cout << i << endl << arr[i];
	}

}
