#pragma once     // included by Visual Studio 
#include <string>
using namespace std;
class Employee
{
    // data (properties)
private: // hidden (NOT accessible to others)
    string firstName;
    string lastName;
    int monthlySalary;

    // functions (methods)
public: // visible (accessible to others)
    Employee();
    Employee(string fn, string ln, int ms);

    //Get functions for each data member
    string getFn();
    string getLn();
    int getSalary();

    //Set functions for each data member
    void setFn(string fn);
    void setLn(string ln);
    void setSalary(int salary);
};
