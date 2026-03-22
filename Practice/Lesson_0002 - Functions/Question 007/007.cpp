// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout and cin



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: 1. WHILE LOOP (Counter-Controlled)
    // Purpose : Repeat based on condition (checked BEFORE loop)
    // ======================================================

    cout << "While Loop (Counter-Controlled):" << endl;  
    // Display loop type

    int whileLoopCounterNumber = 1;  
    // Initialize counter

    while (whileLoopCounterNumber <= 5) {  
    // Condition: loop runs while counter ≤ 5

        cout << whileLoopCounterNumber << " ";  
        // Display current value

        whileLoopCounterNumber = whileLoopCounterNumber + 1;  
        // Increment counter
    }

    cout << endl << endl;  
    // Add spacing



    // ======================================================
    // SYNTAX: WHILE LOOP
    // ======================================================
    /*
    while (condition) {
        // statements
        // update (increment/decrement)
    }
    */



    // ======================================================
    // CATEGORY: 2. FOR LOOP (Counter-Controlled)
    // Purpose : Compact loop with initialization, condition,
    //           and update in one line
    // ======================================================

    cout << "For Loop (Counter-Controlled):" << endl;  

    for (int forLoopCounterNumber = 1; forLoopCounterNumber <= 5; forLoopCounterNumber = forLoopCounterNumber + 1) {
    // Initialization → int forLoopCounterNumber = 1
    // Condition → forLoopCounterNumber <= 5
    // Update → increment by 1

        cout << forLoopCounterNumber << " ";  
        // Display current value
    }

    cout << endl << endl;



    // ======================================================
    // SYNTAX: FOR LOOP
    // ======================================================
    /*
    for (initialization; condition; update) {
        // statements
    }
    */



    // ======================================================
    // CATEGORY: 3. DO-WHILE LOOP
    // Purpose : Loop executes at least ONCE (condition checked AFTER)
    // ======================================================

    cout << "Do-While Loop:" << endl;

    int doWhileLoopStartingNumber = 1;  
    // Initialize counter

    do {
        cout << doWhileLoopStartingNumber << " ";  
        // Display value

        doWhileLoopStartingNumber = doWhileLoopStartingNumber + 1;  
        // Increment counter

    } while (doWhileLoopStartingNumber <= 5);  
    // Condition checked AFTER execution

    cout << endl << endl;



    // ======================================================
    // SYNTAX: DO-WHILE LOOP
    // ======================================================
    /*
    do {
        // statements
    } while (condition);
    */



    // ======================================================
    // CATEGORY: 4. SENTINEL-CONTROLLED LOOP
    // Purpose : Loop stops when special value (sentinel) is entered
    // ======================================================

    cout << "Sentinel-Controlled Loop (Enter -1 to stop):" << endl;

    int sentinelLoopUserInputNumber;  
    // Variable to store user input

    cin >> sentinelLoopUserInputNumber;  
    // Initial input before loop

    while (sentinelLoopUserInputNumber != -1) {  
    // Continue loop until user enters -1

        cout << "You entered: " << sentinelLoopUserInputNumber << endl;  
        // Display user input

        cin >> sentinelLoopUserInputNumber;  
        // Read next input
    }

    cout << "Loop stopped because you entered -1." << endl << endl;



    // ======================================================
    // SYNTAX: SENTINEL LOOP
    // ======================================================
    /*
    input value

    while (value != sentinel) {
        // statements
        input value
    }
    */



    // ======================================================
    // CATEGORY: 5. FLAG-CONTROLLED LOOP
    // Purpose : Loop controlled by boolean flag variable
    // ======================================================

    cout << "Flag-Controlled Loop:" << endl;

    bool flagLoopShouldContinueRunning = true;  
    // Flag variable to control loop execution

    int flagLoopCurrentCountNumber = 1;  
    // Counter variable

    while (flagLoopShouldContinueRunning == true) {  
    // Loop continues while flag is true

        cout << flagLoopCurrentCountNumber << endl;  
        // Display current count

        flagLoopCurrentCountNumber = flagLoopCurrentCountNumber + 1;  
        // Increment counter

        if (flagLoopCurrentCountNumber > 5) {  
        // Condition to stop loop

            flagLoopShouldContinueRunning = false;  
            // Set flag to false → loop will stop
        }
    }



    // ======================================================
    // SYNTAX: FLAG LOOP
    // ======================================================
    /*
    bool flag = true;

    while (flag) {
        // statements

        if (condition) {
            flag = false;
        }
    }
    */



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
