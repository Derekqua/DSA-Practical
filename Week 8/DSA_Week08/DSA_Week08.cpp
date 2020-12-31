// DSA_Week08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Search.h"
using namespace std;
static int comparisons = 0;

int search(int dataArray[], int arraySize, int target) {
    for (int i = 0; i < arraySize; i++) {
        comparisons++;
        if (dataArray[i] == target) {
            return i;
        }
    }
    return -1;

}

int binarySearch(int dataArray[], int arraySize, int target) {
    int first = 0;
    int last = arraySize;
    while (first <= last) {
        int mid = (first + last) / 2;
        comparisons++;
        if (dataArray[mid] == target) {
            return mid;
        }
        else if (dataArray[mid] > target) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }
    return -1;
}

int recursiveSearch(int dataArray[], int arraySize, int start, int target) {
    if (start > arraySize - 1)
        return -1;
    else {
        if (dataArray[start] == target)
            return start;
        else {
            if (dataArray[start] > target)
                return -1;
            else {
                return recursiveSearch(dataArray, arraySize, start + 1, target);

            }
        }

    }
}

int recursiveBinarySearch(int dataArray[], int first, int last, int target) {
    if (first > last)
        return -1;
    else {
        int mid = (first + last) / 2;
        if (dataArray[mid] == target)
            return mid;
        else {
            if (dataArray[mid] > target)
                return recursiveBinarySearch(dataArray, first, mid - 1, target);
            else {
                return  recursiveBinarySearch(dataArray, mid + 1, last, target);
            }
        }

    }
}

int main()
{
    //Qn2
    int dataArray[1000];
    int y = 0;
    for (int i = 2; i <= 2000; i += 2) {
        dataArray[y] = i;
        y++;
    }
    cout << "Enter number to search :";
    int target;
    cin >> target;
    comparisons = 0;
    int check = search(dataArray, y, target);        //Normal search
    cout << "Sequential search : " << comparisons << endl;

    //display
    if (check == -1) {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;    
    }
    


    //Q3 iterative binary search
    comparisons = 0;
    binarySearch(dataArray, y, target);    //Binary search
    cout << "Binary Search :" << comparisons << endl;
   
    //display
    if (check == -1) {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    
    //Q8 & 9
    int result;
    result = recursiveSearch(dataArray, y, 0, target);
    cout << "Recursive search result :" << result << endl;

    result = recursiveBinarySearch(dataArray, 0, y, target);
    cout << "Recurive binary search result :" << result << endl;

    //display
    if (check == -1) {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
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
