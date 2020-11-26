#include <iostream>
#include "Employee.h"
using namespace std;

void calYearlySalary() {
	//Creating two employee objects
	Employee e1("Derek", "Qua", 3000);
	Employee e2("James", "Lim", 4000);

	//Display each object's yearly salary
	cout << e1.getFn() << " " << e1.getLn() << "'s yearly salary is $" << e1.getSalary() << endl;
	cout << e2.getFn() << " " << e2.getLn() << "'s yearly salary is $" << e2.getSalary() << endl;

	//give 10% raise to each employee
	e1.setSalary(1.10 * e1.getSalary());
	e2.setSalary(1.10 * e2.getSalary());

	//Display each object's yearly salary
	cout << e1.getFn() << " " << e1.getLn() << "'s yearly salary is $" << e1.getSalary() << endl;
	cout << e2.getFn() << " " << e2.getLn() << "'s yearly salary is $" << e2.getSalary() << endl;
}