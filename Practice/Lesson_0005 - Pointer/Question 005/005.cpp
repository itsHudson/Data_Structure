// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store the size of the dynamic array
    // ======================================================

    int ArraySize;
    // Variable used to store how many elements the array will contain



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask user to enter the size of the array
    // ======================================================

    cout << "Enter the size of array: ";

    cin >> ArraySize;
    // Read the number entered by the user



    cout << "\nNow, build an array with "
         << ArraySize
         << " columns.\n";
    // Inform the user how many elements the array will have



    cout << "Enter elements in the developed array:\n";
    // Ask the user to enter the actual array values



    // ======================================================
    // CATEGORY: Dynamic Memory Allocation
    // Purpose : Create array at runtime using heap memory
    // ======================================================

    int* ArrayPointer = new int[ArraySize];
    // Allocate memory for ArraySize integers
    // ArrayPointer stores the starting address of the array



    // ======================================================
    // CATEGORY: Input Array Elements Using Pointer
    // Purpose : Store values into dynamically allocated array
    // ======================================================

    for (int Index = 0; Index < ArraySize; Index++)
    {
        cin >> *(ArrayPointer + Index);
        // Move pointer to the correct memory position
        // and store the input value
    }



    // ======================================================
    // CATEGORY: Display Array Elements
    // Purpose : Print the stored array values
    // ======================================================

    cout << "\nThe array elements = ";



    for (int Index = 0; Index < ArraySize; Index++)
    {
        cout << *(ArrayPointer + Index);
        // Dereference pointer to read value at that location

        if (Index < ArraySize - 1)
        {
            cout << " , ";
            // Print comma separator except for the last element
        }
    }



    cout << endl;



    // ======================================================
    // CATEGORY: Free Allocated Memory
    // Purpose : Prevent memory leak
    // ======================================================

    delete[] ArrayPointer;
    // Release memory allocated by new[]



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
