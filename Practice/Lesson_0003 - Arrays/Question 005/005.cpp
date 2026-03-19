// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input/output and
//           time measurement using clock()
// ==========================================================

#include <iostream>   // Allows use of cout for output
#include <ctime>      // Allows use of clock() for timing

using namespace std;  // Allows writing cout instead of std::cout


// ==========================================================
// CATEGORY: Function Prototype
// Purpose : Tell the compiler this function exists
// ==========================================================

void print_array(int billy[], int size);
// Function to display all array elements



// ==========================================================
// CATEGORY: Main Function
// Purpose : Compare Bubble Sort and Insertion Sort timing
//           using ctime library
// ==========================================================

int main() {

    int billy[5] = {4, 2, 1, 3, 5};
    // Original array to be sorted

    int i, iteration, size = sizeof(billy) / sizeof(billy[0]), temp;
    // i         → loop counter
    // iteration → outer loop counter for bubble sort
    // size      → number of elements in array
    // temp      → temporary storage for swapping

    clock_t start, end;
    // Variables used to store start and end time


    // ======================================================
    // CATEGORY: Bubble Sort Section
    // ======================================================

    cout << "Pre bubble sort array: " << endl;
    // Display label before sorting

    print_array(billy, size);
    // Print original array

    start = clock();
    // Record start time before bubble sort begins


    // Bubble Sort Algorithm
    for (iteration = 0; iteration < size - 1; iteration++) {
        // Outer loop controls number of passes

        for (i = 0; i < size - 1 - iteration; i++) {
            // Inner loop compares adjacent elements

            if (billy[i] > billy[i + 1]) {
                // Swap if current element is bigger than next element

                temp = billy[i];
                // Store current element temporarily

                billy[i] = billy[i + 1];
                // Move next element into current position

                billy[i + 1] = temp;
                // Put stored value into next position
            }
        }
    }

    end = clock();
    // Record end time after bubble sort finishes


    cout << "Post bubble sort array: " << endl;
    // Display label after sorting

    print_array(billy, size);
    // Print sorted array


    double time_taken_bubble = double(end - start) / CLOCKS_PER_SEC * 1000;
    // Convert elapsed time into milliseconds

    cout << "Bubble sort time: " << time_taken_bubble << " milliseconds" << endl;
    // Display bubble sort execution time



    // ======================================================
    // CATEGORY: Reset Array for Insertion Sort
    // Purpose : Restore original unsorted values
    // ======================================================

    billy[0] = 4;
    billy[1] = 2;
    billy[2] = 1;
    billy[3] = 3;
    billy[4] = 5;
    // Reset array so insertion sort starts with same original data


    // ======================================================
    // CATEGORY: Insertion Sort Section
    // ======================================================

    cout << "Pre insertion sort array: " << endl;
    // Display original array before insertion sort

    print_array(billy, size);
    // Print reset array

    start = clock();
    // Record start time before insertion sort begins


    // Insertion Sort Algorithm
    for (int unsorted = 1; unsorted < size; unsorted++) {
        // Start from second element because first element is already considered sorted

        i = 0;
        // Start checking from first element of sorted portion

        int less = 0;
        // Flag variable to check if insertion is needed

        while (i < unsorted && !less) {
            // Search correct position for current unsorted value

            if (billy[i] > billy[unsorted])
                less = 1;
            // Found insertion point because current sorted element is larger

            else
                i++;
            // Move to next sorted element
        }

        if (less) {
            // If insertion point was found

            temp = billy[unsorted];
            // Store the unsorted value temporarily

            for (int j = unsorted - 1; j >= i; j--)
                billy[j + 1] = billy[j];
            // Shift elements one position to the right

            billy[i] = temp;
            // Insert saved value into correct position
        }
    }

    end = clock();
    // Record end time after insertion sort finishes


    cout << "Post insertion sort array: " << endl;
    // Display label after insertion sort

    print_array(billy, size);
    // Print sorted array


    double time_taken_insertion = double(end - start) / CLOCKS_PER_SEC * 1000;
    // Convert elapsed time into milliseconds

    cout << "Insertion sort time: " << time_taken_insertion << " milliseconds" << endl;
    // Display insertion sort execution time

    return 0;
    // End program successfully
}



// ==========================================================
// CATEGORY: Array Printing Function
// Purpose : Display array elements in one line
// ==========================================================

void print_array(int array[], int size) {

    for (int i = 0; i < size; i++) {
        // Loop through all elements in the array

        cout << array[i];
        // Print current element

        if (i < size - 1)
            cout << " ,";
        // Print comma after each element except the last one

        else
            cout << endl;
        // Move to next line after the last element
    }
}
