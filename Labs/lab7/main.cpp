/*********************************************************************
** Program Filename: main.cpp
** Author: Robert Newton
** Date: 11-13-2016
** Description: main.cpp is  menu driven program, allowing the user to 
** select from three different searches, linear, binary and bubblesort
**
** Input: ifstrem
** Output: ofstream
*********************************************************************/

#include <algorithm>        
#include <fstream>          
#include <iostream>         
#include <string>           
#include <vector>           
#include "utility.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

//prototypes for functions
void menu();
void userSelection (int sel);
void linearSearch (int userVal, const std::string inFile);
void binarySearch (int user, const std::string inFile); 
void bubbleSort (const std::string inFile, const std::string outFile);

/*********************************************************************
** Function: main file
** Description: main file for our search file. The user will select from the 
** menu their choice in search options then we take the  option and let 
** the user choose the file they want to pass to the function.
** Parameters: N/A
** Pre-Conditions: A selection from the user
** Post-Conditions: N/A
** Return: nothing, unless error
*********************************************************************/

int main()
{
    int selection = -1;
    cout << "Welcome to Search and Sort";

    while (true)
    {
        
        cout << "Please enter your menu selection" << endl;
        cout << endl;
        menu();
        while (selection < 1 || selection > 4)
        {
            cout << "Selection: " <<endl;
            cin >> selection;
        }

        // use the users choice
        userSelection(selection);

        // go back to the original selection
        selection = -1;
    }
                    

    
    return 1;
}


/*********************************************************************
 ** Function:       menu()
 ** Description:    Give the user option in menu
 ** Parameters:     N/A
 ** Pre-Conditions: User choice
 ** Post-Conditions: N/A
 ** Returns:        go to user selection
 *********************************************************************/

void menu()
{
        cout <<  "1) Linear Search" << endl <<
                 "2) Binary Search" << endl << 
                 "3) Bubblesort" << endl <<
                 "4) Exit" << endl; 
}


/*********************************************************************
 ** Function:       userSelection
 ** Description:    Has the user choose between linear, binary or bubblesort 
 ** Parameters:     sel     the user's selection from menu()
 ** Pre-Conditions: User must make a choice, then we take the choice and 
 ** and put it through the switch statement
 ** Post-Conditions: The selection will be used
 ** Returns: N/A
 *********************************************************************/

void userSelection(int sel)
{
    switch (sel)
    {
        int userVal;
        case 1: 
            {
                cout << "Which file should be used for input?" << endl;
                string filename;
                cin >> filename;

                
                cout << "What integer would you like to linear search for?" << endl;
                cin >> userVal; //get user value for search

                // search through file for userVal
                linearSearch(userVal, filename);
                //then print result            
            }
            break;
        case 2:
            {
                cout << "Which sorted file should be used for input" <<endl;
                string filename;
                cin >> filename;

                
                cout << "What integer would you like to use binary search for?" <<endl;
                cin >> userVal; //get user value for search

                // search through file
                binarySearch(userVal, filename);
                //then print result
            }
            break;
        case 3:
            {
                cout << "Which file should be used for input" << endl;
                string inFile;
                cin >> inFile;

                cout << "What is your output file?" << endl;
                string outFile;
                cin >> outFile;

                // sort infile and output to outfile
                cout << "Bubblesort (Ascending)" <<endl;
                bubbleSort(inFile, outFile);
            }
            break;
        default:
            
            exit(0);
            //exit the function
    }
}


/*********************************************************************
 ** Function:       linearSearch
 ** Description:    searches text file for the user input value and prints
 **                 the indices if they occur. found in Gaddis pg596
 ** Parameters:     userVal, inFile
 ** Pre-Conditions: inFile contains only integers seperated by white space
 ** Post-Conditions: all indices containing userVal are printed
 ** Returns:      all indices with userVal, if any exist  
 *********************************************************************/

