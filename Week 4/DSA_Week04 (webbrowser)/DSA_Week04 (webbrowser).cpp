// DSA_Week04 (webbrowser).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "stack.h"

int main()
{
    Stack back_stack;
    string temp;
    string website;
    Stack front_stack;
    while (temp != "0")
    {
        cout << "[1] Visit URL\n[2] Back\n[3] Forward\n[0] Exit\nYour Choice: ";
        cin >> temp;
        if (temp == "0") {
            break;
        }
        else if (temp == "1") {
            //Clear frontstack
            Stack empty;
            front_stack = empty;

            cout << "Website: ";
            cin >> website;
            back_stack.push(website);
        }
        else if (temp == "2") {
            if (back_stack.isEmpty() == false) {
                //Add latest website to frontstack
                back_stack.getTop(website);
                front_stack.push(website);

                //Remove latest website from backstack
                back_stack.pop(website);
                //Get next latest website from backstack
                back_stack.getTop(website);
                cout << "Website: " << website << endl;
            }
            else {
                cout << "You have reached the end" << endl;
            }
      
        }
        else if (temp == "3") {
            if (front_stack.isEmpty() == false) {
                //Get latest website
                front_stack.getTop(website);
                cout << "Website: " << website << endl;
                back_stack.push(website);
                front_stack.pop(website);
            }
            else {
                cout << "You have reached the most recent website that you have visited." << endl;
            }

        }
        else {
            cout << "Invalid Input, please try again." << endl;
            continue;
        }
            
    }
    return 0;

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
