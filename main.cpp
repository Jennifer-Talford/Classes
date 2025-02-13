#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Employee Class Declaration
class Employee
{
private:
	string name; // Employee's name
	int idNumber; // ID number
	string department; // Department name
	string position; // Employee's position
public:
	Employee(string Name, int iD, string depart, string posit);
	Employee();
	Employee(string Name, int iD);

	// Returns the department value 
	string getdepartment()
	{
		return department;
	}
	// Returns the name value 
	string getname() 
	{
		return name;
	}
	// Returns the iD value 
	int getidNumber() 
	{
		return idNumber;
	}
	// Returns the position value 
	string getposition() 
	{
		return position;
	}

	// Displays the department value 
	void setdepartment(string depart)
	{
		department = depart;
	}
	// Displays the position value 
	void setposition(string depart)
	{
		position = depart;
	}
	// Displays the name value 
	void setname(string depart)
	{
		name = depart;
	}
	// Displays the iD value 
	void setidNumber(int depart)
	{
		idNumber = depart;
	}
};
// First Constructor
Employee::Employee(string Name, int iD, string depart, string posit)
{
	name = Name;
	idNumber = iD;
	department = depart;
	position = posit;
}
// Second Constructor
Employee::Employee(string Name, int iD)
{
	name = Name;
	idNumber = iD;
}
// Third Constructor: The default constructor
Employee::Employee()
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}
// Function prototype
void displayEmployee(Employee);
//The displayEmployee function displays the info held in the Employee object that was passed as an argument
void displayEmployee(Employee employinfo)
{
	// Displays name info
	cout << setw(20) << employinfo.getname();
	// Displays ID number
	cout << setw(20) << employinfo.getidNumber();
	// Displays department info
	cout << setw(20) << employinfo.getdepartment();
	// Displays employee position
	cout << setw(20) << employinfo.getposition() << endl;
}
// Driver program to demonstrate the class
int main()
{
	// Holds the employee info
	Employee E1("Susan Mayers", 47899, "Accounting", "Vice President");
	Employee E2("Mark Jones", 39119, "IT", "Programmer");
	Employee E3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	// Displays main header
	cout << "               Name:" << "           IdNumber:" << "         Department:" << "            Position:" << endl;
	// Displays each employee's data.
	Employee employee[] = {E1, E2, E3};
	displayEmployee(employee[0]);
	displayEmployee(employee[1]);
	displayEmployee(employee[2]);

	return 0;
}
