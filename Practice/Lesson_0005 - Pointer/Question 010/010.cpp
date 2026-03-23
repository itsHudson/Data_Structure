// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout for output display

using namespace std;
// Avoid writing std:: before cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

// ==========================================================
// CATEGORY: Variable Declaration
// Purpose : Store integer values
// ==========================================================

    int a = 9;
    // Declare integer variable 'a' and assign value 9

    int b = 10;
    // Declare integer variable 'b' and assign value 10



// ==========================================================
// CATEGORY: Pointer Declaration
// Purpose : Store memory addresses of variables
// ==========================================================

    int* pointer1 = NULL;
    // Declare pointer1 that can store address of an integer
    // Initialize with NULL (points to nothing)

    int* pointer2 = NULL;
    // Declare pointer2 and initialize to NULL



// ==========================================================
// CATEGORY: Assign Address to Pointer
// Purpose : Make pointer refer to variables
// ==========================================================

    pointer1 = &a;
    // Store address of variable 'a' into pointer1

    pointer2 = &b;
    // Store address of variable 'b' into pointer2



// ==========================================================
// CATEGORY: Display Memory Addresses
// Purpose : Show how pointers store addresses
// ==========================================================

    cout << "The address of a from the variable a : " << &a << endl;
    // Display address of 'a' using address-of operator (&)

    cout << "The address of b from the variable b : " << &b << endl;
    // Display address of 'b'

    cout << "The address of a from the pointer : " << pointer1 << endl;
    // Display address stored inside pointer1 (should match &a)

    cout << "The address of b from the pointer : " << pointer2 << endl;
    // Display address stored inside pointer2 (should match &b)

    cout << "The address of pointer 1 : " << &pointer1 << endl;
    // Display address of pointer1 itself (different from &a)

    cout << "The address of pointer 2 : " << &pointer2 << endl;
    // Display address of pointer2 itself



// ==========================================================
// CATEGORY: Dereferencing Pointer
// Purpose : Access value stored at the address
// ==========================================================

    cout << "Content a getting from pointer 1 is " << *pointer1 << endl;
    // *pointer1 means "value at address of a" → outputs 9

    cout << "Content b getting from pointer 2 is " << *pointer2 << endl;
    // *pointer2 → outputs 10



// ==========================================================
// CATEGORY: Modify Value Using Pointer
// Purpose : Change original variable value via pointer
// ==========================================================

    *pointer1 = 20;
    // Change value at address of 'a' → a becomes 20

    *pointer2 = 38;
    // Change value at address of 'b' → b becomes 38



    cout << "New value in variable a : " << a << endl;
    // Display updated value of 'a' (20)

    cout << "New value in variable b : " << b << endl;
    // Display updated value of 'b' (38)



// ==========================================================
// CATEGORY: Pointer Swapping
// Purpose : Exchange addresses stored in pointers
// ==========================================================

    int* temp = pointer1;
    // Temporary pointer stores address of 'a'

    pointer1 = pointer2;
    // pointer1 now points to 'b'

    pointer2 = temp;
    // pointer2 now points to 'a'



// ==========================================================
// CATEGORY: Verify Pointer Swap
// Purpose : Show pointers now refer to different variables
// ==========================================================

    cout << "My pointer1 is referring to variable b now: " << *pointer1 << endl;
    // pointer1 now points to b → value 38

    cout << "My pointer2 is referring to variable a now: " << *pointer2 << endl;
    // pointer2 now points to a → value 20



// ==========================================================
// CATEGORY: Program Termination
// ==========================================================

    return 0;
    // End program successfully
}
