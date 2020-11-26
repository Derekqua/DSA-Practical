#include "stack.h"
//constructor
Stack::Stack() { topNode = NULL; }
//destructor
Stack::~Stack() {
	//remove all Nodes from the stack
	Node* temp = topNode;
	while (temp != NULL)
	{
		topNode = topNode->next;
		temp->next = NULL;
		delete temp;
		temp = topNode;
	}
}

//check if the stack is empty
bool Stack::isEmpty() {
	bool empty = false;
	if (topNode == NULL) {
		empty = true; //empty
	}
	return empty;
}

//push item on top of the stack
bool Stack::push(ItemType& item) {
	Node* node = new Node; //Crete a new node
	node->item = item; //Store the item to the node
	node->next = NULL; //Initialise the next pointer to null
	node->next = topNode; //Set new node's next pointer to point to node to by topNode
	topNode = node; //set topNode (pointer) to point to new node
	return true;
}

//pop item from top of stack
bool Stack::pop() {
	if (!isEmpty()) {
		Node* temp = topNode; //set temp (pointer) point to the top node
		topNode = topNode->next;//make topNode (pointer) point to the next node instack
		temp->next = NULL; //make rmeoved node's next (pointer) to null
		delete temp; //deallocate memory from removed node
	}
	return true;
}

//retrieve and pop item from top of stack
bool Stack::pop(ItemType& item) {
	if (!isEmpty()) {
		Node* temp = topNode;
		topNode = topNode->next;
		temp->next = NULL;
		delete temp;
		item = topNode->item; //retrieve item
	}
	return true;
}

//retrieve item from top of stack
void Stack::getTop(ItemType& item) {
	if (!isEmpty()) {
		item = topNode->item;
	}
}

//display items in stack in order
void Stack::displayInOrder() {
	Node* temp;
	if (!isEmpty()) {
		temp = topNode;
		while (temp != NULL) {
			cout << temp->item << "->";
			temp = temp->next;
		}
		cout << endl;
	}
	else {
		cout << "Stack is empty" << endl;
	}

}

//display items in stack in order of insertion
void Stack::displayInOrderOfInsertion() {
	Stack InOrder;
	Node* temp;
	if (!isEmpty()) {
		temp = topNode;
		while (temp != NULL) {
			InOrder.push(temp->item); //push item starting from the top into temporary stack
			temp = temp->next;
		}
	}
	else {
		cout << "Stack is empty" << endl;
	}
	InOrder.displayInOrder();
}
