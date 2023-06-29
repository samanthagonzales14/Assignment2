#include "Professional.h"

Professional::Professional(string n, float r, int w, float h) : Employee(n, r, w, h) {
	this->hoursWorked = 40;
	this->vacation = 10;
}
float Professional::calcSalary() const {
	return hoursWorked * rate;	// hours worked times hourly wage to get weekly rate
}
float Professional::calcHealth() const {
	// calculate weekly healthcare contributions based on hourly rate * 40 hours a week
	return (rate * hoursWorked) * health;
}
double Professional::calcVacation() const {
	// 2080 hours calculated for 40 hours/week for 52 weeks a year. With an annual 10 day vacation period
	return (hoursWorked / static_cast<double>(2080)) * vacation;
}
void Professional::print() const {
	cout << "Employee name: " << name << endl;
	cout << "    Weekly pay: $" << calcSalary() << endl;
	cout << "    Weekly Healthcare Contributons: $" << calcHealth() << endl;
	cout << "    Weekly Earned Vacation Days: " << fixed << setprecision(2) << calcVacation() << endl;
}