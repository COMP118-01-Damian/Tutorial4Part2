/** \file Matrix.cpp
* \author Damian Bakowski
* \version 0.1
* \date 08.05.2023
*/
#include "Matrix.h"
#include <iostream>
#include <cassert>

using namespace std;
using namespace std;
/**
* <code>printMatrix</code> shows the matrix
* <BR>
* @param mat The matrix itself
* @param maxRow the number of rows of the matrix
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	cout << "\nContent of Matrix is:";
	for (int i = 0; i < maxRow; i++) {
		cout << "\nR" << i + 1 << ": ";
		for (int j = 0; j < MAX_COL; j++) {
			cout << mat[i][j] << "\t";
		}
	}
}

/**
* <code>sumOfCol</code> Shows the sum of column values
* <BR>
* @param mat The matrix itself
* @param column The number of columns in matrix
* @param maxRow The number of rows of the matrix
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {

	assert(column >= 0 && column < MAX_COL);
	assert(maxRow > 0);

	double sum = 0;


	for (int i = 0; i < maxRow; i++) {

		sum += mat[i][column];
	}

	return sum;
}