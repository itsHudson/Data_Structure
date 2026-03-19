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
    // Purpose : Store an integer value
    // ======================================================

    int NumberValue = 10;
    // Create an integer variable and assign value 10



    // ======================================================
    // CATEGORY: Pointer Declaration
    // Purpose : Create a pointer that stores an address
    // ======================================================

    int* PointerNumber;
    // Pointer that can store the address of an integer variable



    // ======================================================
    // CATEGORY: Assign Pointer Address
    // Purpose : Store address of NumberValue into pointer
    // ======================================================

    PointerNumber = &NumberValue;
    // "&NumberValue" gets the memory address of NumberValue
    // PointerNumber now stores that address



    // ======================================================
    // CATEGORY: Display Variable Information
    // Purpose : Show value and memory location of NumberValue
    // ======================================================

    cout << "Address of NumberValue = "
         << &NumberValue
         << endl;
    // Print the memory address where NumberValue is stored

    cout << "Value of NumberValue = "
         << NumberValue
         << endl << endl;
    // Print the actual value stored in the variable



    // ======================================================
    // CATEGORY: Display Pointer Information
    // Purpose : Show pointer address, stored address, and value
    // ======================================================

    cout << "Address of PointerNumber = "
         << &PointerNumber
         << endl;
    // Print the memory address where the pointer itself is stored


    cout << "Value stored in PointerNumber = "
         << PointerNumber
         << endl;
    // Print the address stored inside the pointer
    // This should match the address of NumberValue


    cout << "Value pointed by PointerNumber = "
         << *PointerNumber
         << endl;
    // Dereference pointer to read the value stored at that address



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
