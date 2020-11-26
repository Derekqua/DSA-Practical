#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string n, string tel);

	//Get & Set functions for person
	void setName(string n);
	string getName();
	void setTelNo(string tel);
	string getTelNo();

private:
	string name;
	string telNo;
};


