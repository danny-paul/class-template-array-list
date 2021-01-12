template <class Item>
myList<Item>::myList() {
	count = 0;
	size = 20;
	for (int i = 0; i < size; i++)
		array[i] = 0; //default values
}

template <class Item>
bool myList<Item>::search(const Item& entry) {
	for (int i = 0; i < size; i++)
		if (entry == array[i]) {
			count++;
		}

	if (count > 0) {
		count = 0; //reset to 0 for future searches
		return true;
	}
	else
		return false;
}

template <class Item>
void const myList<Item>::print() {
	cout << "[";
	for (int i = 0; i < size; i++)
		if (i != size - 1) {cout << array[i] << ", ";}
		else { cout << array[i]; }
	cout << "]" << endl;
		
}

template <class Item>
void myList<Item>::insert(const Item& entry, const int position) {
	Item tempDataHold1, tempDataHold2;
	if (position == size - 1) {
		array[size - 1] = entry; //removes last entry if adding to end
	}
	else {
		tempDataHold1 = entry;//primes
		for (int i = position; i < size; i++) {
			tempDataHold2 = array[i];
			array[i] = tempDataHold1;
			tempDataHold1 = tempDataHold2;
		}

	}
}

template <class Item>
void myList<Item>::remove(const int position) {
	array[position] = 0;
}

template <class Item>
void myList<Item>::add(const Item& entry) {
	this->insert(entry, 0);
}

template <class Item>
void myList<Item>::replace(const Item& entry, const int position) {
	array[position] = entry;
}