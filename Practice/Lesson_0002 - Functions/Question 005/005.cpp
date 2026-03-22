// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout and cin for console input/output



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin, endl



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store user input and computation results
    // ======================================================

    int x, y, ticket;  
    // x and y are integer variables for condition testing
    // ticket stores result of speed check (1 or 0)

    double score;  
    // Stores score value (can include decimal)

    int speed;  
    // Stores vehicle speed input



    // ======================================================
    // CATEGORY: Input Section
    // Purpose : Collect all required values from user
    // ======================================================

    cout << "Enter value for y: ";  
    // Ask user to input value for y

    cin >> y;  
    // Store input into variable y


    cout << "Enter value for score (0 - 100): ";  
    // Ask user to input score

    cin >> score;  
    // Store input into score variable


    cout << "Enter value for x: ";  
    // Ask user to input value for x

    cin >> x;  
    // Store input into x


    cout << "Enter value for y again (for positive test): ";  
    // Ask user to input y again (overwrites previous y)

    cin >> y;  
    // Update y with new value


    cout << "Enter vehicle speed: ";  
    // Ask user to input vehicle speed

    cin >> speed;  
    // Store input into speed



    // ======================================================
    // CATEGORY: Condition 1 (Simple If Statement)
    // Purpose : Assign x = 1 if y is positive
    // ======================================================

    if (y > 0) x = 1;  
    // If y is greater than 0, set x to 1


    cout << "\nAfter checking y > 0, x = " << x << endl;  
    // Display updated value of x



    // ======================================================
    // CATEGORY: Condition 2 (Range Check)
    // Purpose : Increase score by 5 if within range 80–90
    // ======================================================

    if (score >= 80 && score <= 90) score += 5;  
    // If score is between 80 and 90 (inclusive), add 5


    cout << "Updated score = " << score << endl;  
    // Display updated score



    // ======================================================
    // CATEGORY: Condition 3 (Logical AND + Modulus)
    // Purpose : Check if x is positive AND odd
    // ======================================================

    cout << "Is x positive and odd? ";  
    // Display message for condition check

    cout << (x > 0 && x % 2 != 0) << endl;  
    // x > 0 → checks positive
    // x % 2 != 0 → checks odd number
    // Output will be 1 (true) or 0 (false)



    // ======================================================
    // CATEGORY: Condition 4 (Multiple Variables Check)
    // Purpose : Check if both x and y are positive
    // ======================================================

    cout << "Are both x and y positive? ";  
    // Display message for condition check

    cout << (x > 0 && y > 0) << endl;  
    // Check if both x and y are greater than 0
    // Output: 1 (true) or 0 (false)



    // ======================================================
    // CATEGORY: Condition 5 (Ternary Operator)
    // Purpose : Assign ticket based on speed condition
    // ======================================================

    ticket = (speed > 55) ? 1 : 0;  
    // If speed > 55 → ticket = 1
    // Else → ticket = 0


    cout << "Ticket status (1 = yes, 0 = no): " << ticket << endl;  
    // Display whether ticket is issued



    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End program successfully
    // ======================================================

    return 0;  
    // Indicate successful execution
}
