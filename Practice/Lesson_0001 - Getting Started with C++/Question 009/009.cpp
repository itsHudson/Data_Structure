// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>
// Allows usage of cout to display output

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
    // Purpose : Track printed numbers per row
    // ======================================================

    int NumbersPrintedInRow = 0;
    // Counts how many numbers have been printed in the current row



    // ======================================================
    // CATEGORY: Even Number Loop
    // Purpose : Generate even numbers between 1 and 50
    // ======================================================

    for (int EvenNumber = 2; EvenNumber <= 50; EvenNumber += 2)
    // Start at 2 and increase by 2 each time to get even numbers
    {

        cout << EvenNumber << "\t";
        // Print the current even number followed by a tab space

        NumbersPrintedInRow++;
        // Increase counter for numbers printed in the row



        // --------------------------------------------------
        // CATEGORY: Row Control
        // Purpose : Move to next line after 5 numbers
        // --------------------------------------------------

        if (NumbersPrintedInRow == 5)
        {
            cout << endl;
            // Move to the next line

            NumbersPrintedInRow = 0;
            // Reset counter for the next row
        }
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates successful program execution
}
