#include <iostream>
using namespace std;

//function prototype
int gcd(int, int);

int main() {
	int num1, num2;

	cout << "Enter 2 ints: "<<endl;
	cin >> num1 >> num2;
	cout<< "The gcd of "<<num1 << " & "<<num2 <<endl;
	cout << gcd(num1, num2) << endl;

	return 0;
}

int gcd(int x, int y) {
	if (x % y == 0) 
		return y;
	
	else
		return gcd(y, x % y);
	
}
