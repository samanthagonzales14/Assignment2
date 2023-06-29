#include "Nonprofessional.h"

Nonprofessional::Nonprofessional(string n, float r, int w, float h) : Employee(n, r, w, h) {}
float Nonprofessional::calcSalary() const {
	return hoursWorked * rate;
}
float Nonprofessional::calcHealth() const {
	// employee contribution is rate * healthcare contribution * amount of hours worked
	return (rate * health) * hoursWorked;
}
double Nonprofessional::calcVacation() const {
	// hoursWorked / 40 hours to get amount of vacation hours
	return (hoursWorked / static_cast<double>(40));
}
void Nonprofessional::print() const {
	cout << "Employee name: " << name << endl;
	cout << "    Weekly pay: $" << calcSalary() << endl;
	cout << "    Weekly Healthcare Contributons: $" << calcHealth() << endl;
	cout << "    Weekly Earned Vacation Hours: " << fixed << setprecision(2) << calcVacation() << endl;
}