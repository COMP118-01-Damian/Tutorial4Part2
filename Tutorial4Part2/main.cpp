/** \file main.cpp
* \brief program to check bugs
* \details The program is inteded to have some logical bugs and the programmer must track them
* \author Damian Bakowski
* \version 0.1
* \date 08.05.2023
*/

#include <iostream>
#include "Matrix.h"
using namespace std;

//Contains user menu and handle user input for selected option
int main() {

    double mat[MAX_ROW][MAX_COL] = { 1, 2, 3, 4, 5 };
    int option = 0;
    int column, row;

    do {
        cout << "\n1): Print Matrix";
        cout << "\n2): Fill with random numbers";
        cout << "\n3): Sum of column";
        cout << "\n4): Sum of row";
        cout << "\n5): Fill with given numbers";
        cout << "\n6): Print value from given column and row";
        cout << "\n7): unimplemented feature - work in progress";
        cout << "\n8): Exit";
        cout << "\nEnter choice: ";
        cin >> option;

        switch (option) {

        case 1:
            printMatrix(mat, MAX_ROW);
            break;

        case 2:
            fillWithRandomNum(mat, MAX_ROW);
            break;

        case 3:

            do {
                cout << "\n Which column to sum up? (1 --" << MAX_COL << "): ";
                cin >> column;
            } while (column < 1 || column > MAX_COL);
            cout << "\nSum is: " << sumOfCol(mat, column - 1, MAX_ROW);
            break;

            sumOfCol(mat, column, MAX_ROW);
        case 4:
            do {
                cout << "\n Which row to sum up? (1 --" << MAX_ROW << "): ";
                cin >> row;
            } while (row < 1 || row > MAX_ROW);
            cout << "\nSum is: " << sumOfRow(mat, row - 1, MAX_COL);
            break;

            sumOfRow(mat, row, MAX_COL);
            break;
        case 5:
            fillWithGivenNum(mat, MAX_ROW);
            break;
        case 6:
            do {
                cout << "\n From which row print value? (1 --" << MAX_ROW << "): ";
                cin >> row;
            } while (row < 1 || row > MAX_ROW);
            do {
                cout << "\n From which column print value? (1 --" << MAX_COL << "): ";
                cin >> column;
            } while (column < 1 || column > MAX_COL);
            cout << "\nRow: " << row << ", Column: " << column << " = " << getMatrixCell(mat, MAX_ROW, row, column) << endl;
            break;
        case 7:
            break;
        case 8:
            break; //No code needed

        default:
            cerr << "\nWrong choice";
        }

    } while (option != 8);
}
