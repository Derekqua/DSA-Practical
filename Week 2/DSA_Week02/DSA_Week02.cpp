// DSA_Week02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  

#include <iostream>
#include "Person.h"
#include "List.h"
#include <iomanip>
using namespace std;

int main()
{
    List list;
    ItemType item;
    string contactNo;
    string name;
    int removeNum;
    string option;
    bool testing;

    //Creating Person Objects
    Person p1("Derek", "1234 1234");
    Person p2("David", "1231 1231");

    list.add(p1);
    list.add(p2);

    testing = true;
    while (testing) {
        //Display Main Menu
        cout << "-------------Main Menu------------\n[1] List the phone numbers\n[2] Add a new contact\n[3] Remove a contact\n[4] Search for a phone number\n[0] Exit\n----------------------------------\nEnter our option: ";
        cin >> option;
        if (option == "0") {
            testing = false;
        }
        //List all contacts
        else if (option == "1") {
            cout << "Name" << setw(15) << "telNo" << endl;
            for (int i = 0; i < list.getLength(); i++) {
                item = list.get(i);
                cout << left << item.getName() << right << setw(15) << item.getTelNo() << endl;
            }
        }
        //Add a new contact
        else if (option == "2") {
            cout << "Please enter a name: ";
            cin >> name;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a telNo: ";
            getline(cin, contactNo);
            Person pNew(name, contactNo);
            list.add(pNew);
        }
        //Remove a contact
        else if (option == "3") {
            //List all the names and phone numbers
            cout << "No. Name" << setw(15) << "telNo" << endl;
            for (int i = 0; i < list.getLength(); i++) {
                item = list.get(i);
                cout << left << "[" << i + 1 << "] " << item.getName() << right << setw(15) << item.getTelNo() << endl;
            }

            cout << "Please enter the number u want to remove: ";
            cin >> removeNum;
            list.remove(removeNum - 1);

            cout << "No. Name" << setw(15) << "telNo" << endl;
            for (int i = 0; i < list.getLength(); i++) {
                item = list.get(i);
                cout << left << "[" << i+1 << "] " << item.getName() << right << setw(15) << item.getTelNo() << endl;
            }
        }
        //Search for a phone number
        else if (option == "4") {
            string searchTelNo;
            bool check;
            check = false;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the name of the phone number u want to search: ";
            getline(cin, searchTelNo);

            for (int i = 0; i < list.getLength(); i++) {
                item = list.get(i);
                if (item.getName() == searchTelNo) {
                    cout << "Phone number found!" << endl;
                    cout << "Name: " + item.getName() << " telNo: " << item.getTelNo() << endl;
                    check = true;
                }
            }
            if (check == false) {
                cout << "Phone number cannot be found." << endl;
            }
        }
        else {
            cout << "Please try again" << endl;
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
