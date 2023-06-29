#include "LinkedListFunctions.h"

LinkedList::LinkedList() { head = nullptr, tail = nullptr, num_items = 0; }

void LinkedList::push_front(int d){
	Node* newNode = new Node;	// create new node
	newNode->data = d;			// set data in new node
	newNode->next = head;		// set new next pointer to the head which will now become second in list
	head = newNode;				// set the head of the list to the new node
	++num_items;				// increment num_items in list

	if (num_items == 1) {		// if only one item in list, tail and head are same
		tail = head;
	}
}
void LinkedList::push_back(int d) {
	Node* newNode = new Node;	// create new node
	newNode->data = d;			// set data in new node
	newNode->next = nullptr;	// set the next pointer to null
	if (num_items == 0) {		// if list is empty head and tail equal new node
		head = newNode;
		tail = head;
	}
	else {
		tail->next = newNode;	// otherwise tail next pointer is the new node
		tail = newNode;
	}
	++num_items;				// increment num_items in list
}
void LinkedList::pop_front(){
	if (head == nullptr) { // if the head is null then print this message
		cout << "The list is empty!\n";
		return;
	}
	else {
		Node* delNode = head;	// create new node to delete
		head = head->next;		// set new head to the next item in list
		delete delNode;			// deallocate space
		delNode = nullptr;		// set null
		--num_items;			// decrement num_items in list
	}
}
void LinkedList::pop_back(){
	if (head == nullptr) { // if the head is null then print this message
		cout << "The list is empty!\n";
		return;
	}
	if (head->next == nullptr) {	// if only one item in list delete and set null
		delete head;
		head = nullptr;
		--num_items;				// decrement num_items
	}
	else {
		Node* temp = head;		// set temp node to head pointer
		Node* prev = nullptr;
		while (temp->next != nullptr) {	// iterate through list to find last item
			prev = temp;
			temp = temp->next;					
		}
		delete temp;			// delete last item in list
		temp = nullptr;
		tail = prev;			// set tail to previous item  in list
		tail->next = nullptr;	// set to nullptr
		--num_items;			// decrement num_items in list
	}
}
int LinkedList::front(){
	if (head == nullptr) { // if the head is null then print this message
		cout << "The list is empty!\n";
	}
	else {
		return head->data;	// otherwise return data in head pointer
	}
}
int LinkedList::back(){
	if (head == nullptr) { // if the head is null then print this message
		cout << "The list is empty!\n";
	}
	else {
		return tail->data;	// otherwise return data in tail pointer
	}
}
void LinkedList::empty(){
	Node* temp = new Node;		// create temp node to delete
	while (head != nullptr) {	// while head pointer is not null
		temp = head;			// set the temp node to head pointer
		head = head->next;		// set the head to the next item in list
		delete temp;			// delete the temp node/current head until head is null
	}
	temp = nullptr;				// set temp to null
	cout << "List has been successfully emptied.\n";
}
void LinkedList::insert(size_t index, const int& d){

	if (index < 0 || index > (num_items - 1)) {	// if index is less than 1 or greater than num_items in list print error message
		cout << "Invalid index\n";
	}
	else if (index == 0) {	// if index equals 0, insert at beginning of list
		push_front(d);
	}
	else if (index == (num_items - 1)) {	// if index equals the num_items - 1 in list, insert at end of list
		push_back(d);
	}
	else {							
		Node* newNode = new Node;	// otherwise create new node with data and set next pointer to null
		newNode->data = d;
		newNode->next = nullptr;

		Node* temp = head;			// create temp pointer to traverse through list
		while (--index > 0) {		// find index position in list
			temp = temp->next;		// set temp to next item until index is found
		}
		newNode->next = temp->next;	// set next pointer to item that was at chosen index and add new item to list
		temp->next = newNode;
		num_items++;				// increment num_items in list
	}
}
bool LinkedList::remove(size_t index) {
	if (index < 0 || index > (num_items - 1)) {	// if index is less than 1 or greater than num_items in list print error message
		return false;
	}
	else if (index == 0) {
		Node* delNode = head;	// create new node to delete
		head = head->next;		// set new head to the next item in list
		delete delNode;			// deallocate space
		delNode = nullptr;		// set null
		--num_items;			// decrement num_items in list
		return true;	
	}
	else {
		Node* temp = head;			// create temp pointer to traverse through list
		while(--index > 0) {
			temp = temp->next;		// find index position in list
		}
		Node* nextNode = temp->next->next; // set next node to node next to pointer of node to be delete 
		delete temp->next;			// delete node
		temp->next = nextNode;		// set new next node
		num_items--;				// decrement num_items
		return true;				// return true
	}
}
size_t LinkedList::find(const int& d){
	Node* searchNode = head;	// node to traverse through list
	int count = -1;				// counter to count the index starting from 0
	while (searchNode) {
		++count;				// increment count
		if (searchNode->data == d) {	// if item found
			return count;				// return index
		}
		searchNode = searchNode->next;	// update next node
	}
	return num_items;	// if item not found return size of list
}
void LinkedList::display_list() {
	Node* temp = head;		// node to traverse through list
	while (temp != nullptr) {
		cout << temp->data << " ";	// print data in node
		temp = temp->next;			// update next node
	}
	cout << endl;
}
