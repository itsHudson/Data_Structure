// ==========================================================
// CATEGORY: Header Files
// Purpose : Include the library needed for input and output
// ==========================================================

#include <iostream>      // Allows usage of cout (output) and cin (input)

using namespace std;     // Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Recursive Function (Reverse Display)
// Purpose : Print numbers from end → start using recursion
// Example : StartValue=1 EndValue=5 → prints 5 + 4 + 3 + 2 + 1
// ==========================================================

void RecursiveReverseDisplayNumber(int StartValue, int EndValue)
{
    if (EndValue < StartValue)     
        // Base condition: if EndValue becomes smaller than StartValue
        return;                    
        // Stop recursion because there are no numbers left

    cout << EndValue;              
    // Print the current number

    if (EndValue > StartValue)     
        // If it is NOT the last number
        cout << " + ";             
        // Print "+" symbol between numbers

    RecursiveReverseDisplayNumber(StartValue, EndValue - 1);
    // Recursive call
    // The function calls itself again with EndValue reduced by 1
    // This moves the sequence backwards (EndValue → StartValue)
}



// ==========================================================
// CATEGORY: Recursive Function (Sum Calculation)
// Purpose : Calculate the sum of numbers from end → start
// Example : 5 + 4 + 3 + 2 + 1
// ==========================================================

int RecursiveCalSum(int StartValue, int EndValue)
{
    if (EndValue < StartValue)     
        // Base condition: stop when EndValue < StartValue
        return 0;                  
        // Return 0 because there are no more numbers to add

    // Recursive formula
    return EndValue + RecursiveCalSum(StartValue, EndValue - 1);

    /*
       Explanation:
       EndValue + RecursiveCalSum(StartValue, EndValue - 1)

       Example if EndValue = 5:
       5 + RecursiveCalSum(1,4)
       5 + (4 + RecursiveCalSum(1,3))
       5 + 4 + (3 + RecursiveCalSum(1,2))
       ...
    */
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    int StartValue, EndValue;
    // Variables to store the starting and ending numbers entered by the user


    cout << "Enter a start value: ";
    cin >> StartValue;
    // Read the starting number from the user


    cout << "Enter an end value: ";
    cin >> EndValue;
    // Read the ending number from the user


    cout << endl;
    // Print a blank line for better formatting


    // ======================================================
    // CATEGORY: Display Reverse Sequence
    // Purpose : Show the recursive sequence of numbers
    // ======================================================

    RecursiveReverseDisplayNumber(StartValue, EndValue);
    // Call the recursive function to print numbers from EndValue → StartValue


    cout << " = ";
    // Print "=" before displaying the final sum


    // ======================================================
    // CATEGORY: Calculate Sum
    // Purpose : Use recursion to calculate the total sum
    // ======================================================

    cout << RecursiveCalSum(StartValue, EndValue) << endl;
    // Call the recursive sum function and display the result


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;                 
    // Indicates the program ended successfully
}
