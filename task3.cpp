#include <math.h>
using namespace std;
int main() {

	int n, a , d;
	cout << "Type array size: ";
	cin >> n;
	cout << "Type number: ";
	cin >> a;
	cout << "Type number: ";
	cin >> d;
	int arr[n];
	for (int i = 1; i <= n; i++) {
		arr[i] = a+d*i;
		cout << "The first number: "<< i+1 << endl;
		cout << arr[i] << endl;
		
	}

	
}
