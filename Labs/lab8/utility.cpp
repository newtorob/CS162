/*********************************************************************
** Program Filename: utility.cpp
** Author: Robert Newton
** Date: 11-13-2016
** Description: Implemenetation of utility header for the namespace
**				to ensure file input and output is valid
** Input: ifstrem
** Output: ofstream
*********************************************************************/


#include <iostream>
#include "utility.hpp"
#include <cstdlib>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
/*********************************************************************
** Function:		open_inFile
** Description:		if we get a filename, attempt to open it
** Parameters:		ifs, ifn
** Pre-Conditions:	needs filename
** Post-Conditions:	file must be opened or output failure
** Return:			if no file open or found, return the failure.
*********************************************************************/
std::ifstream& Utility::open_inFile(std::ifstream& ifs, std::string ifn)
{
	ifs.open(ifn.c_str());

	if (ifs.fail())
	{
		cout << "Couldn't open file!" << ifn << endl;
	}

	return ifs;
}



/*********************************************************************
** Function:		open_outFile
** Description:		if we get a filename, attempt to open it and write to it
** Parameters:		ifs, ifn
** Pre-Conditions:	needs filename
** Post-Conditions:	file must be opened or output failure
** Return:			if no file open or found, return the failure.
**					otherwise, return file with writing.
*********************************************************************/
std::ofstream& Utility::open_outFile(std::ofstream& ifs, std::string ifn)
{
	ifs.open(ifn.c_str());

	if(ifs.fail())
	{
		cout << "Couldn't open file!" << ifn << endl;
	}

	return ifs;
}


/*********************************************************************
 ** Function:    getValid
 ** Description: has the user to enter a valid int 
 **              if the user adds anything else, error
 **              message is received
 ** Parameters: n/a
 ** Pre-Conditions: n/a
 ** Post-Conditions: n/a
 *********************************************************************/

int Utility::getValid()
{
    int inputVal = 0;

    // get input until valid int is received
    while (!(cin >> inputVal))
    {
        cout << "Please enter only an integer." <<endl;

        // clear error bits
        cin.clear();
        // ignore the rest of the buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return inputVal;
}



/*********************************************************************
 ** Function:       getvalidRange
 ** Description:    Waits for the user to enter a valid int value
 **                 between bottom and top. This ensures user will 
 **                 not go out of bounds
 ** Parameters:     bottom  top    
 ** Pre-Conditions: bottom must obviously be less than top.
 ** Post-Conditions: A user-input int between low and top is returned.
 *********************************************************************/

int Utility::getValidRange(const int bottom, const int top)
{
    int inputVal;
    bool done = false;
    do
    {
        inputVal = Utility::getValid();

        if (inputVal < bottom || inputVal > top)
            cout << "Please ensure numbers between " << bottom << " & " <<
                         top << endl;
        else
            done = true;
    }
    while (!done);

    return inputVal;
}