void linearSearch(int userVal, const string inFile)
{
    cout << "Linear Search for " << userVal << " in  " << inFile << endl;

    // open file 
    std::ifstream in;
    Utility::open_inFile(in, inFile);

    //values in valList
    vector<int> valList;

    // read values to vector
    int inp;
    while (in >> inp)
        valList.push_back(inp);

    // print vector contents
    cout << "File contents: ";
    int numVal = valList.size();
    for (int i = 0; i < numVal; ++i)
        cout << valList[i] << ' ';
    cout << endl;

    // the algorithm
    bool found = false;
    for (int i = 0; i < numVal; ++i)
        if (valList[i] == userVal)
        {
            cout << "Found " << userVal << " at index " << i << endl;
            found = true;
        }

    if (found == false)
        cout << "Didn't find'" << userVal << " in this file." << endl;

    // close  file 
    in.close();
}


/*********************************************************************
 ** Function:       binarySearch
 ** Description:    Searches a sorted file of integers seperated by spaces 
 **                 for the given value and prints an index, if it contains 
 **                 the value. found in Gaddis pg600
 ** Parameters:     userVal inFile 
 ** Pre-Conditions: inFile contains only ascending ints, seperated by spaces
 **                 
 ** Post-Conditions: an index containing userVal is printed
 ** Returns:        The index with userVal
 *********************************************************************/

void binarySearch(int userVal, const string inFile)
{
    cout << "Binary Search for " << userVal << " in " << inFile << endl;

    // open file
    std::ifstream in;
    Utility::open_inFile(in, inFile);

    // value valList
    vector<int> valList;

    // read into vector
    int inp;
    while (in >> inp)
        valList.push_back(inp);

    // print 
    cout << "File contains: ";
    int numVal = valList.size();
    for (int i = 0; i < numVal; ++i)
        cout << valList[i] << ' ';
    cout << endl;


    // the algorithm
    int begin = 0;          // first index of current search 
    int end = numVal;     // last index of current search 
    int middle = 0;         // middle of current search 
    bool found = false;     // did it find matching int?
    int pos = -1;           // index of int if found

    
    while (!found && begin <= end)
    {
        middle = (begin + end) / 2;
        if (valList[middle] == userVal)
        {
            // finished
            found = true;
            pos = middle;
        }
        else if (valList[middle] > userVal)
            end = middle - 1;
        else
            begin = middle + 1;
    }

    // print the result
    if (pos == -1)
        cout << "Didn't find " << userVal << " in this file." << endl;
    else
        cout << "Found " << userVal << " at index " << pos << endl;

    // close the file 
    in.close();
}


/*********************************************************************
 ** Function:       bubbleSort
 ** Description:    Sorts a list of integers seperated by spaces from
 **                 a the input file and outputs the resulting list to
 **                 the output file. found in Gaddis pg 608
 ** Parameters:     inFile     outFile
 **                 
 ** Pre-Conditions: inFile contains a list of integers, seperated by spaces
 **                 
 ** Post-Conditions: outFile contains a list of integers, seperated by spaces
                     in ascending order                   
 ** Returns:        output list with ascending order of integers
 *********************************************************************/



void bubbleSort(const string inFile, const string outFile)
{
    cout << "Bubblesort " << inFile << endl;
                 

    // open the file 
    std::ifstream in;
    Utility::open_inFile(in, inFile);

    // value valList
    vector<int> valList;

    // store the file
    int inp;
    while (in >> inp)
        valList.push_back(inp);

    // done with input
    in.close();


    // verification of vector
    cout << "File contains: ";
    int numVal = valList.size();
    for (int i = 0; i < numVal; ++i)
        cout << valList[i] << ' ';
    cout << endl;

    // the algorithm
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 0; i < numVal - 1; ++i)
            if (valList[i] > valList[i + 1])
            {
                std::swap(valList[i], valList[i + 1]);
                swapped = true;
            }
    }

    // open output file handle
    std::ofstream out;
    Utility::open_outFile(out, outFile);

    // verify vector and write out
    cout << "Sorted contents: ";
    for (int i = 0; i < numVal; ++i)
    {
        cout << valList[i] << ' ';
        out << valList[i] << ' ';
    }
    cout << endl;

    // done 
    out.close();
}

    

