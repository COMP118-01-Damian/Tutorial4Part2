// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Matrix.h"
using namespace std;

//Contains user menu and handle user input for selected option
int main()
{
    char option;


    do {
        cout << "\n1) Sum matric rows";
        cout << "\n2) Sum matrix columns";
        cout << "\n3) Fill matrix with random numbers";
        cout << "\n4) Print matrix";
        cout << "\n5) unimplemented feature - work in progress";
        cout << "\n6) unimplemented feature - work in progress";
        cout << "\n7) unimplemented feature - work in progress";
        cout << "\n8) Quit";
        cout << "\nEnter a choice: ";

        cin >> option;

        switch (option) {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        case '6':
            break;
        case '7':
            break;
        default:
            cerr << "\nWrong choice!";
            break;
        }
    } while (option != '8');
}
