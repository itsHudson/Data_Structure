// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations in the program
// ==========================================================

#include <iostream>  
// Allows the use of cout (output) and cin (input)



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage (avoid std::)
// ==========================================================

using namespace std;  
// Allows direct use of cout, cin, endl without std:: prefix



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program execution
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Variable Declaration (User Input)
    // Purpose : Store the values entered by the user
    // ======================================================

    int feet;  
    // Variable to store the feet value entered by the user

    cout << "Enter the feet length: " << endl;  
    // Prompt message asking the user to input feet

    cin >> feet;  
    // Read the feet value from user input and store in variable



    int inch;  
    // Variable to store the inch value entered by the user

    cout << "Enter the inch length: " << endl;  
    // Prompt message asking the user to input inches

    cin >> inch;    
    // Read the inch value from user input and store in variable



    // ======================================================
    // CATEGORY: Conversion Step 1 (Feet → Inches)
    // Purpose : Convert total length into inches
    // ======================================================

    int totalInches = (feet * 12) + inch;  
    // Multiply feet by 12 (1 foot = 12 inches)
    // Then add the extra inches entered by the user



    // ======================================================
    // CATEGORY: Conversion Step 2 (Inches → Centimeters)
    // Purpose : Convert total inches into centimeters
    // ======================================================

    double centimeters = totalInches * 2.54;  
    // Multiply total inches by 2.54 (1 inch = 2.54 cm)
    // Store result in double for decimal precision



    // ======================================================
    // CATEGORY: Output Result
    // Purpose : Display the final converted value
    // ======================================================

    cout << "Total length in centimeters: " << centimeters << endl;  
    // Print the final result to the console



    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End program successfully
    // ======================================================

    return 0;  
    // Indicate successful program execution
}
