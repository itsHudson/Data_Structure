// ==========================================================
// CATEGORY: Program Description
// Purpose : Read 10 numbers into an array.
//           If the user enters a duplicate number,
//           display a message and ask for another value.
// ==========================================================

#include <iostream>   // Allows use of input/output objects such as cin and cout
using namespace std;  // Allows us to use cout and cin without writing std::


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main(){

    const int ArraySize = 10;
    // Constant variable representing the number of elements in the array

    int NumbersArray[ArraySize];
    // Declare an array to store 10 integers entered by the user


    // ======================================================
    // CATEGORY: Input Loop
    // Purpose : Read numbers one by one into the array
    // ======================================================

    for (int CurrentIndex = 0; CurrentIndex < ArraySize; CurrentIndex++){
        // Loop from index 0 to 9 to store 10 numbers

        bool IsDuplicateValue;
        // Flag variable used to check whether the input value already exists

        int UserInputValue;
        // Temporary variable to store the user's input before placing it into the array


        // ==================================================
        // CATEGORY: Duplicate Validation Loop
        // Purpose : Keep asking for input until it is NOT duplicate
        // ==================================================

        do{

            cout << "Enter value " << CurrentIndex + 1 << ": ";
            // Ask the user to enter the next value
            // CurrentIndex + 1 is used so the display starts from 1 instead of 0

            cin >> UserInputValue;
            // Read the number entered by the user

            IsDuplicateValue = false;
            // Assume the value is NOT duplicate initially


            // ==============================================
            // CATEGORY: Duplicate Checking
            // Purpose : Compare input with previously stored numbers
            // ==============================================

            for (int CheckIndex = 0; CheckIndex < CurrentIndex; CheckIndex++){
                // Check only the values that were already stored
                // CheckIndex runs from index 0 up to CurrentIndex-1

                if (NumbersArray[CheckIndex] == UserInputValue) {
                    // If the current input value already exists in the array

                    cout << "Value already in the list! Please choose other value!" << endl;
                    // Show error message

                    IsDuplicateValue = true;
                    // Mark the value as duplicate

                    break;
                    // Stop checking further because duplicate is already found
                }
            }

        }

        while(IsDuplicateValue);
        // If duplicate is detected, repeat the input process


        NumbersArray[CurrentIndex] = UserInputValue;
        // Store the valid (non-duplicate) value into the array
    }



    // ======================================================
    // CATEGORY: Display Output
    // Purpose : Print all numbers stored in the array
    // ======================================================

    cout << "\nYou entered: ";
    // Display message before printing the values


    for(int DisplayIndex = 0; DisplayIndex < ArraySize; DisplayIndex++){
        // Loop through all elements in the array

        cout << NumbersArray[DisplayIndex];
        // Print the current number

        if(DisplayIndex < ArraySize - 1){
            // If the current number is not the last element

            cout << ", ";
            // Print a comma separator
        }
    }

    cout << endl;
    // Move to the next line after printing all values


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Return 0 indicates the program ended successfully
}
