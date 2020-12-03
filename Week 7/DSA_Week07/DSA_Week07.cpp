// DSA_Week07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	//Qn 1
	cout << "Qn 1\n====" << endl;
	int a = 5;
	if (a > 0) // a is checked once
		cout << power(a, 4) << endl;

	//Qn 2
	cout << "\nQn 2\n====" << endl;
	int array[] = {1, 2, 3, 4, 5 };
	printBackward(array, sizeof(array)/sizeof(array[0]));

	//Qn 3
	cout << "\nQn 3\n====" << endl;
	cout << maxArray(array, 0, sizeof(array) / sizeof(array[0])) << endl;
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
