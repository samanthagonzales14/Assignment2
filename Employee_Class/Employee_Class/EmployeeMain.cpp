#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"
#include <vector>

int main() {
	vector<Employee*> myEmployees;		// store employees into vector of employee type
	Professional* pro1 = new Professional("Diana", 35, 40, 0.12); // professional instance
	Nonprofessional* nonPro1 = new Nonprofessional("Alyssa", 25, 24, 0.10); // nonprofessional instance

	myEmployees.push_back(pro1);	// add employee to vector
	myEmployees.push_back(nonPro1); // add employee to vector

	for (int i = 0; i < myEmployees.size(); i++) {
		myEmployees.at(i)->print();		// print each employee in vector
	}
	
	return 0;
}