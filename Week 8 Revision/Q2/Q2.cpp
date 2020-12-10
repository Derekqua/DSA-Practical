// Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Test1SampleQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include "Queue.h"
#include "Customer.h"

using namespace std;

void registerCustomer(Queue& serviceQueue, int& queueNumber)
{
	string name;
	//to be implemented
	cout << "Please enter your name: ";
	cin >> name;
	Customer c(queueNumber, name);
	serviceQueue.enqueue(c);
	queueNumber++;

}

void nextCustomer(Queue& serviceQueue)
{
	//to be implemented
	Customer c;
	serviceQueue.dequeue(c);
	cout << "Queue Number: " << c.getQueueNumber() << endl;

}

void displayCount(Queue& serviceQueue)
{

	//to be implemented
	int count = 0;

	if (!serviceQueue.isEmpty()) {
		count++;
		Customer c;
		serviceQueue.dequeue(c);
		int firstQueueNumber = c.getQueueNumber();
		//adding back to queue
		serviceQueue.enqueue(c);
		serviceQueue.getFront(c);

		while (c.getQueueNumber() != firstQueueNumber) {
			count++;
			serviceQueue.dequeue(c);
			serviceQueue.enqueue(c);
			serviceQueue.getFront(c); //Get next customer
		}
	}
	cout << "Length of the queue is " << count << endl;
}

int main()
{
	Queue serviceQueue;
	int queueNumber = 0;
	registerCustomer(serviceQueue, queueNumber);

	nextCustomer(serviceQueue);


	displayCount(serviceQueue);



}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
