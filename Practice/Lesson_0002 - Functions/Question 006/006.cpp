// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input and output operations
// ==========================================================

#include <iostream>  
// Allows usage of cout (output) and cin (input)



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
    // Purpose : Store user responses and quiz score
    // ======================================================

    char earthDweller, attractive;  
    // Store user input for yes/no questions
    // 'y' or 'Y' = yes, 'n' or 'N' = no

    float score;  
    // Store quiz score (can include decimal)



    // ======================================================
    // CATEGORY: Input Section
    // Purpose : Collect user information
    // ======================================================

    cout << "Are you a legal earth dweller? (y/n): ";  
    // Ask user if they are a legal earth dweller

    cin >> earthDweller;  
    // Store user response into earthDweller variable


    cout << "Are you handsome/beautiful? (y/n): ";  
    // Ask user if they are attractive

    cin >> attractive;  
    // Store user response into attractive variable


    cout << "Enter your quiz score (0 - 100): ";  
    // Ask user to input quiz score

    cin >> score;  
    // Store score value



    // ======================================================
    // CATEGORY: Condition A Evaluation
    // Purpose : Check if user is earth dweller AND score ≥ 50
    // ======================================================

    bool conditionA = (earthDweller == 'y' || earthDweller == 'Y') && (score >= 50);  
    // (earthDweller == 'y' || 'Y') → check for YES input (case-insensitive)
    // score >= 50 → minimum requirement
    // Both must be true (AND condition)



    // ======================================================
    // CATEGORY: Condition B Evaluation
    // Purpose : Check if user is attractive AND score ≥ 25
    // ======================================================

    bool conditionB = (attractive == 'y' || attractive == 'Y') && (score >= 25);  
    // (attractive == 'y' || 'Y') → check for YES input
    // score >= 25 → lower score requirement
    // Both must be true



    // ======================================================
    // CATEGORY: Final Eligibility Check
    // Purpose : Determine if user satisfies either condition
    // ======================================================

    if (conditionA || conditionB) {  
    // If Condition A OR Condition B is true

        cout << "\nYou are eligible to accompany the lecturer shopping! 🎉" << endl;  
        // Display success message

    } else {  

        cout << "\nSorry, you are NOT eligible. " << endl;  
        // Display failure message
    }



    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End program execution
    // ======================================================

    return 0;  
    // Indicate successful program completion
}
