#include "Dictionary.h"
// constructor
Dictionary::Dictionary() {
	size = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		items[i] = NULL;
	}
}

// destructor
Dictionary::~Dictionary() {
	for (int i = 0; i < MAX_SIZE; i++) {
		if (items[i] != NULL) {
			Node* current = items[i];
			Node* previous = NULL;
			while (current != NULL) {
				previous = current;
				current = current->next;
				delete previous;
			}
		}
	}
	size = 0;
}

int charvalue(char c)
{
	if (isalpha(c))
	{
		if (isupper(c))
			return (int)c - (int)'A';
		else
			return (int)c - (int)'a' + 26;
	}
	else
		return -1;
}

int Dictionary::hash(KeyType key) {
	int total = charvalue(key[0]);

	for (int i = 1; i < key.size(); i++)
	{
		if (charvalue(key[i]) < 0)  // not an alphabet
			continue;
		total = total * 52 + charvalue(key[i]);

		total %= MAX_SIZE;
	}

	return total;
}

// add a new item with the specified key to the Dictionary
// pre : none
// post: new item is added to the Dictionary
// size of Dictionary is increased by 1
bool Dictionary::add(KeyType newKey, ItemType newItem) {
	//Compute the index using hash funtion
	int index = hash(newKey);

	//Get the node from items
	Node* currentPtr = items[index];

	//Create a new node
	Node* newNode = new Node();

	//Set Items and keys into the newNode
	newNode->item = newItem;
	newNode->key = newKey;
	newNode->next = NULL;

	//Check if list at index is empty  
	if (currentPtr == NULL) {
		//Set list at index to point to new node
		items[index] = newNode;
	}
	else {

		if (currentPtr->key == newKey) {
			return false;
		}
		while (currentPtr->next != NULL) {
			currentPtr = currentPtr->next;
			if (currentPtr->key == newKey) {
				return false;
			}
		}

		//set the next to the newNode
		currentPtr->next = newNode;
	}


	size += 1;
	return true;
}

// remove an item with the specified key in the Dictionary
// pre : key must exist in the Dictionary
// post: item is removed from the Dictionary
//       size of Dictionary is decreased by 1
void Dictionary::remove(KeyType key) {
	int index = hash(key);

	if (items[index] != NULL) {
		if (items[index]->key == key) {
			items[index] = items[index]->next;
		}
		else {
			Node* current = items[index];
			while (current != NULL) {
				if (current->next->key == key) {
					Node* temp = current->next;
					current->next = current->next->next;
					temp->next = NULL;
					delete temp;
				}

				current = current->next;
			}

		}
	}

	size--;

}


// get an item with the specified key in the Dictionary (retrieve)
// pre : key must exist in the dictionary
// post: none
// return the item with the specified key from the Dictionary
ItemType Dictionary::get(KeyType key) {

	ItemType item;

	//Compute the index using hash funtion
	int index = hash(key);

	Node* getNode = items[index];

	//Check if item is not empty
	if (getNode != NULL) {
		Node* current = getNode;
		//Traverse through the node to find the key
		while (current)
		{
			if (current->key == key) {
				return current->item;
			}

			current = current->next;
		}

	}

	return item;
}

// check if the Dictionary is empty
// pre : none
// post: none
// return true if the Dictionary is empty; otherwise returns false
bool Dictionary::isEmpty() {
	if (size == 0) {
		return true;
	}
	return false;
}

// check the size of the Dictionary
// pre : none
// post: none
// return the number of items in the Dictionary
int Dictionary::getLength() { return size; }

//------------------- Other useful functions -----------------

// display the items in the Dictionary
void Dictionary::print() {
	for (int i = 0; i < MAX_SIZE; i++) {

		Node* current = items[i];
		if (current != NULL) {
			while (current) {
				cout << current->key << ": " << current->item << " -> ";
				current = current->next;
			}
		}
	}
	cout << endl;
}



// void replace(KeyType key, ItemType item);
// bool contains(KeyType key);