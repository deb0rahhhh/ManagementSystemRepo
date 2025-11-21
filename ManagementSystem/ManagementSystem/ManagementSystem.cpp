// ManagementSystem.cpp
// will be run in CLI environment

#include <iostream>
#include <string>

using namespace std;

// function to display menu opt based on employee or manager role
void displayUserMenu() {

	int role;
	cout << "**** Welcome to the Warehouse Inventory Management System ****" << endl;
	cout << "Please select your role: ";
	cout << "\n1. Employee" << endl;
	cout << "2. Manager" << endl;
	cout << "3. Exit" << endl;

	cin >> role;

	cout << "\nYou selected: " << role << endl;

	// loop to keep menu running until user exits
	bool isRunning = true;

	do {
		if (role == 1) { // if the user is an employee, display employee menu
			cout << "\n**** Welcome Employee! ****" << endl;
			cout << "What would you like to do?" << endl;
			cout << "1. Find Products" << endl;
			cout << "2. Complete Orders" << endl;
			cout << "3. View Assigned Orders" << endl;
			cout << "4. Generate Reports" << endl;
			cout << "5. Exit" << endl;

			int employeeChoice;
			cin >> employeeChoice; // this menu wont do anything now but will be implemented later
			 	
		} else if (role == 2) { // if the user is the manager, display the manager menu

			cout << "\n**** Welcome Manager! ****" << endl;
			cout << "What would you like to do? \nSelect based on category." << endl;
			cout << "\n1. Employee Management" << endl;
			cout << "2. Inventory Management" << endl;
			cout << "3. Exit" << endl;

			int managerChoice;
			cin >> managerChoice;
			if (managerChoice == 1) { // employee mgmt menu

				cout << "\nYou have selected Employee Management." << endl;
				cout << "\n1. Add Employee" << endl;
				cout << "2. Remove Employee" << endl;
				cout << "3. Edit Employee Details" << endl;
				cout << "4. View Employee List" << endl;
				cout << "5. Exit" << endl;

			}
			else if (managerChoice == 2) { // inventory mgmt menu
				cout << "You have selected Inventory Management." << endl;
				cout << "\n1. Products" << endl;
				cout << "2. Orders" << endl;
				cout << "3. Generate Reports" << endl;
				cout << "4. Exit" << endl;

			}
			else if (managerChoice == 3) {
				cout << "Exiting Manager Menu. Goodbye!" << endl;
				break;
			} else {
			  cout << "Invalid choice. Please try again." << endl;
			}
		} else {
		  cout << "Exiting System. Goodbye!" << endl;
		  break;
		}
	} while (isRunning);
};

int main()
{
	displayUserMenu();

   return 0;
	   
}
