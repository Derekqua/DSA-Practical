#include "Functions.h"
#include <iostream>
using namespace std;

//Calculates the value of a given integer raised to the power of a second integer  
//param a – the base integer (to be raised to a power).
//param n – the power
//pre: a > 0
long power(int a, int n) {
	//base case what is the smallest n?
	if (n == 0)
		return 1;
	//recursive step
	else
		return a * power(a, n - 1);
}

void printBackward(int array[], int n)
{
	// base case What is the smallest n?
	if (n == 1)
		cout << array[n - 1] << endl;
	// recursive step
	else
	{
		cout << array[n - 1] << " "; // put space in between
		printBackward(array, n - 1);
	} // don’t need to write return because it is a void function  
}

int maxArray(int array[], int start, int end)
{
	// base case  What is the smallest array? Size 1 
	// how do you know the array is size 1?
	if (start == end) // eg. maxArray(array, 3,3)
		return array[start];
	// recursive step
	else
	{
		int mid = (start + end) / 2;
		// integer division gives int ans
		int leftMax = maxArray(array, start, mid);
		int rightMax = maxArray(array, mid + 1, end);
		int result = (leftMax > rightMax) ? leftMax : rightMax;
		return result;
	}
}

