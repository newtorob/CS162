#include <iostream>
using namespace std;

int fib(int);

int main() {

	cout << "The first 10 fibo numbers are: " << endl;
	for(int x=0; x<10; x++)
		cout << fib(x)<<" ";
	cout << endl;
	return 0;
}


int fib(int n) {
	if(n <= 0) //base case
		return 0;
	else if (n ==1)
		return 1;
	else return fib(n - 1) + fib(n - 2);
}
