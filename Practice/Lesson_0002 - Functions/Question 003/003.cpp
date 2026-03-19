// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input/output operations
// ==========================================================

#include <iostream>
// iostream provides input and output functionality.
// It allows the use of:
//   cout → print output to the screen
//   cin  → receive input from the keyboard

using namespace std;
// This allows us to use standard library objects directly.
// Without this line we would need to write:
// std::cout and std::cin



// ==========================================================
// CATEGORY: Function - Reverse String
// Purpose : Reverse a string WITHOUT using built-in functions
// ==========================================================

string ReverseString(string InputText)
// Function name : ReverseString
// Parameter     : InputText (the string we want to reverse)
// Return type   : string (the reversed string)
{

    string ReversedText = "";
    // Create an empty string variable named "ReversedText".
    // We will build the reversed version of the original string here.


    // ----------------------------------------------------------
    // Loop through the string from the LAST character to FIRST
    // ----------------------------------------------------------

    for (int CharacterIndex = InputText.length() - 1; CharacterIndex >= 0; CharacterIndex--)
    // InputText.length() gives the number of characters in the string.
    // Example: "cat" → length = 3
    //
    // Index positions:
    // c  a  t
    // 0  1  2
    //
    // So the last character index = length - 1.
    //
    // CharacterIndex = InputText.length() - 1 → start from the last character
    // CharacterIndex >= 0                     → continue until the first character
    // CharacterIndex--                        → move backwards one character each loop
    {

        ReversedText += InputText[CharacterIndex];
        // Add the character at position CharacterIndex into the "ReversedText" string.
        //
        // Example:
        // InputText = "cat"
        //
        // CharacterIndex = 2 → InputText[2] = 't' → ReversedText = "t"
        // CharacterIndex = 1 → InputText[1] = 'a' → ReversedText = "ta"
        // CharacterIndex = 0 → InputText[0] = 'c' → ReversedText = "tac"
    }

    return ReversedText;
    // After the loop finishes, return the reversed string
    // to wherever the function was called.
}



// ==========================================================
// CATEGORY: Function - Palindrome Checker
// Purpose : Determine whether a string reads the same
//           forward and backward
// ==========================================================

bool IsPalindrome(string InputText)
// Function name : IsPalindrome
// Parameter     : InputText (the string to check)
// Return type   : bool (true or false)
{

    string ReversedText = ReverseString(InputText);
    // Call ReverseString() to get the reversed version of the text.


    // ----------------------------------------------------------
    // Compare original text with reversed text
    // ----------------------------------------------------------

    if (InputText == ReversedText)
    // If both strings are identical
    {
        return true;
        // The word reads the same forwards and backwards
        // → It is a palindrome
    }
    else
    {
        return false;
        // The word is different when reversed
        // → Not a palindrome
    }
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Starting point of the program
// ==========================================================

int main()
{

    string UserInputText;
    // Variable to store the string entered by the user


    // ----------------------------------------------------------
    // USER INPUT
    // ----------------------------------------------------------

    cout << "Enter a string: ";
    // Ask the user to input a word

    cin >> UserInputText;
    // Store the user's input into the variable UserInputText
    //
    // Note:
    // cin >> only reads until the first space.
    // Example:
    // Input: "hello world"
    // Stored: "hello"


    // ----------------------------------------------------------
    // DISPLAY REVERSED STRING
    // ----------------------------------------------------------

    cout << "Reversed string: " << ReverseString(UserInputText) << endl;
    // Call ReverseString() and display the reversed text


    // ----------------------------------------------------------
    // CHECK IF PALINDROME
    // ----------------------------------------------------------

    if (IsPalindrome(UserInputText))
    // Call the palindrome function
    {
        cout << "This string is a palindrome." << endl;
        // Display message if the string is a palindrome
    }
    else
    {
        cout << "This string is NOT a palindrome." << endl;
        // Display message if the string is not a palindrome
    }


    // ----------------------------------------------------------
    // PROGRAM TERMINATION
    // ----------------------------------------------------------

    return 0;
    // Indicates successful program execution
}
