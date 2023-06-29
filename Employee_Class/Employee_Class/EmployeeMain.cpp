#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

int main() {
	Professional pro1("Diana", 35, 40, 0.12); // professional instance
	Nonprofessional nonPro1("Alyssa", 25, 24, 0.10); // nonprofessional instance

	pro1.print();
	nonPro1.print();

}