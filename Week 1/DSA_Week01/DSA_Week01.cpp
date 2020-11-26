// DSA_Week01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"
#include "Employee.h"
using namespace std;

int main()
{
    //Q1
    printInteger();
    //Q2
    pointerDemo();
    //Q3
    int x = 30;
    int y;
    y = x;
    changeValue(x, &y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    //x is the same but y is diff with 10 added to the value number x is already declared? 
    //Q4
    calYearlySalary();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
