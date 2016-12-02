#include <iostream>


int numChars(char, char[], int);



int main() {

	char array[] = "abcddddef";
	std::cout << "The letter d appears" <<numChars('d',array,0)<<" times."<<std::endl;

	return 0;
}



int numChars(char search, char str[],int subscript) {

	if(str[subscript] == '\0')
		return 0; //basecase
	
	if(str[subscript] == search)
		return 1+numCHars(searc,str,subscript+1);

	else
		return numChars (search, str, subscript+1);


}
