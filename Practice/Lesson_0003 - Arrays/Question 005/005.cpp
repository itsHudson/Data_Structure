// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and timing
// ==========================================================

#include <iostream>   // Allows input/output operations (cin, cout)
#include <chrono>     // Provides time measurement utilities

using namespace std;
using namespace std::chrono;


// ==========================================================
// FUNCTION PROTOTYPES
// Purpose : Declare functions before main()
// ==========================================================

void PrintArray(int InputArray[], int ArraySize);
// Function used to display array elements

void BubbleSort(int InputArray[], int ArraySize);
// Function used to perform Bubble Sort

void InsertionSort(int InputArray[], int ArraySize);
// Function used to perform Insertion Sort



// ==========================================================
// MAIN FUNCTION
// Purpose : Program execution starts here
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Array Initialization
    // Purpose : Create original array to be sorted
    // ======================================================

    int OriginalArray[] = {4, 2, 1, 3, 5};
    // Declare an integer array containing unsorted values

    int ArraySize = sizeof(OriginalArray) / sizeof(OriginalArray[0]);
    // Calculate number of elements in the array


    int BubbleSortArray[5];
    int InsertionSortArray[5];
    // Create two arrays to store copies for each sorting algorithm


    // ======================================================
    // CATEGORY: Copy Original Array
    // Purpose : Ensure both algorithms sort identical data
    // ======================================================

    for(int CurrentIndex = 0; CurrentIndex < ArraySize; CurrentIndex++){
        // Loop through the original array

        BubbleSortArray[CurrentIndex] = OriginalArray[CurrentIndex];
        // Copy value into Bubble Sort array

        InsertionSortArray[CurrentIndex] = OriginalArray[CurrentIndex];
        // Copy value into Insertion Sort array
    }


    // ======================================================
    // CATEGORY: BUBBLE SORT SECTION
    // ======================================================

    cout << "Original Array: ";
    // Display label before printing array

    PrintArray(OriginalArray, ArraySize);
    // Display the original unsorted array


    auto StartTime = high_resolution_clock::now();
    // Record starting time before Bubble Sort begins


    BubbleSort(BubbleSortArray, ArraySize);
    // Perform Bubble Sort on copied array


    auto EndTime = high_resolution_clock::now();
    // Record ending time after sorting completes


    auto BubbleSortDuration =
        duration_cast<microseconds>(EndTime - StartTime);
    // Calculate Bubble Sort execution time


    cout << "\nBubble Sort Result: ";
    // Display result label

    PrintArray(BubbleSortArray, ArraySize);
    // Display sorted array


    cout << "Bubble Sort Execution Time: "
         << BubbleSortDuration.count()
         << " microseconds\n";
    // Display Bubble Sort execution time



    // ======================================================
    // CATEGORY: INSERTION SORT SECTION
    // ======================================================

    StartTime = high_resolution_clock::now();
    // Record starting time before Insertion Sort begins


    InsertionSort(InsertionSortArray, ArraySize);
    // Perform Insertion Sort


    EndTime = high_resolution_clock::now();
    // Record ending time


    auto InsertionSortDuration =
        duration_cast<microseconds>(EndTime - StartTime);
    // Calculate Insertion Sort execution time


    cout << "\nInsertion Sort Result: ";
    // Display result label

    PrintArray(InsertionSortArray, ArraySize);
    // Display sorted array


    cout << "Insertion Sort Execution Time: "
         << InsertionSortDuration.count()
         << " microseconds\n";
    // Display execution time


    return 0;
}



// ==========================================================
// FUNCTION: PrintArray
// Purpose : Display array elements
// ==========================================================

void PrintArray(int InputArray[], int ArraySize){

    for(int CurrentIndex = 0; CurrentIndex < ArraySize; CurrentIndex++){
    // Loop through all array elements

        cout << InputArray[CurrentIndex];
        // Print current array value

        if(CurrentIndex < ArraySize - 1)
            cout << ", ";
        // Print comma separator if not the last element
    }

    cout << endl;
    // Move to the next line
}



// ==========================================================
// FUNCTION: BubbleSort
// Purpose : Sort array using Bubble Sort algorithm
// ==========================================================

void BubbleSort(int InputArray[], int ArraySize){

    int TemporaryValue;
    // Variable used for swapping elements

    for(int Iteration = 0; Iteration < ArraySize - 1; Iteration++){
    // Outer loop controls number of passes

        for(int CurrentIndex = 0;
            CurrentIndex < ArraySize - 1 - Iteration;
            CurrentIndex++){
        // Inner loop compares adjacent elements

            if(InputArray[CurrentIndex] >
               InputArray[CurrentIndex + 1]){
            // If elements are in wrong order

                TemporaryValue = InputArray[CurrentIndex];
                // Store first value temporarily

                InputArray[CurrentIndex] =
                    InputArray[CurrentIndex + 1];
                // Move second value forward

                InputArray[CurrentIndex + 1] =
                    TemporaryValue;
                // Place stored value in second position
            }
        }
    }
}



// ==========================================================
// FUNCTION: InsertionSort
// Purpose : Sort array using Insertion Sort algorithm
// ==========================================================

void InsertionSort(int InputArray[], int ArraySize){

    int CurrentIndex, TemporaryValue;
    // CurrentIndex used for position tracking
    // TemporaryValue used during swapping

    for(int UnsortedIndex = 1;
        UnsortedIndex < ArraySize;
        UnsortedIndex++){
    // Loop through unsorted portion of array

        CurrentIndex = UnsortedIndex;
        // Start comparison from the current element

        while(CurrentIndex > 0 &&
              InputArray[CurrentIndex - 1] >
              InputArray[CurrentIndex]){
        // Continue swapping while elements are out of order

            TemporaryValue = InputArray[CurrentIndex];
            // Store current value

            InputArray[CurrentIndex] =
                InputArray[CurrentIndex - 1];
            // Shift previous element right

            InputArray[CurrentIndex - 1] =
                TemporaryValue;
            // Insert stored value in correct position

            CurrentIndex--;
            // Move left in the array
        }
    }
}
