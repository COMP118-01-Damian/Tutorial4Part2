/** \file Matrix.cpp
* \brief program to check bugs
* \details The program is inteded to have some logical bugs and the programmer must track them
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
* <code>sumOfCol</code> Shows the sum of column values
* <BR>
* @param mat The matrix itself
* @param column The number of columns in matrix
* @param maxRow The number of rows of the matrix
* @return sum Sum of column values
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

/**
* <code>sumOfRow</code> Shows the sum of row values
* <BR>
* @param mat The matrix itself
* @param row The number of columns in matrix
* @param maxRow The number of rows of the matrix
* @return sum Sum of column values
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert(row >= 0 && row < MAX_ROW);
	assert(maxRow > 0);

	double sum = 0;


	for (int i = 0; i < maxRow; i++) {

		sum += mat[row][i];
	}

	return sum;
}

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
* <code>fillWithRandomNum</code> fills matrix with random values
* <BR>
* @param mat The matrix itself
* @param maxRow the number of rows of the matrix
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[i][j] = rand()%1000;
		}
	}
}

/**
* <code>fillWithGivenNum</code> fills matrix with values entered by user
* <BR>
* @param mat The matrix itself
* @param maxRow the number of rows of the matrix
*/
void fillWithGivenNum(double mat[][MAX_COL], const int maxRow)
{
	char val;
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			cin >> val;
			mat[i][j] = val;
		}
	}
}

/**
* <code>getMatrixCell</code> prints one value that corresponds with matrix cell by given row and column
* <BR>
* @param mat The matrix itself
* @param maxRow the number of rows of the matrix
* @param col Column to read value
* @param row Row to read value
*/
double getMatrixCell(const double mat[][MAX_COL], const int maxRow, const int row, const int col)
{
	return mat[row - 1][col - 1];
}

/**
* <code>reverseValuesOrder</code> reverse order of values in matrix
* <BR>
* @param mat The matrix itself
* @param maxRow the number of rows of the matrix
*/
void reverseValuesOrder(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			mat[MAX_ROW-i][MAX_COL-j] = mat[i][j];
		}
	}
}

/**
*
*
* WARNING: Caller must use delete[] on the return array
*
* @return Returns the sums of all columns as a dynamically created array. Remember to delete[]
*/
double* sumOfCols(const double mat[][MAX_COL], const int maxRow) {
	double* sums = new double[MAX_COL] {0};

	for (int i = 0; i < MAX_COL; ++i) {
		sums[i] = sumOfCol(mat, i, maxRow);
	}
	return sums;
	delete sums;
}

/**
*
*
* WARNING: Caller must use delete[] on the return array
*
* @return Returns the sums of all rows as a dynamically created array. Remember to delete[]
*/
double* sumOfRows(const double mat[][MAX_COL], const int maxCol)
{
	double* sums = new double[MAX_ROW] {0};

	for (int i = 0; i < MAX_ROW; ++i) {
		sums[i] = sumOfRow(mat, i, maxCol);
	}
	return sums;
	delete sums;
}