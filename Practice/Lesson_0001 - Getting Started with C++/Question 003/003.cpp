// ==========================================================
// CATEGORY: Header Files / Libraries
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations (cin, cout)
#include <iomanip>    // Provides formatting tools (not heavily used in this program)
#include <string>     // Provides string data type (not required here but included)

using namespace std;  // Allows use of standard library objects without std:: prefix


// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point where program execution begins
// ==========================================================

int main() {

    // ==========================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store the input time components
    // ==========================================================

    int HH, MM, SS;   // Variables to store hours, minutes, and seconds
    char c1, c2;      // Variables to store the ':' separators from input


    // ==========================================================
    // CATEGORY: Input Validation Loop
    // Purpose : Repeatedly request input until a valid time format
    //           (HH:MM:SS) is entered by the user
    // ==========================================================

    while (true) {    // Infinite loop that continues until valid input is given

        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        // Prompt the user to enter time in HH:MM:SS format

        cin >> HH >> c1 >> MM >> c2 >> SS;
        // Read user input
        // Example input: 02:15:30
        // HH = 2
        // c1 = ':'
        // MM = 15
        // c2 = ':'
        // SS = 30


        // ======================================================
        // CATEGORY: Format Validation
        // Purpose : Ensure the user enters the correct HH:MM:SS format
        // ======================================================

        if (cin.fail() || c1 != ':' || c2 != ':') {
            // cin.fail() checks if input extraction failed (e.g. letters instead of numbers)
            // c1 != ':' ensures the first separator is ':'
            // c2 != ':' ensures the second separator is ':'

            cin.clear();
            // Reset the error state of the input stream

            cin.ignore(1000, '\n');
            // Remove incorrect input remaining in the buffer

            cout << "Invalid input!" << endl;
            // Display error message to the user

            continue;
            // Restart the loop and ask for input again
        }


        // ======================================================
        // CATEGORY: Range Validation
        // Purpose : Ensure the time values are within valid limits
        // ======================================================

        if (HH < 0 || HH > 23 ||     // Hours must be between 0 and 23
            MM < 0 || MM > 59 ||     // Minutes must be between 0 and 59
            SS < 0 || SS > 59) {     // Seconds must be between 0 and 59

            cout << "Invalid input!" << endl;
            // Inform the user that the values are out of valid range

            continue;
            // Restart loop to request input again
        }


        // ======================================================
        // CATEGORY: Exit Condition
        // Purpose : Stop the loop once valid input is provided
        // ======================================================

        break;
        // Exit the while loop since input is valid
    }


    // ==========================================================
    // CATEGORY: Time Conversion
    // Purpose : Convert HH:MM:SS format into total seconds
    // ==========================================================

    int seconds = HH * 3600 + MM * 60 + SS;
    // Convert hours into seconds (HH × 3600)
    // Convert minutes into seconds (MM × 60)
    // Add remaining seconds


    // ==========================================================
    // CATEGORY: Output Result
    // Purpose : Display the calculated total seconds
    // ==========================================================

    cout << "Elapsed time in seconds = " << seconds << " seconds." << endl;
    // Print the converted time in seconds


    // ==========================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ==========================================================

    return 0;   // Return 0 indicates successful program completion
}
