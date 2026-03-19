// ==========================================================
// CATEGORY: Linear Search Program (Sorted Array)
// Purpose : Search for a number inside a sorted array
//           using the Linear Search algorithm.
//           Also measure execution time of the search.
// ==========================================================


// ==========================================================
// CATEGORY: Header Files
// ==========================================================

#include <iostream>          // Allows use of input/output objects (cin, cout)
#include <chrono>            // Provides time measurement utilities

using namespace std;         // Allows use of cout and cin without std::
using namespace std::chrono; // Allows use of time functions without std::chrono::


// ==========================================================
// CATEGORY: Constant Definition
// ==========================================================

#define size 10
// Define the array size as 10
// Using a macro constant for easy modification



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

	int array[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	// Declare and initialize a sorted integer array

	int found, i, num;
	// found → flag variable indicating whether the value is found
	// i     → loop index variable
	// num   → value to search for


	cout << "linear search: " << endl;
	// Display program title

	cin >> num;
	// Read the number that the user wants to search for


	// ======================================================
	// CATEGORY: Start Time Measurement
	// ======================================================

	auto start = high_resolution_clock::now();
	// Record the current time before the search begins


	found = 0;
	// Initialize found flag as 0 (false)

	i = 0;
	// Start searching from the first element of the array


	// ======================================================
	// CATEGORY: Linear Search Algorithm
	// Purpose : Compare each element until value is found
	// ======================================================

	while (i < size && !found) {
	// Continue searching while:
	// 1. Index is within array range
	// 2. The value has not been found

		if (num == array[i]) {
		// Compare user input with current array element

			found = 1;
			// If match is found, set flag to true
		}

		else
			i++;
		// Otherwise move to the next element
	}


	// ======================================================
	// CATEGORY: Stop Time Measurement
	// ======================================================

	auto stop = high_resolution_clock::now();
	// Record the time immediately after the search finishes


	// ======================================================
	// CATEGORY: Display Search Result
	// ======================================================

	if (found)
		cout << num << " is found at index " << i << endl;
	// Display index where the number is found

	else
		cout << num << " is NOT found!" << endl;
	// Display message if number does not exist in the array


	// ======================================================
	// CATEGORY: Execution Time Calculation
	// ======================================================

	auto duration = duration_cast<microseconds>(stop - start);
	// Calculate the time difference between start and stop
	// Convert the result into microseconds


	cout << "Time taken by linear search algorithm : ";
	// Display execution time message

	cout << duration.count() << " microseconds. " << endl;
	// Print the actual time taken


	// ======================================================
	// CATEGORY: Program Termination
	// ======================================================

	return 0;
	// Indicate successful program execution
}
