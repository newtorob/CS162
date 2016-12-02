/*********************************************************************
 * ** Program Filename:
 * ** Author:Robert Newton
 * ** Date:10/23/2016
 * ** Description: We will implement three functions using reursion and write a menu program to call these functions. 
 * ** Input: A choice of 3 recursive functions 
 * ** Output: The result of whatever choice the user made.
 * *********************************************************************/

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
 ** Function: sReverse
 ** Description: Returns a recursively reversed string
 ** Parameters:  String str to be reversed 
 ** Pre-Conditions: N/A
 ** Post-Conditions:  N/A
 ** Return: User inputted strin, reversed
 *********************************************************************/

string sReverse(string str) {
	if(str.length() == 1)
	{
		return str;
	}

	string usr_in = str.at(str.length()- 1)+ sReverse(str.substr(0, str.length()-1));
	
	return usr_in;
}


/*********************************************************************
 ** Function: sum
 ** Description: Returns the sum of the array (recursive)
 ** Parameters: Integers for the Array and the size of the array
 ** Pre-Conditions: The array must be in main functions
 ** Post-Conditions:  None
 ** Return: The sum of the array, if the array size is 1, then we return 1
 *********************************************************************/

int sum(int arr[], int arrsize){
	
	int arrTotal = 0;

	if(arrsize == 1) 
	{
		return arrTotal = arr[0];
	}
	else
		return arr[arrsize - 1] + sum(arr, arrsize - 1);
}


/*********************************************************************
 ** Function: trianglular
 ** Description: Returns the triangular number for int N
 ** Parameters:  An integer 
 ** Pre-Conditions: None
 ** Post-Conditions:  None
 ** Return: The triangle of the integer, unless that int less/equal to 1
 *********************************************************************/

int triangular(int triangle) {
	
	if (triangle >= 1) 
	{
		return triangle + triangular(triangle - 1);
	}
	else 
		
		return 0;
	
}



int main() {
	string sInput, sResult;
	int choice, tri, value;
	std::vector<int> vsize;
	//while loop to take the choice from the usr
	while (choice != 4){
		cout << "Select from the following menu options" << endl;
		cout << "1: String Reversal" << endl;
		cout << "2: Add up the array contents" << endl;
		cout << "3: Find the triangular number for your number" << endl;
		cout << "4: Close the program" <<endl;
		cin  >> choice;

		//switch to change to different menu option depending
		// on the usr
		switch (choice)
		{
			case 1: 
				{
					cout << "Enter your string" << endl;
					
					cin >>sInput;

					sResult = sReverse(sInput);

					cout << sReverse(sInput) << endl;

					break;
				}

			case 2:
				{
					int selection = 1;
					int a[vsize.size()];
					while(selection == 1){

						cout << "Enter your integer: " << endl;
						cin >> value;
						vsize.push_back(value);
						cout << "If you want to enter another number press 1, otherwise, press any other number." << endl;
						cin >> selection;

					}

					 for(int i= 0; i<vsize.size(); i++)
                	{
                        a[i]=vsize[i];
                	}
                	cout<<"The sum of the array is "<<sum(a, int (vsize.size()))<<endl;
               
                break;
					
				} 
				
				case 3: {
					
					cout << "Which integer do you want to use to find the triangular number for N." << endl;

					cin >> tri;

					cout << triangular(tri) << endl;
				
					break;

				}
				//option for the usr to leave the menu
			case 4:
			
				cout << "This will close the program" << endl;
				break;

				//usr must enter a menu option
			default : 
			
				cout << "Select a menu item" << endl;
			

		
				
		}	


		
		
	}

	return 0;
}
