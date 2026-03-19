// ==========================================================
// CATEGORY: Binary Search Program (Sorted Array)
// Purpose : Search for a number in a sorted array using
//           Binary Search and measure execution time
// ==========================================================

#include <iostream>   // Allows input/output operations
#include <ctime>      // Allows time measurement using clock()

#define size 10       // Define array size

using namespace std;


// ==========================================================
// CATEGORY: Main Function
// ==========================================================

int main() {

    // Sorted array required for Binary Search
    int array[size] = {10,20,30,40,50,60,70,80,90,100};

    int found, min, max, mid, num;

    cout << "Binary Search Program\n";
    cout << "Enter number to search: ";
    cin >> num;


    // ======================================================
    // Start time measurement
    // ======================================================

    clock_t start = clock();

    found = 0;       // Flag variable
    min = 0;         // First index
    max = size - 1;  // Last index


    // ======================================================
    // Binary Search Algorithm
    // ======================================================

    while (min <= max && !found) {

        mid = (min + max) / 2;  // Find middle index

        if (num == array[mid]) {
            found = 1;          // Value found
        }

        else if (num < array[mid]) {
            max = mid - 1;      // Search left half
        }

        else {
            min = mid + 1;      // Search right half
        }
    }


    // ======================================================
    // Stop time measurement
    // ======================================================

    clock_t end = clock();


    // ======================================================
    // Display search result
    // ======================================================

    if (found)
        cout << num << " is found at index " << mid << endl;
    else
        cout << num << " is NOT found!" << endl;


    // ======================================================
    // Calculate execution time
    // ======================================================

    double time_taken = double(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "Time taken by binary search: "
         << time_taken << " milliseconds" << endl;


    return 0;
}
