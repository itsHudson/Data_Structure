// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Function Prototype
// Purpose : Inform the compiler that swap() exists later
// ==========================================================

void SwapNumbers(int* FirstValuePointer, int* SecondValuePointer);
// This function will receive memory addresses of two integers
// and swap their values using pointers



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store two numbers entered by the user
    // ======================================================

    int NumberOne, NumberTwo;



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask the user to enter two numbers
    // ======================================================

    cout << "Enter two numbers: ";

    cin >> NumberOne >> NumberTwo;
    // Store user input into NumberOne and NumberTwo



    // ======================================================
    // CATEGORY: Display Values Before Swapping
    // ======================================================

    cout << "\nBefore swapping in main function:\n";

    cout << "Value of NumberOne = " << NumberOne << endl;

    cout << "Value of NumberTwo = " << NumberTwo << endl;



    // ======================================================
    // CATEGORY: Call Swap Function (Call by Reference)
    // Purpose : Send memory addresses to the swap function
    // ======================================================

    SwapNumbers(&NumberOne, &NumberTwo);
    // "&NumberOne" gets the memory address of NumberOne
    // "&NumberTwo" gets the memory address of NumberTwo
    // The function will modify the real variables in memory



    // ======================================================
    // CATEGORY: Display Values After Swapping
    // ======================================================

    cout << "\nAfter swapping in main function:\n";

    cout << "Value of NumberOne = " << NumberOne << endl;

    cout << "Value of NumberTwo = " << NumberTwo << endl;



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}



// ==========================================================
// CATEGORY: Swap Function
// Purpose : Swap values using pointer addresses
// ==========================================================

void SwapNumbers(int* FirstValuePointer, int* SecondValuePointer)
{

    int TemporaryValue = *FirstValuePointer;
    // Save value stored at FirstValuePointer

    *FirstValuePointer = *SecondValuePointer;
    // Copy value from SecondValuePointer into FirstValuePointer

    *SecondValuePointer = TemporaryValue;
    // Put saved value into SecondValuePointer



    // ======================================================
    // CATEGORY: Display Values Inside Swap Function
    // ======================================================

    cout << "\nAfter swapping in swap function:\n";

    cout << "Value of FirstValuePointer = "
         << *FirstValuePointer
         << endl;

    cout << "Value of SecondValuePointer = "
         << *SecondValuePointer
         << endl;

}
