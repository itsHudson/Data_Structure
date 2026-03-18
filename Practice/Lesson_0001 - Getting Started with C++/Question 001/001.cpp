// ==========================================================
// CATEGORY: Header Files / Libraries
// Purpose : Import necessary libraries required for the program
// ==========================================================

#include <iostream>   // Provides input and output functionality (cin, cout)
#include <iomanip>    // Provides formatting tools (setw, left, right, setprecision)
#include <string>     // Allows usage of the string data type

using namespace std;  // Allows us to use standard library objects without writing std::


// ==========================================================
// CATEGORY: Main Program Entry Point
// Purpose : The main() function is where program execution begins
// ==========================================================

int main() {

    // ==========================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store student information collected from user
    // ==========================================================

    string name, gender, address;  // Variables to store student name, gender, and home address
    int age;                       // Variable to store student's age
    double ewallet;                // Variable to store student's e-wallet balance


    // ==========================================================
    // CATEGORY: User Input Section
    // Purpose : Collect information from the user
    // ==========================================================

    cout << left << setw(30) << "Student Name" << ":"; 
    // Display label "Student Name" aligned to the left with width of 30 characters

    getline(cin, name); 
    // Read full line input from the user and store in variable 'name'
    // getline() allows spaces to be included in the input


    cout << left << setw(30) << "Student Gender" << ":"; 
    // Display label "Student Gender" with formatted alignment

    cin >> gender; 
    // Read user input for gender
    // cin >> reads only a single word (stops at whitespace)


    cout << left << setw(30) << "Student Age" << ":"; 
    // Display label for student age

    cin >> age; 
    // Read an integer value from the user and store in variable 'age'


    cout << left << setw(30) << "Student Home Address" << ":"; 
    // Display label for student home address

    cin.ignore(); 
    // Clear the leftover newline character in the input buffer
    // This is required before using getline() after cin >>

    getline(cin, address); 
    // Read the full home address including spaces


    cout << left << setw(30) << "E-wallet Amount" << ":RM "; 
    // Display label for e-wallet amount with RM currency prefix

    cin >> ewallet; 
    // Read the e-wallet balance entered by the user


    // ==========================================================
    // CATEGORY: Output Introduction
    // Purpose : Inform user that the student details will be shown
    // ==========================================================

    cout << endl; 
    // Print a blank line for better readability

    cout << "Student details as below: " << endl; 
    // Display message indicating that student information will follow



    // ==========================================================
    // CATEGORY: Table Separator Line
    // Purpose : Print a horizontal line using '=' symbols
    // ==========================================================

    for (int i = 0; i <= 101; i++) 
        // Loop runs 102 times to create a long separator line

        cout << "=";      
        // Print "=" symbol repeatedly

    cout << endl; 
    // Move cursor to next line after separator



    // ==========================================================
    // CATEGORY: Table Header Section
    // Purpose : Display column titles for the student information table
    // ==========================================================

    cout << left << setw(20) << "| Name"
         // Print column title "Name" with left alignment

         << setw(20) << "| Age"
         // Print column title "Age"

         << setw(20) << "| Gender"
         // Print column title "Gender"

         << setw(20) << "| Address"
         // Print column title "Address"

         << setw(20) << "| E-wallet Amount"
         // Print column title "E-wallet Amount"

         << " |" << endl;
         // Close table border and move to next line



    // ==========================================================
    // CATEGORY: Table Header Separator
    // Purpose : Print another horizontal line under the table header
    // ==========================================================

    for (int i = 0; i <= 101; i++)
        // Repeat loop to print another separator line

        cout << "=";

    cout << endl;



    // ==========================================================
    // CATEGORY: Student Data Display
    // Purpose : Display the student's information in table format
    // ==========================================================

    cout << left << setw(20) << ("| " + name)
         // Display student name with table border prefix

         << setw(20) << ("| " + to_string(age))
         // Convert integer age to string before concatenation

         << setw(20) << ("| " + gender)
         // Display student gender

         << setw(20) << ("| " + address)
         // Display student home address


         << "| RM " 
         // Print currency label before e-wallet value

         << fixed 
         // Ensure number is displayed in fixed-point format

         << setprecision(2) 
         // Display the number with 2 decimal places

         << setw(16) << ewallet
         // Set width for alignment of e-wallet amount

         << "|" << endl;
         // Close the table row and move to next line



    // ==========================================================
    // CATEGORY: Final Table Separator
    // Purpose : Print closing line for the table
    // ==========================================================

    for (int i = 0; i <= 101; i++)
        // Loop prints final separator line

        cout << "=";

    cout << endl;



    // ==========================================================
    // CATEGORY: Program Termination
    // Purpose : Indicate successful completion of the program
    // ==========================================================

    return 0;   
    // Return 0 means the program ended successfully
}
