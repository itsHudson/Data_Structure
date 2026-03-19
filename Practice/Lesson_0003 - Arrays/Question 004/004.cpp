// ==========================================================
// CATEGORY: Recursive Binary Search Program
// Purpose : Search for a number using recursive binary search
//           and measure execution time
// ==========================================================


// ==========================================================
// CATEGORY: Header Files / Libraries
// ==========================================================

#include <iostream>   // For input and output (cin, cout)
#include <ctime>      // For measuring execution time using clock()


// ==========================================================
// CATEGORY: Constant Definition
// ==========================================================

#define ARRAY_SIZE 10
// Define array size as 10 using a macro constant


using namespace std;


// ==========================================================
// CATEGORY: Function Prototype
// Purpose : Declare recursive binary search function
// ==========================================================

int RecursiveBinarySearch(int MinimumIndex, int MaximumIndex, int SortedArray[], int TargetNumber);
// Recursive function used to perform binary search



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Array Initialization
    // Purpose : Declare sorted array required for binary search
    // ======================================================

    int SortedArray[ARRAY_SIZE] = {10,20,30,40,50,60,70,80,90,100};
    // Sorted array is required for binary search to work correctly


    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store user input and search result index
    // ======================================================

    int ResultIndex, TargetNumber;
    // ResultIndex → stores the index returned by binary search
    // TargetNumber → value entered by the user to search


    // ======================================================
    // CATEGORY: User Input
    // ======================================================

    cout << "Recursive Binary Search\n";
    // Display program title

    cout << "Enter number to search: ";
    // Prompt the user to enter a number

    cin >> TargetNumber;
    // Read the number entered by the user



    // ======================================================
    // CATEGORY: Start Time Measurement
    // ======================================================

    clock_t StartTime = clock();
    // Record starting time before the search begins



    // ======================================================
    // CATEGORY: Recursive Binary Search Call
    // ======================================================

    ResultIndex = RecursiveBinarySearch(0, ARRAY_SIZE - 1, SortedArray, TargetNumber);
    // Call recursive binary search function
    // Search starts from index 0 to ARRAY_SIZE - 1



    // ======================================================
    // CATEGORY: Stop Time Measurement
    // ======================================================

    clock_t EndTime = clock();
    // Record ending time after search completes



    // ======================================================
    // CATEGORY: Display Search Result
    // ======================================================

    if (ResultIndex >= 0)
        cout << TargetNumber << " is found at index " << ResultIndex << endl;
    // If index is 0 or greater, the value exists in the array

    else
        cout << TargetNumber << " is NOT found!" << endl;
    // If index is negative, the value does not exist



    // ======================================================
    // CATEGORY: Execution Time Calculation
    // ======================================================

    double ExecutionTimeMilliseconds =
        double(EndTime - StartTime) / CLOCKS_PER_SEC * 1000;
    // Calculate the time difference between start and end
    // Convert the time to milliseconds


    cout << "Time taken by recursive binary search: "
         << ExecutionTimeMilliseconds << " milliseconds" << endl;
    // Display execution time


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Return 0 indicates successful program execution
}



// ==========================================================
// CATEGORY: Recursive Binary Search Function
// Purpose : Recursively divide the array to locate the target
// ==========================================================

int RecursiveBinarySearch(int MinimumIndex, int MaximumIndex, int SortedArray[], int TargetNumber) {

    int MiddleIndex;
    // Variable used to store the middle index of the search range


    // ======================================================
    // CATEGORY: Search Condition Check
    // Purpose : Continue searching while valid range exists
    // ======================================================

    if (MinimumIndex <= MaximumIndex) {

        MiddleIndex = (MinimumIndex + MaximumIndex) / 2;
        // Calculate the middle index of the current range


        if (TargetNumber == SortedArray[MiddleIndex])
            return MiddleIndex;
        // If the value matches the middle element, return the index


        else if (TargetNumber < SortedArray[MiddleIndex])
            return RecursiveBinarySearch(MinimumIndex, MiddleIndex - 1, SortedArray, TargetNumber);
        // If target is smaller, search the left half


        else
            return RecursiveBinarySearch(MiddleIndex + 1, MaximumIndex, SortedArray, TargetNumber);
        // If target is larger, search the right half
    }


    return -1;
    // If the search range becomes invalid, value is not found
}
