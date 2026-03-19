// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries required for input/output
//           and string data type
// ==========================================================

#include <iostream>   // Allows use of cout and cin for console input/output
#include <string>     // Allows use of the string data type

using namespace std;  // Allows us to write cout instead of std::cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Create variables to store different data
    // ======================================================

    string Word = "abc";
    // Create a string variable named Word and store "abc"

    int IntegerValue = 1;
    // Create an integer variable and store value 1

    float RealNumber = 10.4f;
    // Create a floating-point variable and store decimal value 10.4

    long long BigInteger = 98989898911;
    // Create a long long variable to store a very large number



    // ======================================================
    // CATEGORY: Pointer Declaration
    // Purpose : Create pointers that store memory addresses
    // ======================================================

    string* PointerWord = &Word;
    // PointerWord stores the memory address of Word

    int* PointerInteger = &IntegerValue;
    // PointerInteger stores the memory address of IntegerValue

    float* PointerReal = &RealNumber;
    // PointerReal stores the memory address of RealNumber

    long long* PointerBigInteger = &BigInteger;
    // PointerBigInteger stores the memory address of BigInteger



    // ======================================================
    // CATEGORY: Display Value and Memory Address
    // Purpose : Print both the variable value and address
    // ======================================================

    cout << "Value of Word = "
         << *PointerWord
         // Dereference pointer to access the value stored at that address

         << ", Memory address of Word = "
         << PointerWord
         // Print the memory address itself

         << endl;



    cout << "Value of IntegerValue = "
         << *PointerInteger
         // Access value stored at the pointer address

         << ", Memory address of IntegerValue = "
         << PointerInteger
         // Display address of IntegerValue

         << endl;



    cout << "Value of RealNumber = "
         << *PointerReal
         // Dereference pointer to get float value

         << ", Memory address of RealNumber = "
         << PointerReal
         // Display address of RealNumber

         << endl;



    cout << "Value of BigInteger = "
         << *PointerBigInteger
         // Dereference pointer to access large integer value

         << ", Memory address of BigInteger = "
         << PointerBigInteger
         // Display memory address of BigInteger

         << endl;



    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ======================================================

    return 0;
}
