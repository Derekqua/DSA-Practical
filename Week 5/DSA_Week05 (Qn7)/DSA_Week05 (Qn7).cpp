// DSA_Week05 (Qn7).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime> 
#include <string>
#include"Queue.h"
#include"Customer.h"
#include<cstdlib>
    
int main()
{
    Queue q; //Initialize the queue to empty
    bool simulationNotDone = true;
    ItemType cServed;
    int min = 0;
    double totalServeTime = 0.00;
    int counter = 0;

    while (simulationNotDone) {
        min += 1; //Increment simulated time by one minute
        if (q.isEmpty() == false) {          
            q.getFront(cServed); //get first customer from queue
            cout << "Customer " << cServed.getName() << " was served in " << min- cServed.getQueueNum() << " mins(s)" << endl;
            totalServeTime += (min - cServed.getQueueNum()); //find total serve time in 10 mins
            q.dequeue(); // remove customer at the front of the queue
        }

        int k;
        srand(time(0));
        double random = (rand() % 100) + 1; // compute a random number k between 0 and 3
        if (random < 25) {
            k = 1;
        }
        else if (random < 50) {
            k = 2;
        }
        else {
            k = 0;
        }


        

        if (k == 1) {
            ItemType c1;
            string c1Name;
            cout << "Enter Customer name: ";
            cin >> c1Name;
            c1.setName(c1Name);
            c1.setQueueNum(min);
            q.enqueue(c1);//add one customer to the line
            counter += 1;
        }
        else if (k == 2) {
            ItemType c1;
            ItemType c2;
            string c1Name;
            string c2Name;
            cout << "Enter Customer name: ";
            cin >> c1Name;
            c1.setName(c1Name);
            c1.setQueueNum(min);
            q.enqueue(c1);
            
            cout << "Enter Customer name: ";
            cin >> c2Name;        
            c2.setName(c2Name);    
            c2.setQueueNum(min);
            q.enqueue(c2);
            counter += 2;
        }
        else {
            
        }
        
        //Display average time that a customer is needed at the 10th  min
        if (min %10 == 0) {
            double avg = totalServeTime/counter; //average time to be served
            cout << "In this 10-min period, the average time to be served = " << avg << " mins" << endl;
            break;
        }
        
        

           
    }

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
