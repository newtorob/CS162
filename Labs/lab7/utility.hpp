/*********************************************************************
** Program Filename: utility.hpp
** Author: Robert Newton
** Date: 11-13-2016
** Description:  The header file gives you the declarations
**				 in a namespace format for ensuring proper
** 				 file input and output
** Input: ifstrem
** Output: ofstream
*********************************************************************/

#ifndef UTILITY_HPP
#define UTLITY_HPP


namespace Utility
{
	std::ifstream& open_inFile(std::ifstream& ifs, std::string ifn);
	std::ofstream& open_outFile(std::ofstream& ifs, std::string ifn);

};



#endif
