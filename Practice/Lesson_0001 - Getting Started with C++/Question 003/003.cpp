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

    int HoursValue, MinutesValue, SecondsValue;   
    // Variables to store hours, minutes, and seconds

    char FirstSeparatorCharacter, SecondSeparatorCharacter;      
    // Variables to store the ':' separators from input


    // ==========================================================
    // CATEGORY: Input Validation Loop
    // Purpose : Repeatedly request input until a valid time format
    //           (HH:MM:SS) is entered by the user
    // ==========================================================

    while (true) {    
        // Infinite loop that continues until valid input is given

        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        // Prompt the user to enter time in HH:MM:SS format

        cin >> HoursValue >> FirstSeparatorCharacter >> MinutesValue >> SecondSeparatorCharacter >> SecondsValue;
        // Read user input
        // Example input: 02:15:30
        // HoursValue = 2
        // FirstSeparatorCharacter = ':'
        // MinutesValue = 15
        // SecondSeparatorCharacter = ':'
        // SecondsValue = 30


        // ======================================================
        // CATEGORY: Format Validation
        // Purpose : Ensure the user enters the correct HH:MM:SS format
        // ======================================================

        if (cin.fail() || FirstSeparatorCharacter != ':' || SecondSeparatorCharacter != ':') {
            // cin.fail() checks if input extraction failed (e.g. letters instead of numbers)
            // FirstSeparatorCharacter != ':' ensures the first separator is ':'
            // SecondSeparatorCharacter != ':' ensures the second separator is ':'

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

        if (HoursValue < 0 || HoursValue > 23 ||         
            MinutesValue < 0 || MinutesValue > 59 ||     
            SecondsValue < 0 || SecondsValue > 59) {     
            // Hours must be between 0 and 23
            // Minutes must be between 0 and 59
            // Seconds must be between 0 and 59

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

    int TotalElapsedSeconds = HoursValue * 3600 + MinutesValue * 60 + SecondsValue;
    // Convert hours into seconds (HoursValue × 3600)
    // Convert minutes into seconds (MinutesValue × 60)
    // Add remaining seconds


    // ==========================================================
    // CATEGORY: Output Result
    // Purpose : Display the calculated total seconds
    // ==========================================================

    cout << "Elapsed time in seconds = " << TotalElapsedSeconds << " seconds." << endl;
    // Print the converted time in seconds


    // ==========================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ==========================================================

    return 0;   
    // Return 0 indicates successful program completion
}
