// ManagementSystem.cpp
// will be run in CLI environment

#include <iostream>
#include <string>

using namespace std;

// function to display menu opt based on employee or manager rolw
// 

void displayUserMenu() {
	string user1;
	cout << "**** Welcome to the Warehouse Inventory Management System ****" << endl;
	cout << "Select role: ";

	cin >> user1;
	cout << "You selected: " << user1 << endl;

}

int main()
{
	displayUserMenu();

   return 0;
	   
}
