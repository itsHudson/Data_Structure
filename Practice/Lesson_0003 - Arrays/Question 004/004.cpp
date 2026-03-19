// ==========================================================
// CATEGORY: Recursive Binary Search Program
// Purpose : Search for a number using recursive binary search
//           and measure execution time
// ==========================================================

#include <iostream>   // For input and output (cout)
#include <ctime>      // For measuring execution time

#define size 10       // Define array size

using namespace std;


// ==========================================================
// Function Prototype
// ==========================================================

int binary_search(int min, int max, int array[], int num);
// Recursive function to perform binary search



// ==========================================================
// Main Function
// ==========================================================

int main() {

    int array[size] = {10,20,30,40,50,60,70,80,90,100};
    // Sorted array required for binary search

    int i, num;

    cout << "Recursive Binary Search\n";
    cout << "Enter number to search: ";
    cin >> num;


    // Start time measurement
    clock_t start = clock();

    i = binary_search(0, size - 1, array, num);
    // Call recursive binary search

    clock_t end = clock();


    // Display search result
    if (i >= 0)
        cout << num << " is found at index " << i << endl;
    else
        cout << num << " is NOT found!" << endl;


    // Calculate execution time
    double time_taken = double(end - start) / CLOCKS_PER_SEC * 1000;

    cout << "Time taken by recursive binary search: "
         << time_taken << " milliseconds" << endl;

    return 0;
}



// ==========================================================
// Recursive Binary Search Function
// ==========================================================

int binary_search(int min, int max, int array[], int num) {

    int mid;

    if (min <= max) {

        mid = (min + max) / 2;
        // Find middle index

        if (num == array[mid])
            return mid;
        // If value found, return index

        else if (num < array[mid])
            return binary_search(min, mid - 1, array, num);
        // Search left half

        else
            return binary_search(mid + 1, max, array, num);
        // Search right half
    }

    return -1;
    // If not found, return -1
}
