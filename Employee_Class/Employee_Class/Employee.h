#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
protected:
	string name;
	float rate;
	int hoursWorked;
	float health;
	float vacation;
public:
	Employee();
	Employee(string n, float r, int w, float h);
	virtual float calcSalary() const = 0;
	virtual float calcHealth() const = 0;
	virtual double calcVacation() const = 0;
	virtual void print() const = 0;
};