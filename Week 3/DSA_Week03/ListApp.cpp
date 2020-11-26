// DSA_Week03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    ////2a
    List nameList;
    ////2b
    nameList.add("Annie");
    ////2c
    nameList.add("Jacky");
    ////2d
    nameList.add("Wendy");
    ////2e
    nameList.print();
    cout << "========================" << endl;
    ////2f
    nameList.add(2, "Brenda");
    ////2g
    nameList.print();
    cout << "========================" << endl;
    ////2h
    nameList.remove(3);
    ////2i
    nameList.print();
    cout << "========================" << endl;
    ////2j
    nameList.remove(1);
    ////2k
    nameList.print();

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
