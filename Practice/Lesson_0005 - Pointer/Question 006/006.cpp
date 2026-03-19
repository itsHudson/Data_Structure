// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and formatting
// ==========================================================

#include <iostream>   // Allows use of cout and cin
#include <iomanip>    // Allows use of fixed and setprecision for decimal formatting

using namespace std;



// ==========================================================
// CATEGORY: Function Prototype
// Purpose : Inform the compiler that convert() exists
// ==========================================================

void ConvertInchesToCentimeters(double* LengthPointer);
// Function receives the memory address of a double value
// and converts the stored value from inches to centimeters



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store measurement entered by the user
    // ======================================================

    double MeasurementInInches;
    // Variable used to store the length value entered by the user



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask user to enter measurement in inches
    // ======================================================

    cout << "Enter a length in inches, and I will convert\n";

    cout << "it to centimeters: ";

    cin >> MeasurementInInches;
    // Store user input into MeasurementInInches



    // ======================================================
    // CATEGORY: Function Call
    // Purpose : Convert inches to centimeters using pointer
    // ======================================================

    ConvertInchesToCentimeters(&MeasurementInInches);
    // Pass the memory address of MeasurementInInches
    // The function will modify the original variable



    // ======================================================
    // CATEGORY: Output Formatting
    // Purpose : Format decimal output to 4 decimal places
    // ======================================================

    cout << fixed << setprecision(4);
    // fixed → show decimal numbers normally
    // setprecision(4) → display 4 digits after decimal point



    // ======================================================
    // CATEGORY: Display Result
    // ======================================================

    cout << "Value in centimeters: "
         << MeasurementInInches
         << endl;
    // Display the converted measurement



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}



// ==========================================================
// CATEGORY: Convert Function
// Purpose : Convert inches to centimeters
// ==========================================================

void ConvertInchesToCentimeters(double* LengthPointer)
{

    *LengthPointer = *LengthPointer * 2.54;
    // Dereference the pointer to access the actual value
    // Multiply by 2.54 because:
    // 1 inch = 2.54 centimeters

}
