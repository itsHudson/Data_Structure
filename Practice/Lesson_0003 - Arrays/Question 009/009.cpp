// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout and cin



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store number of elements and results
    // ======================================================

    int totalNumberOfValues;  
    // Store number of elements entered by user



    // ======================================================
    // CATEGORY: Input - Number of Elements
    // ======================================================

    cout << "Enter number of elements (N): ";  
    // Prompt user

    cin >> totalNumberOfValues;  
    // Read number of elements



    // ======================================================
    // CATEGORY: Array Declaration
    // Purpose : Store user input values
    // ======================================================

    int userInputArray[100];  
    // Array with maximum capacity of 100 elements



    // ======================================================
    // CATEGORY: Initialization of Variables
    // ======================================================

    int totalSummationValue = 0;  
    // Store total sum

    int minimumValue;  
    // Store smallest value

    int maximumValue;  
    // Store largest value



    // ======================================================
    // CATEGORY: Input Loop
    // Purpose : Store values into array
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfValues; currentIndex++)
    {
        cout << "Enter value " << currentIndex + 1 << ": ";  
        // Display element number (start from 1)

        cin >> userInputArray[currentIndex];  
        // Store value into array at index
    }



    // ======================================================
    // CATEGORY: Initialize Min & Max
    // Purpose : Use first element as reference
    // ======================================================

    minimumValue = userInputArray[0];  
    // Set initial minimum

    maximumValue = userInputArray[0];  
    // Set initial maximum



    // ======================================================
    // CATEGORY: Array Processing Loop
    // Purpose : Calculate sum, min, and max
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfValues; currentIndex++)
    {

        // ==================================================
        // Summation
        // ==================================================

        totalSummationValue = totalSummationValue + userInputArray[currentIndex];  
        // Add each element to total sum



        // ==================================================
        // Minimum Check
        // ==================================================

        if (userInputArray[currentIndex] < minimumValue)
        {
            minimumValue = userInputArray[currentIndex];  
            // Update minimum if smaller value found
        }



        // ==================================================
        // Maximum Check
        // ==================================================

        if (userInputArray[currentIndex] > maximumValue)
        {
            maximumValue = userInputArray[currentIndex];  
            // Update maximum if larger value found
        }
    }



    // ======================================================
    // CATEGORY: Output Section
    // Purpose : Display results
    // ======================================================

    cout << "\nSummation: " << totalSummationValue << endl;  
    // Display total sum

    cout << "Minimum value: " << minimumValue << endl;  
    // Display minimum value

    cout << "Maximum value: " << maximumValue << endl;  
    // Display maximum value



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
