#include"Queue.h"
// constructor
Queue::Queue() {
	frontNode = NULL;
	backNode = NULL;
}

Queue::~Queue() {
	//remove all Nodes from the queue
	Node* temp = frontNode;
	while (temp != NULL)
	{
		frontNode = frontNode->next;
		temp->next = NULL;
		delete temp;
		temp = frontNode;
	}
}

// enqueue (add) item at the back of queue
bool Queue::enqueue(ItemType item) {
	Node* node = new Node;
	node->item = item;
	node->next = NULL;
	if (isEmpty()) {
		frontNode = node;
	}
	else {
		backNode->next = node;
	}
	backNode = node;
	return true;
}

// dequeue (remove) item from front of queue
bool Queue::dequeue() {
	if (frontNode == backNode) {
		frontNode = NULL;
		backNode = NULL;
	}
	else {
		Node* temp = frontNode;
		frontNode = frontNode->next;
		temp->next = NULL;
		delete temp;
	}
	return true;
}

// dequeue (remove) and retrieve item from front of queue
bool Queue::dequeue(ItemType& item) {
	if (frontNode == backNode) {
		frontNode = NULL;
		backNode = NULL;
	}
	else {
		Node* temp = frontNode;
		frontNode = frontNode->next;
		temp->next = NULL;
		delete temp;
		item = frontNode->item; //retrieve item
	}
	return true;
}

// retrieve (get) item from front of queue
void Queue::getFront(ItemType& item) {
	if (!isEmpty()) {
		item = frontNode->item;
	}
}

// check if the queue is empty
bool Queue::isEmpty() {
	bool check = false;
	if (frontNode == NULL) {
		check = true;
	}
	return check;
}

// display items in queue from front to back
void Queue::displayItems() {
	Node* temp;
	if (!isEmpty()) {
		temp = frontNode;
		while (temp != NULL) {
			cout << temp->item << "->";
			temp = temp->next;
		}
		cout << endl;
	}
	else {
		cout << "Queue is empty" << endl;
	}
}