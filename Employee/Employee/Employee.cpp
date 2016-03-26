#include "Employee.h"

Employee::Employee(string _name, int _staffNumber, int _salary) : _name(_name), _staffNumber(_staffNumber)
{
	this->_salary = _salary;
}

const string Employee::name()
{
	return _name;
}

const unsigned Employee::staffNumber()
{
	return _staffNumber;
}

float Employee::salary()
{
	return _salary;
}

Employee::~Employee()
{
}
