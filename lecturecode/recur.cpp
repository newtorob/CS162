#include <iostream>
 using namespace std;


 void message(int times) {
	 if (times > 0) {
		 cout<< "this is a recursive function."<<endl;
		 message(times-1);
	 }
 }


int main() {

	message(3);

	return 0;
}
