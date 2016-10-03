/*
	Robert Newton
	CS 162
	readMatrix -- finding the determinant of a 2x2/3x3 matrix
*/
#include "determinant.h"
#include <iostream>



int determinant(int *matrix[], int detSize) {

    int determinant;
    if(detSize == 2) {

        determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix [1][0]);


    }

    else if (detSize ==3) {

        int val1, val2, val3;

        val1 = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix [2][1]));
        
        val2 = matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix [1][2]));
        
        val3 = matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix [1][1]));


        determinant = val1 - val2 + val3;

    }

    return determinant;
}
