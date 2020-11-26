#include <iostream>
#include "functions.h"
using namespace std;

void pointerDemo()
{
	//2a
	int value1 = 200000;
	//2b
	int value2;
	//2c
	int* ptr;
	//2d
	ptr = &value1;
	//2e
	cout << "ptr = " << *ptr << endl;
	//2f
	value2 = *ptr;
	//2g same value as ptr?
	cout << "value 2 = " << value2 << endl;
	//2h
	cout << "Addres of value 1 = " << &value1 << endl;
	//2i no?
	cout << "Address of ptr = " << &ptr << endl;
	//2j
	ptr = &value2;
	//2k
	*ptr += 2000;
	//2i
	cout << "value 1 = " << value1 << endl;
	cout << "value 2 = " << value2 << endl;

	
}
