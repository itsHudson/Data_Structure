// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout for output display

using namespace std;
// Avoid writing std:: before cout



// ==========================================================
// CATEGORY: Function 1 - Pointer Version
// Purpose : Modify array elements using pointer notation
// ==========================================================

void addOnetoEachValue1(int * billy, int size)
{
    // billy is a pointer to the first element of the array

    for (int i = 0; i < size; i++)
    {
        // Loop through each element of the array

        // billy[i] is equivalent to *(billy + i)
        // *(billy + i) means access value at memory offset

        billy[i] = billy[i] + 1;
        // Increase each element by 1
    }
}



// ==========================================================
// CATEGORY: Function 2 - Array Version
// Purpose : Modify array elements using array notation
// ==========================================================

void addOnetoEachValue2(int billy[], int size)
{
    // billy[] is treated the same as int* billy (pointer)

    for (int i = 0; i < size; i++)
    {
        // Loop through each element

        billy[i] = billy[i] + 1;
        // Increase each element by 1
    }
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    // ======================================================
    // CATEGORY: Array Declaration
    // Purpose : Store multiple integer values
    // ======================================================

    int billy[] = { 4, 7, 3, 5, 8 };
    // Declare and initialize array with 5 elements

    int lengthOfBilly = size(billy);
    // Get number of elements in array



    // ======================================================
    // CATEGORY: Call Function 1 (Pointer Version)
    // ======================================================

    addOnetoEachValue1(billy, lengthOfBilly);
    // Pass array to function (array decays to pointer)

    cout << "After function 1, result as below: " << endl;

    for (int i = 0; i < lengthOfBilly; i++)
    {
        cout << billy[i] << " , ";
        // Display each updated element
    }
    cout << endl;



    // ======================================================
    // CATEGORY: Call Function 2 (Array Version)
    // ======================================================

    addOnetoEachValue2(billy, lengthOfBilly);
    // Pass array again to second function

    cout << "After function 2, result as below: " << endl;

    for (int i = 0; i < lengthOfBilly; i++)
    {
        cout << billy[i] << " , ";
        // Display updated values again
    }
    cout << endl;



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
