// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>
// Provides cout and endl for displaying output

using namespace std;
// Avoid writing std:: before cout and endl



// ==========================================================
// CATEGORY: Function 1 - Pass by Value
// Purpose : Receive copies of variables, so original values
//           in main() are NOT changed
// ==========================================================

void summation1(int a, int b)
{
    a = a + 1;
    // Increase local copy of a by 1

    b = b + 2;
    // Increase local copy of b by 2

    cout << "value a: " << a << endl;
    // Display updated local value of a

    cout << "value b: " << b << endl;
    // Display updated local value of b
}



// ==========================================================
// CATEGORY: Function 2 - Pass by Pointer
// Purpose : Receive memory addresses, so original values
//           in main() CAN be changed directly
// ==========================================================

void summation2(int* a, int* b)
{
    *a = *a + 1;
    // Dereference pointer a and increase original value by 1

    *b = *b + 2;
    // Dereference pointer b and increase original value by 2

    cout << "value a: " << *a << endl;
    // Display updated original value of a

    cout << "value b: " << *b << endl;
    // Display updated original value of b
}



// ==========================================================
// CATEGORY: Function 3 - Pass by Reference
// Purpose : Use reference variables, so original values
//           in main() CAN be changed directly
// ==========================================================

void summation3(int &a, int &b)
{
    a = a + 1;
    // Increase original value of a by 1 through reference

    b = b + 2;
    // Increase original value of b by 2 through reference

    cout << "value a: " << a << endl;
    // Display updated original value of a

    cout << "value b: " << b << endl;
    // Display updated original value of b
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store initial values
    // ======================================================

    int value1 = 18;
    // Declare and initialize value1

    int value2 = 20;
    // Declare and initialize value2



    // ======================================================
    // CATEGORY: Test Function 1 - Pass by Value
    // Purpose : Show that original values remain unchanged
    // ======================================================

    cout << "After function 1: " << endl;
    // Display heading for function 1 result

    summation1(value1, value2);
    // Send copies of value1 and value2 to function

    cout << "value 1 : " << value1 << endl;
    // Original value1 is still unchanged

    cout << "value 2 : " << value2 << endl;
    // Original value2 is still unchanged



    // ======================================================
    // CATEGORY: Test Function 2 - Pass by Pointer
    // Purpose : Show that original values are modified
    // ======================================================

    cout << endl << "After function 2: " << endl;
    // Display heading for function 2 result

    summation2(&value1, &value2);
    // Send addresses of value1 and value2 to function

    cout << "value 1 : " << value1 << endl;
    // Original value1 has been changed

    cout << "value 2 : " << value2 << endl;
    // Original value2 has been changed



    // ======================================================
    // CATEGORY: Test Function 3 - Pass by Reference
    // Purpose : Show that original values are modified
    // ======================================================

    cout << endl << "After function 3: " << endl;
    // Display heading for function 3 result

    summation3(value1, value2);
    // Send variables directly by reference

    cout << "value 1 : " << value1 << endl;
    // Original value1 has been changed again

    cout << "value 2 : " << value2 << endl;
    // Original value2 has been changed again



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // End program successfully
}
