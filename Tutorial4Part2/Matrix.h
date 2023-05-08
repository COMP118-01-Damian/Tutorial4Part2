/** \file Matrix.h
* \brief program to check bugs
* \details The program is inteded to have some logical bugs and the programmer must track them
* \author Damian Bakowski
* \version 0.1
* \date 05.08.2023
*/

#pragma once
#ifdef MATRIX_H
#define MATRIX_H
#endif // MATRIX_H
//Constants
const int MAX_COL = 4;
const int MAX_ROW = 4;

//Function prototypes
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillWithGivenNum(double mat[][MAX_COL], const int maxRow);
double getMatrixCell(const double mat[][MAX_COL], const int maxRow, const int row, const int col);
