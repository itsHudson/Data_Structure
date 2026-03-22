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
// CATEGORY: Function 1 - Prime Number Checker
// Purpose : Determine whether a given number is prime
// ==========================================================

bool CheckIfNumberIsPrime(int inputNumber)
// Function name: CheckIfNumberIsPrime
// Parameter: inputNumber (integer to be checked)
// Return type: bool (true or false)
{
    // ======================================================
    // CATEGORY: Base Condition Check
    // Purpose : Numbers ≤ 1 are NOT prime
    // ======================================================

    if (inputNumber <= 1)
        return false;  
        // Return false immediately if number is 0, 1, or negative



    // ======================================================
    // CATEGORY: Divisibility Check Loop
    // Purpose : Check if number has any divisor
    // ======================================================

    for (int currentDivisor = 2; 
         currentDivisor <= inputNumber / 2; 
         currentDivisor++)
    {
        // Start from 2 (smallest prime)
        // End at inputNumber / 2
        // If divisible → not prime

        if (inputNumber % currentDivisor == 0)
        {
            return false;  
            // If divisible, number is NOT prime
        }
    }



    // ======================================================
    // CATEGORY: Prime Confirmation
    // Purpose : If no divisor found, number is prime
    // ======================================================

    return true;  
    // Return true → number is prime
}



// ==========================================================
// SYNTAX: FUNCTION (RETURN TYPE)
// ==========================================================
/*
returnType functionName(parameterType parameterName) {
    // statements
    return value;
}
*/



// ==========================================================
// CATEGORY: Function 2 - Display Prime Numbers in Range
// Purpose : Print all prime numbers between two values
// ==========================================================

void DisplayPrimeNumbersBetweenRange(int startRangeValue, int endRangeValue)
// Function name: DisplayPrimeNumbersBetweenRange
// Parameters: startRangeValue, endRangeValue
// Return type: void (no return value)
{
    cout << "\nPrime Numbers between "
         << startRangeValue << " and "
         << endRangeValue << endl;

    cout << "====================================================" << endl;



    // ======================================================
    // CATEGORY: Loop Through Range
    // Purpose : Check each number in the range
    // ======================================================

    for (int currentNumberInRange = startRangeValue; 
         currentNumberInRange <= endRangeValue; 
         currentNumberInRange++)
    {
        // Loop from start value to end value

        if (CheckIfNumberIsPrime(currentNumberInRange))
        {
            // Call function to check if number is prime

            cout << currentNumberInRange << "\t";  
            // Print prime number
        }
    }

    cout << endl;
    cout << "====================================================" << endl;
}



// ==========================================================
// SYNTAX: VOID FUNCTION
// ==========================================================
/*
void functionName(parameters) {
    // statements
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

    int userInputStartValue;  
    // Store starting value of range

    int userInputEndValue;    
    // Store ending value of range



    // ======================================================
    // CATEGORY: Input Section
    // ======================================================

    cout << "Enter start value: ";  
    // Ask user for start range

    cin >> userInputStartValue;  
    // Store input


    cout << "Enter end value: ";  
    // Ask user for end range

    cin >> userInputEndValue;  
    // Store input



    // ======================================================
    // CATEGORY: Function Call
    // Purpose : Execute prime number display
    // ======================================================

    DisplayPrimeNumbersBetweenRange(userInputStartValue, userInputEndValue);  
    // Call function with user inputs



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
