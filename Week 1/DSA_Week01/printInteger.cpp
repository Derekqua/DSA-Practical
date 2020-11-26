#include <iostream>
#include "functions.h"
using namespace std;

void printInteger()
{
    int num;
    cout << "Enter a five-digit integer: ";
    cin >> num;

    //convert the number into digits
    int n1, n2, n3, n4, n5;
    n1 = num % 10;
    num /= 10;
    n2 = num % 10;
    num /= 10;
    n3 = num % 10;
    num /= 10;
    n4 = num % 10;
    num /= 10;
    n5 = num % 10;
    num /= 10;

    cout << n5 << "   " << n4 << "   " << n3 << "   " << n2 << "   " << n1 << "   " << endl;
}
