// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout and cin



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin



// ==========================================================
// CATEGORY: Function - Display Array Values
// Purpose : Print all elements in the array
// ==========================================================

void DisplayArrayValues(int inputArray[], int totalNumberOfElements)
// inputArray[] → array parameter (receives array from main)
// totalNumberOfElements → number of elements in array
// return type → void (no return value)
{
    for (int currentIndex = 0; currentIndex < totalNumberOfElements; currentIndex++)
    {
        cout << inputArray[currentIndex] << ", ";  
        // Access each element and print with comma
    }
}



// ==========================================================
// SYNTAX: PASS ARRAY TO FUNCTION
// ==========================================================
/*
void functionName(dataType arrayName[], int size) {
    // use array
}
*/



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // ======================================================

    int totalNumberOfValues = 5;  
    // Define total number of elements

    int userInputArray[5];  
    // Declare array with size 5



    // ======================================================
    // CATEGORY: Input Loop
    // Purpose : Store user input into array
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfValues; currentIndex++)
    {
        cout << "Enter value's " << currentIndex + 1 << ": ";  
        // Display element number

        cin >> userInputArray[currentIndex];  
        // Store input into array
    }



    // ======================================================
    // CATEGORY: Output Message
    // ======================================================

    cout << endl << "Array values: ";  
    // Display heading



    // ======================================================
    // CATEGORY: Function Call
    // Purpose : Pass array to function
    // ======================================================

    DisplayArrayValues(userInputArray, totalNumberOfValues);  
    // Pass array and size to function



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
