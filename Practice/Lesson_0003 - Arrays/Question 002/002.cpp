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

#define ARRAY_SIZE 10
// Define the array size as 10
// Using a macro constant for easy modification



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

	int SortedArray[ARRAY_SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	// Declare and initialize a sorted integer array

	int IsValueFound, CurrentIndex, TargetNumber;
	// IsValueFound → flag variable indicating whether the value is found
	// CurrentIndex → loop index variable
	// TargetNumber → value to search for


	cout << "linear search: " << endl;
	// Display program title

	cin >> TargetNumber;
	// Read the number that the user wants to search for


	// ======================================================
	// CATEGORY: Start Time Measurement
	// ======================================================

	auto StartTime = high_resolution_clock::now();
	// Record the current time before the search begins


	IsValueFound = 0;
	// Initialize found flag as 0 (false)

	CurrentIndex = 0;
	// Start searching from the first element of the array


	// ======================================================
	// CATEGORY: Linear Search Algorithm
	// Purpose : Compare each element until value is found
	// ======================================================

	while (CurrentIndex < ARRAY_SIZE && !IsValueFound) {
	// Continue searching while:
	// 1. Index is within array range
	// 2. The value has not been found

		if (TargetNumber == SortedArray[CurrentIndex]) {
		// Compare user input with current array element

			IsValueFound = 1;
			// If match is found, set flag to true
		}

		else
			CurrentIndex++;
		// Otherwise move to the next element
	}


	// ======================================================
	// CATEGORY: Stop Time Measurement
	// ======================================================

	auto StopTime = high_resolution_clock::now();
	// Record the time immediately after the search finishes


	// ======================================================
	// CATEGORY: Display Search Result
	// ======================================================

	if (IsValueFound)
		cout << TargetNumber << " is found at index " << CurrentIndex << endl;
	// Display index where the number is found

	else
		cout << TargetNumber << " is NOT found!" << endl;
	// Display message if number does not exist in the array


	// ======================================================
	// CATEGORY: Execution Time Calculation
	// ======================================================

	auto SearchDuration = duration_cast<microseconds>(StopTime - StartTime);
	// Calculate the time difference between start and stop
	// Convert the result into microseconds


	cout << "Time taken by linear search algorithm : ";
	// Display execution time message

	cout << SearchDuration.count() << " microseconds. " << endl;
	// Print the actual time taken


	// ======================================================
	// CATEGORY: Program Termination
	// ======================================================

	return 0;
	// Indicate successful program execution
}
