// ==========================================================
// CATEGORY: Header Files / Libraries
// Purpose : Import the required libraries for input, output,
//           formatting, string handling, and string conversion
// ==========================================================

#include <iostream>   // Allows use of input and output objects such as cin and cout
#include <iomanip>    // Allows formatting tools such as setw, left, and setprecision
#include <string>     // Allows use of the string data type
#include <sstream>    // Allows use of stringstream for formatted string conversion

using namespace std;  // Lets us use standard library names without writing std::


// ==========================================================
// CATEGORY: Main Function
// Purpose : Starting point of the C++ program
// ==========================================================

int main() {

    // ==========================================================
    // CATEGORY: Variable Declaration
    // Purpose : Declare variables to store the student's details
    // ==========================================================

    string name, gender, address;  // Store student's name, gender, and address
    int age;                       // Store student's age as an integer
    double ewallet;                // Store student's e-wallet amount as a decimal number


    // ==========================================================
    // CATEGORY: User Input Section
    // Purpose : Ask the user to enter all required student details
    // ==========================================================

    cout << left << setw(30) << "Student Name" << ":";
    // Display the label "Student Name" aligned to the left with width 30

    getline(cin, name);
    // Read the full student name, including spaces, and store it in 'name'


    cout << left << setw(30) << "Student Gender" << ":";
    // Display the label "Student Gender"

    cin >> gender;
    // Read the student's gender
    // cin >> reads only one word until space is encountered


    cout << left << setw(30) << "Student Age" << ":";
    // Display the label "Student Age"

    cin >> age;
    // Read the student's age and store it in 'age'


    cout << left << setw(30) << "Student Home Address" << ":";
    // Display the label "Student Home Address"

    cin.ignore();
    // Remove the leftover newline character from the input buffer
    // This is needed before using getline() after cin >>

    getline(cin, address);
    // Read the full home address, including spaces, and store it in 'address'


    cout << left << setw(30) << "E-wallet Amount" << ":RM ";
    // Display the label "E-wallet Amount" with RM currency prefix

    cin >> ewallet;
    // Read the e-wallet amount entered by the user


    // ==========================================================
    // CATEGORY: Pause Section
    // Purpose : Let the user read the input before showing output
    // ==========================================================

    cout << "\nPress any key to continue . . .";
    // Display a message asking the user to press any key to continue

    cin.ignore();
    // Clear the leftover newline character after entering e-wallet amount

    cin.get();
    // Wait for the user to press one key before continuing

    cout << "\n\n";
    // Print two new lines to create spacing before the formatted output


    // ==========================================================
    // CATEGORY: Formatted Output Header
    // Purpose : Print the title box for student details
    // ==========================================================

    cout << "==========================================================\n";
    // Print the top border line of the output box

    cout << "|               Student Details as below:                |\n";
    // Print the title text inside the box

    cout << "==========================================================\n";
    // Print the border line below the title


    // ==========================================================
    // CATEGORY: Student Details Output
    // Purpose : Display each student detail in a neat table format
    // ==========================================================

    cout << "| Name      : " << left << setw(40) << name << "|\n";
    // Print the student's name inside the formatted output box

    cout << "| Age       : " << left << setw(40) << age << "|\n";
    // Print the student's age inside the formatted output box

    cout << "| Gender    : " << left << setw(40) << gender << "|\n";
    // Print the student's gender inside the formatted output box

    cout << "| Address   : " << left << setw(40) << address << "|\n";
    // Print the student's address inside the formatted output box


    // ==========================================================
    // CATEGORY: E-Wallet Formatting
    // Purpose : Convert the e-wallet amount into a formatted string
    //           with 2 decimal places for proper alignment
    // ==========================================================

    stringstream ss;
    // Create a stringstream object to build a formatted string

    ss << fixed << setprecision(2) << ewallet;
    // Insert ewallet value into the stringstream in fixed decimal format
    // setprecision(2) ensures 2 digits after the decimal point


    cout << "| E-Wallet  : "
         << left << setw(40) << ("RM " + ss.str())
         << "|\n";
    // Print the formatted e-wallet amount with "RM " in front
    // ss.str() converts the stringstream content into a normal string


    cout << "==========================================================\n";
    // Print the closing border line of the output box


    // ==========================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ==========================================================

    return 0;
    // Return 0 indicates that the program ended without error
}
