// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>
// Allows usage of cin and cout

using namespace std;
// Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store number of rows for the diamond
    // ======================================================

    int NumberOfRows;
    // Stores the number of rows entered by the user



    // ======================================================
    // CATEGORY: User Input
    // ======================================================

    cout << "Enter number of rows (for diamond triangle dimension): ";
    cin >> NumberOfRows;
    // Read number of rows from the user



    // ======================================================
    // CATEGORY: Upper Half of Diamond
    // Purpose : Print the top triangle of the diamond
    // ======================================================

    for (int CurrentRow = 1; CurrentRow <= NumberOfRows; CurrentRow++)
    // Loop through each row of the upper triangle
    {

        for (int SpaceIndex = 1; SpaceIndex <= NumberOfRows - CurrentRow; SpaceIndex++)
        // Print spaces before stars
        {
            cout << " ";
        }

        for (int StarIndex = 1; StarIndex <= (2 * CurrentRow - 1); StarIndex++)
        // Print stars in increasing order
        {
            cout << "*";
        }

        cout << endl;
        // Move to next line after finishing each row
    }



    // ======================================================
    // CATEGORY: Lower Half of Diamond
    // Purpose : Print the bottom triangle of the diamond
    // ======================================================

    for (int CurrentRow = NumberOfRows - 1; CurrentRow >= 1; CurrentRow--)
    // Loop through rows in reverse order
    {

        for (int SpaceIndex = 1; SpaceIndex <= NumberOfRows - CurrentRow; SpaceIndex++)
        // Print leading spaces
        {
            cout << " ";
        }

        for (int StarIndex = 1; StarIndex <= (2 * CurrentRow - 1); StarIndex++)
        // Print stars in decreasing order
        {
            cout << "*";
        }

        cout << endl;
        // Move to next line
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates program finished successfully
}
