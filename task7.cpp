#include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n;
	cout << "Type array size: ";
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {

		cout << "Type numbers: ";
		cin >> arr[i];
	}
	
	for (int i = n - 1; i >=0; --i){
		cout << arr[i];
	}
	
}
    
