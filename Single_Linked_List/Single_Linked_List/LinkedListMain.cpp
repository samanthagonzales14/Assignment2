#include "LinkedListFunctions.h"
using namespace std;

int main() {
	LinkedList list1;

	cout << "Push_back 2, 10, 4, 9, push_front 5:\n";
	list1.push_back(2);
	list1.push_back(10);
	list1.push_back(4);
	list1.push_back(9);
	list1.push_front(5);
	list1.display_list();

	cout << "\nPop_front:\n";
	list1.pop_front();
	list1.display_list();

	cout << "\nPop_back:\n";
	list1.pop_back();
	list1.display_list();

	cout << "\nPush_back 6, 7, 1, 3:\n";
	list1.push_back(6);
	list1.push_back(7);
	list1.push_back(1);
	list1.push_back(3);
	list1.display_list();

	cout << "\nDisplay front:\n";
	cout << list1.front() << endl;

	cout << "\nDisplay back:\n";
	cout << list1.back() << endl;

	cout << "\nInsert 8 at index 2:\n";
	list1.insert(2,8);
	list1.display_list();

	cout << "\nRemove number at index 2 (display 0- false, 1-true):\n";
	cout << list1.remove(2) << endl;
	list1.display_list();

	cout << "\nFind number 8 in list (display index if found, otherwise display size of list):\n";
	cout << list1.find(8) << endl;

	cout << "\nFind number 7 in list (display index if found, otherwise display size of list):\n";
	cout << list1.find(7) << endl;

	cout << "\nEmpty list\n";
	list1.empty();
	list1.display_list();

	return 0;
}