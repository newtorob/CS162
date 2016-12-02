/*
    Robert Newton
    CS 162
    readMatrix -- finding the determinant of a 2x2/3x3 matrix
*/

#include <iostream>
#include "readMatrix.h"
#include "determinant.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

    int sqSize, detMatrix;


    cout<< "Please enter your square size, it must be 2 or 3: " << endl;

    cin >> sqSize;

    if((sqSize != 2) && (sqSize != 3)) 

        cout << "Enter either 2 or 3" <<endl;

    else cout << "Enter in the " << sqSize*sqSize << " values of your matrix, seperate them by spaces." << endl;


    int **begMatrix = new int*[sqSize];

    for (int i = 0; i < sqSize; i++) {

        begMatrix[i] = new int[sqSize];
    }

    readMatrix(begMatrix, sqSize); //fills the array 

    detMatrix = determinant(begMatrix, sqSize);

    cout<<endl << "Here is the original matrix: " <<endl <<endl;


    for (int i = 0; i < sqSize; i++) {

        for (int j = 0; j < sqSize; j++) {
            cout << begMatrix[i][j] << " ";
        }
        cout << endl;
    } 

    cout << "The determinant is: " << detMatrix << endl;

    for (int i = 0; i < sqSize; ++i)
    {
        delete[] begMatrix[i];
    }
    delete[] begMatrix;

    return 0;

}