#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n;
	cout << "Type array size: ";
	cin >> n;
	int arr[n];
	for (int i = 1; i <= n; i++) {
		arr[i] = pow(2, i);
		cout << arr[i] << endl;
	}
}
