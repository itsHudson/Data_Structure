// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and random
//           number generation
// ==========================================================

#include <iostream>      // Allows use of cout and cin for output and input
#include <cstdlib>       // Allows use of rand() and srand() for random numbers
#include <ctime>         // Allows use of time() for random seed

using namespace std;     // Allows use of cout, cin, endl without std::


// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Tell the compiler these functions exist before main()
// ==========================================================

void GenerateRandomNumbers(int RandomNumbers[], int &RandomNumberCount);
// Ask user how many random numbers to generate and store them in the array

void PrintRandomNumbers(int RandomNumbers[], int RandomNumberCount);
// Display all generated random numbers

void CountRanges(int RandomNumbers[], int RandomNumberCount, int RangeCounts[]);
// Count how many numbers fall into each range:
// 1-10, 11-20, 21-30, 31-40, 41-50

void PrintStarGraph(int RangeCounts[]);
// Print a star graph based on the counts in each range

void PrintNumbers41To50(int RandomNumbers[], int RandomNumberCount);
// Print only the numbers between 41 and 50 for verification



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

    const int MaximumArraySize = 100;
    // Maximum number of random numbers allowed

    int RandomNumbers[MaximumArraySize];
    // Array to store generated random numbers

    int RandomNumberCount;
    // Store how many random numbers the user wants


    srand(time(0));
    // Seed the random number generator using current time
    // This ensures different random results each time the program runs


    // ======================================================
    // CATEGORY: Generate Random Numbers
    // ======================================================

    GenerateRandomNumbers(RandomNumbers, RandomNumberCount);
    // Ask user for count and fill the array with random numbers


    // ======================================================
    // CATEGORY: Display Generated Numbers
    // ======================================================

    PrintRandomNumbers(RandomNumbers, RandomNumberCount);
    // Print all generated numbers


    // ======================================================
    // CATEGORY: Count Numbers in Ranges
    // ======================================================

    int RangeCounts[5] = {0};
    // Array to store count for each range
    // RangeCounts[0] = 1 to 10
    // RangeCounts[1] = 11 to 20
    // RangeCounts[2] = 21 to 30
    // RangeCounts[3] = 31 to 40
    // RangeCounts[4] = 41 to 50

    CountRanges(RandomNumbers, RandomNumberCount, RangeCounts);
    // Count how many generated numbers fall into each range


    // ======================================================
    // CATEGORY: Print Star Graph
    // ======================================================

    PrintStarGraph(RangeCounts);
    // Display a star graph for the range counts


    // ======================================================
    // CATEGORY: Verification Output
    // ======================================================

    PrintNumbers41To50(RandomNumbers, RandomNumberCount);
    // Print numbers in the range 41 to 50 to verify the last graph row


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Return 0 indicates successful program execution
}



// ==========================================================
// CATEGORY: Generate Random Numbers Function
// Purpose : Ask user for amount and generate random numbers
//           from 1 to 50
// ==========================================================

void GenerateRandomNumbers(int RandomNumbers[], int &RandomNumberCount) {

    const int MaximumArraySize = 100;
    // Maximum limit for generated random numbers

    cout << "Enter how many random numbers you want to do an analysis? ";
    // Ask user for number of values to generate

    cin >> RandomNumberCount;
    // Store user's input into RandomNumberCount


    while (RandomNumberCount <= 0 || RandomNumberCount > MaximumArraySize) {
        // Keep asking while input is invalid

        cout << "Please enter a value between 1 and " << MaximumArraySize << ": ";
        // Display validation message

        cin >> RandomNumberCount;
        // Read input again
    }


    for (int CurrentIndex = 0; CurrentIndex < RandomNumberCount; CurrentIndex++) {
        // Loop from index 0 to RandomNumberCount - 1

        RandomNumbers[CurrentIndex] = rand() % 50 + 1;
        // Generate random number from 1 to 50
        // rand() % 50 produces values from 0 to 49
        // +1 changes range to 1 to 50
    }
}



// ==========================================================
// CATEGORY: Print Random Numbers Function
// Purpose : Display generated random numbers in rows
// ==========================================================

void PrintRandomNumbers(int RandomNumbers[], int RandomNumberCount) {

    cout << endl;
    // Print blank line before output

    cout << "The random numbers (between 1 - 50) as below:" << endl << endl;
    // Display heading

    const int NumbersPerLine = 10;
    // Number of values to print in each line

    for (int CurrentIndex = 0; CurrentIndex < RandomNumberCount; CurrentIndex++) {
        // Loop through all generated numbers

        cout << RandomNumbers[CurrentIndex] << "\t";
        // Print current number followed by tab spacing

        if ((CurrentIndex + 1) % NumbersPerLine == 0) {
            // If 10 numbers have been printed in current row

            cout << endl;
            // Move to next line
        }
    }

    cout << endl;
    // Print blank line after all numbers
}



