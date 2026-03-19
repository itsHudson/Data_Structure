// ==========================================================
// CATEGORY: Binary Search Program (Sorted Array)
// Purpose : Search for a number in a sorted array using
//           Binary Search and measure execution time
// ==========================================================


// ==========================================================
// CATEGORY: Header Files / Libraries
// ==========================================================

#include <iostream>   // Allows input/output operations (cin, cout)
#include <ctime>      // Allows time measurement using clock()


// ==========================================================
// CATEGORY: Constant Definition
// ==========================================================

#define ARRAY_SIZE 10
// Define array size as 10 using a macro constant


using namespace std;


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Array Initialization
    // Purpose : Declare a sorted array required for Binary Search
    // ======================================================

    int SortedArray[ARRAY_SIZE] = {10,20,30,40,50,60,70,80,90,100};
    // Declare and initialize a sorted integer array


    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store search control values
    // ======================================================

    int IsValueFound, MinimumIndex, MaximumIndex, MiddleIndex, TargetNumber;
    // IsValueFound  → flag variable indicating whether the value is found
    // MinimumIndex  → starting index of the search range
    // MaximumIndex  → ending index of the search range
    // MiddleIndex   → middle position of the current search range
    // TargetNumber  → value entered by the user to search


    // ======================================================
    // CATEGORY: User Input
    // ======================================================

    cout << "Binary Search Program\n";
    // Display program title

    cout << "Enter number to search: ";
    // Prompt user to enter a value to search

    cin >> TargetNumber;
    // Read the number entered by the user



    // ======================================================
    // CATEGORY: Start Time Measurement
    // ======================================================

    clock_t StartTime = clock();
    // Record the starting time before the search begins


    IsValueFound = 0;
    // Initialize flag variable (0 means value not found)

    MinimumIndex = 0;
    // Set the first index of the array

    MaximumIndex = ARRAY_SIZE - 1;
    // Set the last index of the array



    // ======================================================
    // CATEGORY: Binary Search Algorithm
    // Purpose : Repeatedly divide the array to find the value
    // ======================================================

    while (MinimumIndex <= MaximumIndex && !IsValueFound) {
    // Continue searching while:
    // 1. The search range is valid
    // 2. The value has not yet been found

        MiddleIndex = (MinimumIndex + MaximumIndex) / 2;
        // Calculate the middle index of the current range

        if (TargetNumber == SortedArray[MiddleIndex]) {
        // If the middle value matches the target number

            IsValueFound = 1;
            // Mark the value as found
        }

        else if (TargetNumber < SortedArray[MiddleIndex]) {
        // If target number is smaller than the middle value

            MaximumIndex = MiddleIndex - 1;
            // Search the left half of the array
        }

        else {
        // If target number is larger than the middle value

            MinimumIndex = MiddleIndex + 1;
            // Search the right half of the array
        }
    }



    // ======================================================
    // CATEGORY: Stop Time Measurement
    // ======================================================

    clock_t EndTime = clock();
    // Record the ending time immediately after the search



    // ======================================================
    // CATEGORY: Display Search Result
    // ======================================================

    if (IsValueFound)
        cout << TargetNumber << " is found at index " << MiddleIndex << endl;
    // Display the index where the value is found

    else
        cout << TargetNumber << " is NOT found!" << endl;
    // Display message if the value does not exist in the array



    // ======================================================
    // CATEGORY: Execution Time Calculation
    // ======================================================

    double ExecutionTimeMilliseconds = double(EndTime - StartTime) / CLOCKS_PER_SEC * 1000;
    // Calculate the time difference between start and end
    // Convert the result to milliseconds


    cout << "Time taken by binary search: ";
    // Display execution time message

    cout << ExecutionTimeMilliseconds << " milliseconds" << endl;
    // Print the actual time taken by the binary search algorithm



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Return 0 indicates the program ended successfully
}
