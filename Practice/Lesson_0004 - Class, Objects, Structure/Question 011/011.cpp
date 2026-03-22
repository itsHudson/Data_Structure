// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output and string handling
// ==========================================================

#include <iostream>
// Provides input/output stream (cin, cout)

#include <string>
// Allows usage of string data type



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;
// Avoid writing std:: before cout, cin, string



// ==========================================================
// CATEGORY: Structure Definition - Employee
// Purpose : Store employee data (no encapsulation)
// Note    : All members are PUBLIC by default in struct
// ==========================================================

struct Employee
{
    string employeeName;
    // Store employee name

    int employeeIdNumber;
    // Store employee ID

    string employeeDepartment;
    // Store department name

    double employeeSalary;
    // Store salary

    string employeeJobTitle;
    // Store job title
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    // ======================================================
    // CATEGORY: Object Creation
    // Purpose : Create a struct variable to hold employee data
    // ======================================================

    Employee employeeObject;
    // Create an Employee structure variable



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Collect employee details from user
    // ======================================================

    cout << "Enter employee name: ";
    // Prompt user for name

    getline(cin, employeeObject.employeeName);
    // Read full name (including spaces)


    cout << "Enter employee ID: ";
    cin >> employeeObject.employeeIdNumber;
    // Read employee ID (integer)

    cin.ignore();
    // Clear leftover newline from input buffer


    cout << "Enter department: ";
    getline(cin, employeeObject.employeeDepartment);
    // Read department name


    cout << "Enter job title: ";
    getline(cin, employeeObject.employeeJobTitle);
    // Read job title


    cout << "Enter salary: ";
    cin >> employeeObject.employeeSalary;
    // Read salary (double value)



    // ======================================================
    // CATEGORY: Output Display
    // Purpose : Display employee information to user
    // ======================================================

    cout << "\nEmployee Details:\n";
    // Print header

    cout << "Name: " << employeeObject.employeeName << endl;
    // Display employee name

    cout << "ID: " << employeeObject.employeeIdNumber << endl;
    // Display employee ID

    cout << "Department: " << employeeObject.employeeDepartment << endl;
    // Display department

    cout << "Job Title: " << employeeObject.employeeJobTitle << endl;
    // Display job title

    cout << "Salary: " << employeeObject.employeeSalary << endl;
    // Display salary



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // End program successfully
}