// ==========================================================
// CATEGORY: Count Ranges Function
// Purpose : Count how many numbers belong to each interval
// ==========================================================

void CountRanges(int RandomNumbers[], int RandomNumberCount, int RangeCounts[]) {

    for (int CurrentIndex = 0; CurrentIndex < RandomNumberCount; CurrentIndex++) {
        // Check each generated number

        int CurrentValue = RandomNumbers[CurrentIndex];
        // Store current value for easier reading

        if (CurrentValue >= 1 && CurrentValue <= 10) {
            RangeCounts[0]++;
            // Increase count for range 1 to 10
        }
        else if (CurrentValue >= 11 && CurrentValue <= 20) {
            RangeCounts[1]++;
            // Increase count for range 11 to 20
        }
        else if (CurrentValue >= 21 && CurrentValue <= 30) {
            RangeCounts[2]++;
            // Increase count for range 21 to 30
        }
        else if (CurrentValue >= 31 && CurrentValue <= 40) {
            RangeCounts[3]++;
            // Increase count for range 31 to 40
        }
        else if (CurrentValue >= 41 && CurrentValue <= 50) {
            RangeCounts[4]++;
            // Increase count for range 41 to 50
        }
    }
}



// ==========================================================
// CATEGORY: Print Star Graph Function
// Purpose : Show a star graph for each number range
// ==========================================================

void PrintStarGraph(int RangeCounts[]) {

    cout << endl;
    // Print blank line before graph

    cout << "The analysis star design as below:" << endl;
    // Display graph title

    cout << "---------------------------------------------------------------------" << endl;
    // Print separator line


    cout << "  1 - 10 | ";
    // Print range label

    for (int StarIndex = 0; StarIndex < RangeCounts[0]; StarIndex++) {
        cout << "* ";
        // Print one star for each number in range 1 to 10
    }
    cout << endl;


    cout << " 11 - 20 | ";
    // Print range label

    for (int StarIndex = 0; StarIndex < RangeCounts[1]; StarIndex++) {
        cout << "* ";
        // Print one star for each number in range 11 to 20
    }
    cout << endl;


    cout << " 21 - 30 | ";
    // Print range label

    for (int StarIndex = 0; StarIndex < RangeCounts[2]; StarIndex++) {
        cout << "* ";
        // Print one star for each number in range 21 to 30
    }
    cout << endl;


    cout << " 31 - 40 | ";
    // Print range label

    for (int StarIndex = 0; StarIndex < RangeCounts[3]; StarIndex++) {
        cout << "* ";
        // Print one star for each number in range 31 to 40
    }
    cout << endl;


    cout << " 41 - 50 | ";
    // Print range label

    for (int StarIndex = 0; StarIndex < RangeCounts[4]; StarIndex++) {
        cout << "* ";
        // Print one star for each number in range 41 to 50
    }
    cout << endl;


    cout << "---------------------------------------------------------------------" << endl;
    // Print closing separator line
}



// ==========================================================
// CATEGORY: Print Numbers 41 to 50 Function
// Purpose : Display numbers in the last range for verification
// ==========================================================

void PrintNumbers41To50(int RandomNumbers[], int RandomNumberCount) {

    cout << endl;
    // Print blank line

    cout << "To verify the graph is correct (display numbers of 41 - 50):" << endl;
    // Display verification message

    cout << endl;
    // Print blank line

    bool IsValueFound = false;
    // Flag variable to check whether any values in 41-50 exist

    for (int CurrentIndex = 0; CurrentIndex < RandomNumberCount; CurrentIndex++) {
        // Loop through all generated numbers

        if (RandomNumbers[CurrentIndex] >= 41 && RandomNumbers[CurrentIndex] <= 50) {
            // Check whether current number falls into range 41 to 50

            cout << RandomNumbers[CurrentIndex] << " ";
            // Print the number

            IsValueFound = true;
            // Mark that at least one valid number was found
        }
    }

    if (!IsValueFound) {
        // If no numbers in range 41 to 50 were found

        cout << "(none)";
        // Display message indicating no values in that range
    }

    cout << endl << endl;
    // Print blank lines after verification output
}
