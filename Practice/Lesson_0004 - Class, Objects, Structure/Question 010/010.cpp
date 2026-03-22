// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output operations and string handling
// ==========================================================

#include <iostream>
// Provides cout and endl for output display

#include <string>
// Allows usage of string data type



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;
// Avoid writing std:: before cout, string, etc.



// ==========================================================
// CATEGORY: Class Definition - Employee
// Purpose : Represent an employee with attributes and behavior
// ==========================================================

class Employee
{

// ==========================================================
// CATEGORY: Private Data Members (Encapsulation)
// Purpose : Store employee details securely (hidden from outside)
// ==========================================================

private:
    string employeeName;
    // Store employee name

    int employeeIdNumber;
    // Store employee ID number

    string employeeDepartment;
    // Store employee department

    double employeeSalary;
    // Store employee salary

    string employeeJobTitle;
    // Store employee job title



// ==========================================================
// CATEGORY: Public Members
// Purpose : Allow controlled interaction with the object
// ==========================================================

public:

    // ======================================================
    // CATEGORY: Full Constructor
    // Purpose : Initialize all employee attributes at once
    // ======================================================

    Employee(string inputName, int inputId, string inputDepartment, double inputSalary, string inputJobTitle)
    {
        employeeName = inputName;
        // Assign input name to employeeName

        employeeIdNumber = inputId;
        // Assign input ID to employeeIdNumber

        employeeDepartment = inputDepartment;
        // Assign input department

        employeeSalary = inputSalary;
        // Assign input salary

        employeeJobTitle = inputJobTitle;
        // Assign input job title
    }



    // ======================================================
    // CATEGORY: Display Function
    // Purpose : Output employee details to console
    // ======================================================

    void DisplayEmployeeData()
    {
        cout << "Name: " << employeeName << endl;
        // Display employee name

        cout << "ID: " << employeeIdNumber << endl;
        // Display employee ID

        cout << "Department: " << employeeDepartment << endl;
        // Display department

        cout << "Salary: " << employeeSalary << endl;
        // Display salary

        cout << "Position: " << employeeJobTitle << endl;
        // Display job title

        cout << "-----------------------------------" << endl;
        // Print separator line for readability
    }
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Object Creation
    // Purpose : Create Employee objects with predefined data
    // ======================================================

    Employee employeeOne("Susan", 47899, "Accounting", 13500.00, "Vice President");
    // Create first employee object with full details

    Employee employeeTwo("Matthew", 34522, "IT", 6500.00, "Programmer");
    // Create second employee object

    Employee employeeThree("James", 65881, "Manufacturing", 7500.00, "Engineer");
    // Create third employee object



    // ======================================================
    // CATEGORY: Display Output
    // Purpose : Call function to print employee details
    // ======================================================

    employeeOne.DisplayEmployeeData();
    // Display data of first employee

    employeeTwo.DisplayEmployeeData();
    // Display data of second employee

    employeeThree.DisplayEmployeeData();
    // Display data of third employee



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // End program successfully
}
