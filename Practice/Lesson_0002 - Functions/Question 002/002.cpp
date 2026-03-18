// ==========================================================
// CATEGORY: Header Files
// Purpose : Include the library needed for input and output
// ==========================================================

#include <iostream>      // Allows usage of cout (output) and cin (input)

using namespace std;     // Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Recursive Function (Reverse Display)
// Purpose : Print numbers from end → start using recursion
// Example : start=1 end=5 → prints 5 + 4 + 3 + 2 + 1
// ==========================================================

void RecursiveReverseDisplayNumber(int start, int end)
{
    if (end < start)          // Base condition: if end becomes smaller than start
        return;               // Stop recursion because there are no numbers left

    cout << end;              // Print the current number

    if (end > start)          // If it is NOT the last number
        cout << " + ";        // Print "+" symbol between numbers

    RecursiveReverseDisplayNumber(start, end - 1);
    // Recursive call
    // The function calls itself again with end reduced by 1
    // This moves the sequence backwards (end → start)
}



// ==========================================================
// CATEGORY: Recursive Function (Sum Calculation)
// Purpose : Calculate the sum of numbers from end → start
// Example : 5 + 4 + 3 + 2 + 1
// ==========================================================

int RecursiveCalSum(int start, int end)
{
    if (end < start)          // Base condition: stop when end < start
        return 0;             // Return 0 because there are no more numbers to add

    // Recursive formula
    return end + RecursiveCalSum(start, end - 1);

    /*
       Explanation:
       end + RecursiveCalSum(start, end - 1)

       Example if end=5:
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
    int startvalue, endvalue;
    // Variables to store the starting and ending numbers entered by the user


    cout << "Enter a start value: ";
    cin >> startvalue;
    // Read the starting number from the user


    cout << "Enter an end value: ";
    cin >> endvalue;
    // Read the ending number from the user


    cout << endl;
    // Print a blank line for better formatting


    // ======================================================
    // CATEGORY: Display Reverse Sequence
    // Purpose : Show the recursive sequence of numbers
    // ======================================================

    RecursiveReverseDisplayNumber(startvalue, endvalue);
    // Call the recursive function to print numbers from end → start


    cout << " = ";
    // Print "=" before displaying the final sum


    // ======================================================
    // CATEGORY: Calculate Sum
    // Purpose : Use recursion to calculate the total sum
    // ======================================================

    cout << RecursiveCalSum(startvalue, endvalue) << endl;
    // Call the recursive sum function and display the result


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;                 // Indicates the program ended successfully
}
