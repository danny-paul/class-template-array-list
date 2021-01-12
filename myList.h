#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>

using namespace std;

template <class Item>
class myList {
public:
	myList();
	bool search(const Item& entry); //returns true if object found, false if not
	void const print();
	void insert(const Item& entry, const int); //inserts and shifts remaining trailing values. last value in series is lost
	void replace(const Item& entry, const int);
	void remove(const int);
	void add(const Item& entry); //adds to front, shifts trailing values
private:
	int size;
	Item array[20];
	int count;
};

#include "myList.cpp"

#endif
