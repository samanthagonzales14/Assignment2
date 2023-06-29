#pragma once
#include "Employee.h"

class Nonprofessional : public Employee {
public:
	Nonprofessional(string n, float r, int w, float h);
	float calcSalary() const override;
	float calcHealth() const override;
	double calcVacation() const override;
	void print() const override;
};
