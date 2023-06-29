#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};
class LinkedList {
private:
	Node* head;
	Node* tail;
	int num_items;
public:
	LinkedList();
	void push_front(int d);
	void push_back(int d);
	void pop_front();
	void pop_back();
	int front();
	int back();
	void empty();
	void insert(size_t index, const int& d);
	bool remove(size_t index);
	size_t find(const int& d);
	void display_list();
};