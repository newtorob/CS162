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
using std::cout;
using std::cin;
using std::endl;

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
