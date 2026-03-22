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
// Avoid writing std:: before cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Array Declaration & Initialization
    // Purpose : Store multiple integer values
    // ======================================================

    int billy[] = {16, 2, 77, 40, 12071, 51};  
    // Array named 'billy' storing 6 integer values

    int totalNumberOfElements = 6;  
    // Total number of elements in the array



    // ======================================================
    // CATEGORY: Variable Initialization
    // Purpose : Prepare variables for calculation
    // ======================================================

    int totalSummationValue = 0;  
    // Store total sum of all array elements

    int minimumValue = billy[0];  
    // Initialize minimum value as first element

    int maximumValue = billy[0];  
    // Initialize maximum value as first element



    // ======================================================
    // CATEGORY: Array Traversal Loop
    // Purpose : Loop through each element in the array
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfElements; currentIndex++)
    {
        // Start from index 0
        // Continue until last index (5)
        // Increment index by 1 each iteration


        // ==================================================
        // CATEGORY: Summation Calculation
        // Purpose : Add each element to total sum
        // ==================================================

        totalSummationValue = totalSummationValue + billy[currentIndex];  
        // Add current element to total sum



        // ==================================================
        // CATEGORY: Minimum Value Check
        // Purpose : Find smallest value in array
        // ==================================================

        if (billy[currentIndex] < minimumValue)
        {
            minimumValue = billy[currentIndex];  
            // Update minimum if smaller value found
        }



        // ==================================================
        // CATEGORY: Maximum Value Check
        // Purpose : Find largest value in array
        // ==================================================

        if (billy[currentIndex] > maximumValue)
        {
            maximumValue = billy[currentIndex];  
            // Update maximum if larger value found
        }
    }



    // ======================================================
    // CATEGORY: Output Section
    // Purpose : Display results
    // ======================================================

    cout << "Summation of array values: " << totalSummationValue << endl;  
    // Display total sum

    cout << "Minimum value: " << minimumValue << endl;  
    // Display smallest value

    cout << "Maximum value: " << maximumValue << endl;  
    // Display largest value



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
