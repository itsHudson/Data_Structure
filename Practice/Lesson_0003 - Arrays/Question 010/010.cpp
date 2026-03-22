// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout



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
    // CATEGORY: 2D Array Declaration & Initialization
    // Purpose : Store data in rows and columns (matrix form)
    // ======================================================

    int twoDimensionalArray[4][5] =
    {
        {1, 2, 3, 4, 5},      
        // Row 0

        {10, 9, 8, 7, 6},     
        // Row 1

        {11, 12, 13, 14, 15}, 
        // Row 2

        {20, 19, 18, 17, 16}  
        // Row 3
    };



    // ======================================================
    // CATEGORY: Nested Loop (Row + Column Traversal)
    // Purpose : Access and display each element in 2D array
    // ======================================================

    for (int currentRowIndex = 0; currentRowIndex < 4; currentRowIndex++)
    {
        // Outer loop → controls ROWS (0 to 3)

        for (int currentColumnIndex = 0; currentColumnIndex < 5; currentColumnIndex++)
        {
            // Inner loop → controls COLUMNS (0 to 4)

            cout << twoDimensionalArray[currentRowIndex][currentColumnIndex] << "\t";  
            // Access element using [row][column] and print with tab spacing
        }

        cout << endl;  
        // Move to next line after each row
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
