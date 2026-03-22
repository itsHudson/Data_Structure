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
    // Purpose : Store matrix dimensions
    // ======================================================

    int numberOfRows;      
    // Number of rows in matrix

    int numberOfColumns;  
    // Number of columns in matrix



    // ======================================================
    // CATEGORY: Matrix Declaration
    // Purpose : Store two input matrices and result matrix
    // ======================================================

    int firstMatrix[5][5];   
    // First matrix (max size 5x5)

    int secondMatrix[5][5];  
    // Second matrix (max size 5x5)

    int resultMatrix[5][5];  
    // Matrix to store addition result



    // ======================================================
    // CATEGORY: Input Matrix Size
    // ======================================================

    cout << "Enter the number of rows of matrix (Max size = 5): ";
    cin >> numberOfRows;  
    // Read number of rows

    cout << "Enter the number of columns of matrix (Max size = 5): ";
    cin >> numberOfColumns;  
    // Read number of columns



    // ======================================================
    // CATEGORY: Input First Matrix
    // Purpose : Store values into first matrix
    // ======================================================

    cout << "\nEnter elements of first matrix:\n";

    for (int currentRowIndex = 0; currentRowIndex < numberOfRows; currentRowIndex++)
    {
        for (int currentColumnIndex = 0; currentColumnIndex < numberOfColumns; currentColumnIndex++)
        {
            cin >> firstMatrix[currentRowIndex][currentColumnIndex];  
            // Store value at [row][column]
        }
    }



    // ======================================================
    // CATEGORY: Input Second Matrix
    // Purpose : Store values into second matrix
    // ======================================================

    cout << "\nEnter elements of second matrix:\n";

    for (int currentRowIndex = 0; currentRowIndex < numberOfRows; currentRowIndex++)
    {
        for (int currentColumnIndex = 0; currentColumnIndex < numberOfColumns; currentColumnIndex++)
        {
            cin >> secondMatrix[currentRowIndex][currentColumnIndex];  
            // Store value at [row][column]
        }
    }



    // ======================================================
    // CATEGORY: Matrix Addition
    // Purpose : Add corresponding elements of both matrices
    // ======================================================

    for (int currentRowIndex = 0; currentRowIndex < numberOfRows; currentRowIndex++)
    {
        for (int currentColumnIndex = 0; currentColumnIndex < numberOfColumns; currentColumnIndex++)
        {
            resultMatrix[currentRowIndex][currentColumnIndex] =
                firstMatrix[currentRowIndex][currentColumnIndex] +
                secondMatrix[currentRowIndex][currentColumnIndex];  
            // Add elements at same position
        }
    }



    // ======================================================
    // CATEGORY: Display Result Matrix
    // Purpose : Output the sum of matrices
    // ======================================================

    cout << "\nSum of entered matrices:\n";

    for (int currentRowIndex = 0; currentRowIndex < numberOfRows; currentRowIndex++)
    {
        for (int currentColumnIndex = 0; currentColumnIndex < numberOfColumns; currentColumnIndex++)
        {
            cout << resultMatrix[currentRowIndex][currentColumnIndex] << "\t";  
            // Print each element with tab spacing
        }
        cout << endl;  
        // Move to next row
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
