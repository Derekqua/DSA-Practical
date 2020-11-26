#include "Employee.h"   
#include <iostream>
#include <string>
using namespace std;

Employee::Employee() {}
Employee::Employee(string fn, string ln, int ms) {
    firstName = fn;
    lastName = ln;
    monthlySalary = ms;
}

//Get functions for each data member
string Employee::getFn() {
    return firstName;
}
string Employee::getLn() {
    return lastName;
}
int Employee::getSalary() {
    return monthlySalary;
}

//Set functions for each data member
void Employee::setFn(string fn)
{
    firstName = fn;
}
void Employee::setLn(string ln) {
    lastName = ln;
}
void Employee::setSalary(int salary) {
    if (salary < 0) {
        salary = 0;
    }
    monthlySalary = salary;
}

