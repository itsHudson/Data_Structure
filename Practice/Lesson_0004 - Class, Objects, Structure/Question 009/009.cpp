// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output operations and string handling
// ==========================================================

#include <iostream>  
// Provides input/output stream objects like cout (output) and cin (input)

#include <string>    
// Allows usage of string data type for text storage



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify code by avoiding std:: prefix
// ==========================================================

using namespace std;  
// Allows direct use of cout, cin, string instead of std::cout, std::cin



// ==========================================================
// CATEGORY: Class Definition - Employee
// Purpose : Represent an employee with attributes and methods
// ==========================================================

class Employee
{

// ==========================================================
// CATEGORY: Private Data Members (Encapsulation)
// Purpose : Store employee details securely (cannot be accessed directly)
// ==========================================================

private:
    string employeeName;        
    // Variable to store employee name

    int employeeIdNumber;       
    // Variable to store employee ID number

    string employeeDepartment;  
    // Variable to store employee department

    double employeeSalary;      
    // Variable to store employee salary

    string employeeJobTitle;    
    // Variable to store employee job title



// ==========================================================
// CATEGORY: Public Members
// Purpose : Provide controlled access to private data
// ==========================================================

public:

    // ======================================================
    // CATEGORY: Default Constructor
    // Purpose : Initialize object with default values
    // ======================================================

    Employee()
    {
        employeeName = "";       
        // Initialize name as empty string

        employeeIdNumber = 0;    
        // Initialize ID as 0

        employeeDepartment = ""; 
        // Initialize department as empty

        employeeJobTitle = "";   
        // Initialize job title as empty

        employeeSalary = 0.0;    
        // Initialize salary as 0.0
    }



    // ======================================================
    // CATEGORY: Parameterized Constructor (Partial)
    // Purpose : Initialize employee with name and ID only
    // ======================================================

    Employee(string inputName, int inputIdNumber)
    {
        employeeName = inputName;        
        // Assign given name to employeeName

        employeeIdNumber = inputIdNumber; 
        // Assign given ID to employeeIdNumber

        employeeDepartment = "";  
        // Set default department

        employeeJobTitle = "";    
        // Set default job title

        employeeSalary = 0.0;     
        // Set default salary
    }



    // ======================================================
    // CATEGORY: Parameterized Constructor (Full)
    // Purpose : Initialize most employee attributes
    // ======================================================

    Employee(string inputName, int inputIdNumber, string inputDepartment, string inputJobTitle)
    {
        employeeName = inputName;        
        // Assign name

        employeeIdNumber = inputIdNumber; 
        // Assign ID

        employeeDepartment = inputDepartment; 
        // Assign department

        employeeJobTitle = inputJobTitle; 
        // Assign job title

        employeeSalary = 0.0;
        // Salary still default (can be set later)
    }



    // ======================================================
    // CATEGORY: Setter Functions (Mutators)
    // Purpose : Modify private data members safely
    // ======================================================

    void SetEmployeeName(string inputName)
    {
        employeeName = inputName;  
        // Update employee name
    }

    void SetEmployeeIdNumber(int inputIdNumber)
    {
        employeeIdNumber = inputIdNumber;  
        // Update employee ID
    }

    void SetEmployeeDepartment(string inputDepartment)
    {
        employeeDepartment = inputDepartment;  
        // Update department
    }

    void SetEmployeeSalary(double inputSalary)
    {
        employeeSalary = inputSalary;  
        // Update salary
    }

    void SetEmployeeJobTitle(string inputJobTitle)
    {
        employeeJobTitle = inputJobTitle;  
        // Update job title
    }



    // ======================================================
    // CATEGORY: Getter Functions (Accessors)
    // Purpose : Retrieve private data safely
    // ======================================================

    string GetEmployeeName()
    {
        return employeeName;  
        // Return employee name
    }

    int GetEmployeeIdNumber()
    {
        return employeeIdNumber;  
        // Return employee ID
    }

    string GetEmployeeDepartment()
    {
        return employeeDepartment;  
        // Return department
    }

    double GetEmployeeSalary()
    {
        return employeeSalary;  
        // Return salary
    }

    string GetEmployeeJobTitle()
    {
        return employeeJobTitle;  
        // Return job title
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
    // ======================================================

    Employee employeeObject;  
    // Create an Employee object using default constructor



    // ======================================================
    // CATEGORY: Input Variables
    // Purpose : Temporarily store user input
    // ======================================================

    string inputName;         
    // Variable to store name input

    int inputId;              
    // Variable to store ID input

    string inputDepartment;   
    // Variable to store department input

    string inputJobTitle;     
    // Variable to store job title input

    double inputSalary;       
    // Variable to store salary input



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Collect data from user
    // ======================================================

    cout << "Enter employee name: ";
    // Display prompt message

    getline(cin, inputName);  
    // Read full line input (supports spaces)


    cout << "Enter employee ID: ";
    cin >> inputId;  
    // Read integer ID

    cin.ignore();  
    // Clear leftover newline from input buffer


    cout << "Enter department: ";
    getline(cin, inputDepartment);  
    // Read department (full line)


    cout << "Enter job title: ";
    getline(cin, inputJobTitle);  
    // Read job title (full line)


    cout << "Enter salary: ";
    cin >> inputSalary;  
    // Read salary value



    // ======================================================
    // CATEGORY: Set Values (Encapsulation)
    // Purpose : Assign values to object using setter methods
    // ======================================================

    employeeObject.SetEmployeeName(inputName);      
    // Set employee name

    employeeObject.SetEmployeeIdNumber(inputId);    
    // Set employee ID

    employeeObject.SetEmployeeDepartment(inputDepartment);  
    // Set department

    employeeObject.SetEmployeeJobTitle(inputJobTitle);      
    // Set job title

    employeeObject.SetEmployeeSalary(inputSalary);  
    // Set salary



    // ======================================================
    // CATEGORY: Output Values
    // Purpose : Display employee details using getter methods
    // ======================================================

    cout << "\nEmployee Details:\n";
    // Print section header

    cout << "Name: " << employeeObject.GetEmployeeName() << endl;
    // Display employee name

    cout << "ID: " << employeeObject.GetEmployeeIdNumber() << endl;
    // Display employee ID

    cout << "Department: " << employeeObject.GetEmployeeDepartment() << endl;
    // Display department

    cout << "Job Title: " << employeeObject.GetEmployeeJobTitle() << endl;
    // Display job title

    cout << "Salary: " << employeeObject.GetEmployeeSalary() << endl;
    // Display salary



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
    // End program successfully
}
