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
    // Purpose : Store two numbers and their sum
    // ======================================================

    int NumberOne, NumberTwo, SumResult;
    // Integer variables used to store the two input numbers
    // and the final sum result



    // ======================================================
    // CATEGORY: Pointer Declaration
    // Purpose : Store memory addresses of the integers
    // ======================================================

    int* PointerOne;
    // Pointer that will store the memory address of NumberOne

    int* PointerTwo;
    // Pointer that will store the memory address of NumberTwo



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask user to enter two numbers
    // ======================================================

    cout << "Enter any two numbers: ";

    cin >> NumberOne >> NumberTwo;
    // Store the two numbers entered by the user



    // ======================================================
    // CATEGORY: Assign Pointers
    // Purpose : Store addresses of variables into pointers
    // ======================================================

    PointerOne = &NumberOne;
    // Store the address of NumberOne inside PointerOne

    PointerTwo = &NumberTwo;
    // Store the address of NumberTwo inside PointerTwo



    // ======================================================
    // CATEGORY: Display Variable Address and Value
    // Purpose : Show where the variables exist in memory
    // ======================================================

    cout << "Address of NumberOne = "
         << &NumberOne
         << " ; Value of NumberOne = "
         << NumberOne
         << endl;

    cout << "Address of NumberTwo = "
         << &NumberTwo
         << " ; Value of NumberTwo = "
         << NumberTwo
         << endl << endl;



    // ======================================================
    // CATEGORY: Display Pointer Information
    // Purpose : Show stored address and dereferenced value
    // ======================================================

    cout << "Address stored in PointerOne = "
         << PointerOne
         << " ; Value pointed by PointerOne = "
         << *PointerOne
         << endl;

    cout << "Address stored in PointerTwo = "
         << PointerTwo
         << " ; Value pointed by PointerTwo = "
         << *PointerTwo
         << endl << endl;



    // ======================================================
    // CATEGORY: Calculate Sum Using Pointers
    // Purpose : Add the values stored in the addresses
    // ======================================================

    SumResult = *PointerOne + *PointerTwo;
    // Dereference the pointers to access actual values
    // Equivalent to: SumResult = NumberOne + NumberTwo



    // ======================================================
    // CATEGORY: Display Result
    // ======================================================

    cout << "Sum = " << SumResult << endl;



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
