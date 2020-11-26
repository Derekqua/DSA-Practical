// DSA_Week05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "stack.h"
#include"Queue.h"
int main()
{
    //5a
    Queue q;
    ItemType item;
    //5b
    item = 'a';
    q.enqueue(item);
    //5c
    item = 'b';
    q.enqueue(item);
    //5d
    q.getFront(item);
    cout << "Front of q is '" << item << "'." << endl;
    //5e
    cout << "============" << endl;
    q.displayItems();
    //5f
    q.dequeue();
    //5g
    cout << "============" << endl;
    q.displayItems();
    
    ///////////////////////////////////////////////////////////////////////
    //6a read user input
    string input;
    cout << "Determining if it is palindrome" << endl;
    cout << "Enter a word:";
    cin >> input;

    //6b

    //returns boolean 
    //determines whether str is a palindrome
    //create an empty queue and an empty stack
    Queue aQueue;
    Stack aStack;

    //insert each character of the string into both
    //the queue and the stack
    int length = input.length();
    for (int i = 0;i<length;i++)
    {
        char nextChar = input[i];
        aQueue.enqueue(nextChar);
        aStack.push(nextChar);
    }

    //compare the queue characters with the stack
    //characters
    bool charactersAreEqual = true;
    ItemType queueFront;
    ItemType stackTop;
    while (aQueue.isEmpty() == false && charactersAreEqual)
        {
            aQueue.getFront(queueFront);
            aStack.getTop(stackTop);

            if (queueFront == stackTop)
            {
                aQueue.dequeue();
                aStack.pop();
            }
            else
                charactersAreEqual = false;
        }

    if (charactersAreEqual == true) {
        cout << "'" << input << "' is a palindrome." << endl;
    }
    else {
        cout << "'" << input << "' is not a palindrome." << endl;
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
