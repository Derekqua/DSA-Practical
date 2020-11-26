 #include "Person.h"   
#include <iostream>
#include <string>
using namespace std;

Person::Person() {}
Person::Person(string n, string tel) {
	name = n;
	telNo = tel;
}

void Person::setName(string n) {
	name = n;
}

string Person::getName() {
	return name;
}

void Person::setTelNo(string tel) {
	telNo = tel;
}

string Person::getTelNo() {
	return telNo;
}