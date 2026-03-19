#include <iostream>      // lets us use cout and cin for input and output
#include <cstdlib>       // lets us use rand() and srand() for random numbers
#include <ctime>         // lets us use time() to give a different random seed each run

using namespace std;     // so we do not need to write std:: in front of cout, cin, etc.

// ------------------------- FUNCTION PROTOTYPES -------------------------
// I write the function headers first so that main() knows they exist.

// This function asks user how many random numbers they want and fills the array.
void generateRandomNumbers(int numbers[], int &count);

// This function prints all generated random numbers in a nice layout.
void printRandomNumbers(int numbers[], int count);

// This function counts how many numbers fall into each range:
// [1-10], [11-20], [21-30], [31-40], [41-50].
void countRanges(int numbers[], int count, int rangeCount[]);

// This function prints the star graph for each range based on the counts.
void printStarGraph(int rangeCount[]);

// This function prints only the numbers that are between 41 and 50
// so that we can verify the last row of the graph.
void printNumbers41To50(int numbers[], int count);

// ------------------------------ MAIN -----------------------------------

int main() {                                // program starts here
    const int MAX_SIZE = 100;               // maximum amount of numbers we allow (can change if needed)

    int numbers[MAX_SIZE];                  // this array will store all random numbers
    int count;                              // this will store how many random numbers the user really wants

    // We must "seed" the random number generator so we get different random numbers each time.
    // If we do not do this, rand() will give the same sequence every time we run the program.
    srand(time(0));                         // use current time in seconds as a seed

    // 1. Ask user how many random numbers and generate them
    generateRandomNumbers(numbers, count);  // fill the array and set the count value

    // 2. Show the random numbers to the user
    printRandomNumbers(numbers, count);     // print all the generated numbers

    // 3. Count how many numbers fall into each of the 5 ranges
    int rangeCount[5] = {0};                // create an array with 5 cells, all start at 0
    // rangeCount[0] -> count for  1 - 10
    // rangeCount[1] -> count for 11 - 20
    // rangeCount[2] -> count for 21 - 30
    // rangeCount[3] -> count for 31 - 40
    // rangeCount[4] -> count for 41 - 50
    countRanges(numbers, count, rangeCount);

    // 4. Print the star graph that shows how many numbers are in each range
    printStarGraph(rangeCount);

    // 5. Show all numbers between 41 and 50 so we can verify the last row of the graph
    printNumbers41To50(numbers, count);

    return 0;                               // return 0 to show the program ended successfully
}

// ---------------------- FUNCTION DEFINITIONS ---------------------------

// This function asks the user how many random numbers they want,
// checks the input is valid, and then fills the array with random
// integers from 1 to 50.
void generateRandomNumbers(int numbers[], int &count) {
    const int MAX_SIZE = 100;               // same maximum as in main (you can also pass it if you prefer)

    cout << "Enter how many random numbers you want to do an analysis? ";
    cin >> count;                           // read the amount of numbers from the user

    // Simple validation: make sure the number is between 1 and MAX_SIZE
    while (count <= 0 || count > MAX_SIZE) {
        cout << "Please enter a value between 1 and " << MAX_SIZE << ": ";
        cin >> count;                       // ask again until user gives a valid number
    }

    // Now generate the random numbers and store them in the array
    for (int i = 0; i < count; i++) {       // loop from 0 to count-1
        // rand() % 50 gives a number from 0 to 49.
        // adding +1 shifts it to 1 to 50.
        numbers[i] = rand() % 50 + 1;       // store the random number into the array
    }
}

// This function prints all the random numbers in a grid-like form.
// This is only to show the user what numbers we generated.
void printRandomNumbers(int numbers[], int count) {
    cout << endl;
    cout << "The random numbers (between 1 - 50) as below:" << endl << endl;

    // We will print 10 numbers in one line so that the output looks nice.
    const int PER_LINE = 10;                // number of values per row

    for (int i = 0; i < count; i++) {       // go through all numbers
        cout << numbers[i] << "\t";         // print number followed by a tab space

        // If we printed PER_LINE numbers on this line, start a new line.
        if ((i + 1) % PER_LINE == 0) {      // +1 because array index starts from 0
            cout << endl;                   // move to next line
        }
    }
    cout << endl;                           // extra blank line after all numbers
}

// This function looks at each random number and increases the counter
// for the correct range. It uses the rangeCount array to store totals.
void countRanges(int numbers[], int count, int rangeCount[]) {
    for (int i = 0; i < count; i++) {       // check each random number
        int value = numbers[i];             // easier name for current value

        // Check in which interval the value falls and increase the proper counter.
        if (value >= 1 && value <= 10) {            // numbers from 1 to 10
            rangeCount[0]++;                        // add 1 to first range
        } else if (value >= 11 && value <= 20) {    // numbers from 11 to 20
            rangeCount[1]++;                        // add 1 to second range
        } else if (value >= 21 && value <= 30) {    // numbers from 21 to 30
            rangeCount[2]++;                        // add 1 to third range
        } else if (value >= 31 && value <= 40) {    // numbers from 31 to 40
            rangeCount[3]++;                        // add 1 to fourth range
        } else if (value >= 41 && value <= 50) {    // numbers from 41 to 50
            rangeCount[4]++;                        // add 1 to fifth range
        }
        // Because random numbers are always between 1 and 50, we do not need an "else".
    }
}

// This function prints the star (*) graph which shows how many numbers
// are inside each of the five ranges. Each star represents one number.
void printStarGraph(int rangeCount[]) {
    cout << endl;
    cout << "The analysis star design as below:" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    // For each range we print the label (like " 1 - 10 |") and then as many stars
    // as the count for that range.

    // 1 - 10 range
    cout << "  1 - 10 | ";
    for (int i = 0; i < rangeCount[0]; i++) {   // print as many * as there are numbers in this range
        cout << "* ";
    }
    cout << endl;

    // 11 - 20 range
    cout << " 11 - 20 | ";
    for (int i = 0; i < rangeCount[1]; i++) {
        cout << "* ";
    }
    cout << endl;

    // 21 - 30 range
    cout << " 21 - 30 | ";
    for (int i = 0; i < rangeCount[2]; i++) {
        cout << "* ";
    }
    cout << endl;

    // 31 - 40 range
    cout << " 31 - 40 | ";
    for (int i = 0; i < rangeCount[3]; i++) {
        cout << "* ";
    }
    cout << endl;

    // 41 - 50 range
    cout << " 41 - 50 | ";
    for (int i = 0; i < rangeCount[4]; i++) {
        cout << "* ";
    }
    cout << endl;

    cout << "---------------------------------------------------------------------" << endl;
}

// This function prints only the numbers that are between 41 and 50.
// It is to help us check that the number of stars in the last row is correct.
void printNumbers41To50(int numbers[], int count) {
    cout << endl;
    cout << "To verify the graph is correct (display numbers of 41 - 50):" << endl;
    cout << endl;

    bool found = false;                        // flag to remember if we found any numbers

    for (int i = 0; i < count; i++) {         // loop through all numbers
        if (numbers[i] >= 41 && numbers[i] <= 50) {
            cout << numbers[i] << " ";        // print the number if it is within 41-50
            found = true;                     // mark that we found at least one
        }
    }

    if (!found) {                             // if no number was found in that range
        cout << "(none)";                     // tell the user there were no numbers between 41-50
    }

    cout << endl << endl;                     // final blank lines for clean output
}
