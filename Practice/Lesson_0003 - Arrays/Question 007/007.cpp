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

void generateRandomNumbers(int numbers[], int &count);
// Ask user how many random numbers to generate and store them in the array

void printRandomNumbers(int numbers[], int count);
// Display all generated random numbers

void countRanges(int numbers[], int count, int rangeCount[]);
// Count how many numbers fall into each range:
// 1-10, 11-20, 21-30, 31-40, 41-50

void printStarGraph(int rangeCount[]);
// Print a star graph based on the counts in each range

void printNumbers41To50(int numbers[], int count);
// Print only the numbers between 41 and 50 for verification



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

    const int MAX_SIZE = 100;
    // Maximum number of random numbers allowed

    int numbers[MAX_SIZE];
    // Array to store generated random numbers

    int count;
    // Store how many random numbers the user wants


    srand(time(0));
    // Seed the random number generator using current time
    // This ensures different random results each time the program runs


    // ======================================================
    // CATEGORY: Generate Random Numbers
    // ======================================================

    generateRandomNumbers(numbers, count);
    // Ask user for count and fill the array with random numbers


    // ======================================================
    // CATEGORY: Display Generated Numbers
    // ======================================================

    printRandomNumbers(numbers, count);
    // Print all generated numbers


    // ======================================================
    // CATEGORY: Count Numbers in Ranges
    // ======================================================

    int rangeCount[5] = {0};
    // Array to store count for each range
    // rangeCount[0] = 1 to 10
    // rangeCount[1] = 11 to 20
    // rangeCount[2] = 21 to 30
    // rangeCount[3] = 31 to 40
    // rangeCount[4] = 41 to 50

    countRanges(numbers, count, rangeCount);
    // Count how many generated numbers fall into each range


    // ======================================================
    // CATEGORY: Print Star Graph
    // ======================================================

    printStarGraph(rangeCount);
    // Display a star graph for the range counts


    // ======================================================
    // CATEGORY: Verification Output
    // ======================================================

    printNumbers41To50(numbers, count);
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

void generateRandomNumbers(int numbers[], int &count) {

    const int MAX_SIZE = 100;
    // Maximum limit for generated random numbers

    cout << "Enter how many random numbers you want to do an analysis? ";
    // Ask user for number of values to generate

    cin >> count;
    // Store user's input into count


    while (count <= 0 || count > MAX_SIZE) {
        // Keep asking while input is invalid

        cout << "Please enter a value between 1 and " << MAX_SIZE << ": ";
        // Display validation message

        cin >> count;
        // Read input again
    }


    for (int i = 0; i < count; i++) {
        // Loop from index 0 to count-1

        numbers[i] = rand() % 50 + 1;
        // Generate random number from 1 to 50
        // rand() % 50 produces values from 0 to 49
        // +1 changes range to 1 to 50
    }
}



// ==========================================================
// CATEGORY: Print Random Numbers Function
// Purpose : Display generated random numbers in rows
// ==========================================================

void printRandomNumbers(int numbers[], int count) {

    cout << endl;
    // Print blank line before output

    cout << "The random numbers (between 1 - 50) as below:" << endl << endl;
    // Display heading

    const int PER_LINE = 10;
    // Number of values to print in each line

    for (int i = 0; i < count; i++) {
        // Loop through all generated numbers

        cout << numbers[i] << "\t";
        // Print current number followed by tab spacing

        if ((i + 1) % PER_LINE == 0) {
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

void countRanges(int numbers[], int count, int rangeCount[]) {

    for (int i = 0; i < count; i++) {
        // Check each generated number

        int value = numbers[i];
        // Store current value for easier reading

        if (value >= 1 && value <= 10) {
            rangeCount[0]++;
            // Increase count for range 1 to 10
        }
        else if (value >= 11 && value <= 20) {
            rangeCount[1]++;
            // Increase count for range 11 to 20
        }
        else if (value >= 21 && value <= 30) {
            rangeCount[2]++;
            // Increase count for range 21 to 30
        }
        else if (value >= 31 && value <= 40) {
            rangeCount[3]++;
            // Increase count for range 31 to 40
        }
        else if (value >= 41 && value <= 50) {
            rangeCount[4]++;
            // Increase count for range 41 to 50
        }
    }
}



// ==========================================================
// CATEGORY: Print Star Graph Function
// Purpose : Show a star graph for each number range
// ==========================================================

void printStarGraph(int rangeCount[]) {

    cout << endl;
    // Print blank line before graph

    cout << "The analysis star design as below:" << endl;
    // Display graph title

    cout << "---------------------------------------------------------------------" << endl;
    // Print separator line


    cout << "  1 - 10 | ";
    // Print range label

    for (int i = 0; i < rangeCount[0]; i++) {
        cout << "* ";
        // Print one star for each number in range 1 to 10
    }
    cout << endl;


    cout << " 11 - 20 | ";
    // Print range label

    for (int i = 0; i < rangeCount[1]; i++) {
        cout << "* ";
        // Print one star for each number in range 11 to 20
    }
    cout << endl;


    cout << " 21 - 30 | ";
    // Print range label

    for (int i = 0; i < rangeCount[2]; i++) {
        cout << "* ";
        // Print one star for each number in range 21 to 30
    }
    cout << endl;


    cout << " 31 - 40 | ";
    // Print range label

    for (int i = 0; i < rangeCount[3]; i++) {
        cout << "* ";
        // Print one star for each number in range 31 to 40
    }
    cout << endl;


    cout << " 41 - 50 | ";
    // Print range label

    for (int i = 0; i < rangeCount[4]; i++) {
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

void printNumbers41To50(int numbers[], int count) {

    cout << endl;
    // Print blank line

    cout << "To verify the graph is correct (display numbers of 41 - 50):" << endl;
    // Display verification message

    cout << endl;
    // Print blank line

    bool found = false;
    // Flag variable to check whether any values in 41-50 exist

    for (int i = 0; i < count; i++) {
        // Loop through all generated numbers

        if (numbers[i] >= 41 && numbers[i] <= 50) {
            // Check whether current number falls into range 41 to 50

            cout << numbers[i] << " ";
            // Print the number

            found = true;
            // Mark that at least one valid number was found
        }
    }

    if (!found) {
        // If no numbers in range 41 to 50 were found

        cout << "(none)";
        // Display message indicating no values in that range
    }

    cout << endl << endl;
    // Print blank lines after verification output
}
