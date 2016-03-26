#pragma once
#include <string>

using namespace std;

class Employee
{
protected:
	const string _name;
	const int _staffNumber;
	float _salary;

public:
	Employee(string, int, int);
	const virtual string name();
	const virtual unsigned staffNumber();
	virtual float salary();
	~Employee();
};