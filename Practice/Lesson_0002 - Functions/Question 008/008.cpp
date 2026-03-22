// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output and string handling
// ==========================================================

#include <iostream>  
// Allows use of cout and cin for input/output

#include <string>    
// Allows use of string data type and related functions



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin, string



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store user input and count result
    // ======================================================

    string userInputFullText = "";  
    // Store full sentence entered by user (including spaces)



    // ======================================================
    // CATEGORY: Input Section
    // Purpose : Get full string input from user
    // ======================================================

    cout << "Enter a String: ";  
    // Prompt user to enter a sentence

    getline(cin, userInputFullText);  
    // Read entire line (including spaces) into variable



    // ======================================================
    // CATEGORY: Counter Initialization
    // Purpose : Track number of uppercase letters
    // ======================================================

    int totalUppercaseLetterCount = 0;  
    // Initialize counter to 0



    // ======================================================
    // CATEGORY: Loop Through String
    // Purpose : Check each character in the string
    // ======================================================

    for (int currentCharacterIndexPosition = 0; 
         currentCharacterIndexPosition < userInputFullText.length(); 
         currentCharacterIndexPosition = currentCharacterIndexPosition + 1)
    {
        // Loop starts from index 0
        // Continues until last character
        // Moves to next character each iteration


        // ==================================================
        // CATEGORY: Uppercase Check
        // Purpose : Detect characters between 'A' and 'Z'
        // ==================================================

        if (userInputFullText[currentCharacterIndexPosition] >= 'A' && 
            userInputFullText[currentCharacterIndexPosition] <= 'Z')
        {
            totalUppercaseLetterCount = totalUppercaseLetterCount + 1;  
            // Increase counter if uppercase letter is found
        }
    }



    // ======================================================
    // CATEGORY: Output Result
    // Purpose : Display total uppercase letters
    // ======================================================

    cout << "The number of uppercase letters is " 
         << totalUppercaseLetterCount << endl;  
    // Print result



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output and string handling
// ==========================================================

#include <iostream>  
// Allows use of cout and cin for input/output

#include <string>    
// Allows use of string data type and related functions



// ==========================================================
// CATEGORY: Namespace
// Purpose : Simplify standard library usage
// ==========================================================

using namespace std;  
// Avoid writing std:: before cout, cin, string



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store user input and count result
    // ======================================================

    string userInputFullText = "";  
    // Store full sentence entered by user (including spaces)



    // ======================================================
    // CATEGORY: Input Section
    // Purpose : Get full string input from user
    // ======================================================

    cout << "Enter a String: ";  
    // Prompt user to enter a sentence

    getline(cin, userInputFullText);  
    // Read entire line (including spaces) into variable



    // ======================================================
    // CATEGORY: Counter Initialization
    // Purpose : Track number of uppercase letters
    // ======================================================

    int totalUppercaseLetterCount = 0;  
    // Initialize counter to 0



    // ======================================================
    // CATEGORY: Loop Through String
    // Purpose : Check each character in the string
    // ======================================================

    for (int currentCharacterIndexPosition = 0; 
         currentCharacterIndexPosition < userInputFullText.length(); 
         currentCharacterIndexPosition = currentCharacterIndexPosition + 1)
    {
        // Loop starts from index 0
        // Continues until last character
        // Moves to next character each iteration


        // ==================================================
        // CATEGORY: Uppercase Check
        // Purpose : Detect characters between 'A' and 'Z'
        // ==================================================

        if (userInputFullText[currentCharacterIndexPosition] >= 'A' && 
            userInputFullText[currentCharacterIndexPosition] <= 'Z')
        {
            totalUppercaseLetterCount = totalUppercaseLetterCount + 1;  
            // Increase counter if uppercase letter is found
        }
    }



    // ======================================================
    // CATEGORY: Output Result
    // Purpose : Display total uppercase letters
    // ======================================================

    cout << "The number of uppercase letters is " 
         << totalUppercaseLetterCount << endl;  
    // Print result



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;  
}
