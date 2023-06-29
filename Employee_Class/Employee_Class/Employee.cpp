#include "Employee.h"

Employee::Employee() {
	name = "unknown";
	rate = 0;
	hoursWorked = 0;
	health = 0;
	vacation = 0;
}
Employee::Employee(string n, float r, int w, float h) {
	this->name = n;
	this->rate = r;
	this->hoursWorked = w;
	this->health = h;
}