#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n, a, b;
	cout << "Type array size: ";
	cin >> n;
	cout << "Type number A: ";
	cin >> a;
	cout << "Type number B: ";
	cin >> b;
	int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = a+b+i;
		arr[0] = a;
		arr[1] = b;
		cout << arr[i];
	}
}
