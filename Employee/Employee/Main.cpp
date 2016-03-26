#include "Employee.h"
#include "SalaryEmployee.h"
#include "hourlyEmployee.h"
#include "CommissionEmployee.h"
#include <iostream>

using namespace std;

int main() {
	static int _numberOfEmployees = 3;
	Employee* employee[3];
	//SalaryEmployee salary(string("bob"), 1, 100);
	//hourlyEmployee hourly(string("sam"), 1, 100);
	//CommissionEmployee commission(string("Kevin"), 1, 100);
	employee[0] = new SalaryEmployee("bob", 1, 100);
	employee[1] = new hourlyEmployee("Kevin", 2, 1, 50, 2);
	employee[2] = new CommissionEmployee("Sue", 3, 1, 0.5, 1200);
	for (int i = 0; i < _numberOfEmployees; i++) {
		cout <<  employee[i]->name() << " " << employee[i]->staffNumber() << " " << employee[i]->salary() << endl;
	}
	return 0;
}