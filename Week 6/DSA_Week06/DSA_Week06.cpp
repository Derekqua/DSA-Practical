// DSA_Week06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Dictionary.h"
using namespace std;

int main()
{
    //2a
    Dictionary phoneBook;
    //2b
    phoneBook.add("Pamela", "64606722");
    //2c
    phoneBook.add("PohSeng", "64608687");
    //2d
    phoneBook.add("Wesley", "64607237");
    //2e
    phoneBook.add("WeeChong", "64606854");
    //2f
    cout << "Print 01" << endl; 
    phoneBook.print();
    //2g
    phoneBook.add("Eugene", "64608256");
    //2h
    phoneBook.add("Saiful", "64606206");
    //2i
    cout << "Print 02" << endl;
    phoneBook.print();
    //2j
    phoneBook.add("PohSeng", "12345678");
    //2k
    phoneBook.remove("Eugene");
    //2l
    cout << "Print 03" << endl;
    phoneBook.print();
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
