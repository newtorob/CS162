/*
	Robert Newton
	CS 162
	readMatrix -- finding the determinant of a 2x2/3x3 matrix
*/

#include <iostream>
#include "readMatrix.h"

using std::cout;
using std::cin;
using std::endl;


void readMatrix(int *matrix[] , int readSize) {

    for (int i=0; i<readSize; i++) {

        for (int j = 0; j < readSize; j++){
            
            cin >> matrix[i][j];
        
        }


    }

}