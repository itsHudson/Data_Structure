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

string reverseString(string text)
// Function name : reverseString
// Parameter     : text (the string we want to reverse)
// Return type   : string (the reversed string)
{

    string reversed = "";
    // Create an empty string variable named "reversed".
    // We will build the reversed version of the original string here.


    // ----------------------------------------------------------
    // Loop through the string from the LAST character to FIRST
    // ----------------------------------------------------------

    for (int i = text.length() - 1; i >= 0; i--)
    // text.length() gives the number of characters in the string.
    // Example: "cat" → length = 3
    //
    // Index positions:
    // c  a  t
    // 0  1  2
    //
    // So the last character index = length - 1.
    //
    // i = text.length() - 1 → start from the last character
    // i >= 0                → continue until the first character
    // i--                   → move backwards one character each loop
    {

        reversed += text[i];
        // Add the character at position i into the "reversed" string.
        //
        // Example:
        // text = "cat"
        //
        // i = 2 → text[2] = 't' → reversed = "t"
        // i = 1 → text[1] = 'a' → reversed = "ta"
        // i = 0 → text[0] = 'c' → reversed = "tac"
    }

    return reversed;
    // After the loop finishes, return the reversed string
    // to wherever the function was called.
}



// ==========================================================
// CATEGORY: Function - Palindrome Checker
// Purpose : Determine whether a string reads the same
//           forward and backward
// ==========================================================

bool isPalindrome(string text)
// Function name : isPalindrome
// Parameter     : text (the string to check)
// Return type   : bool (true or false)
{

    string reversedText = reverseString(text);
    // Call reverseString() to get the reversed version of the text.


    // ----------------------------------------------------------
    // Compare original text with reversed text
    // ----------------------------------------------------------

    if (text == reversedText)
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

    string userInput;
    // Variable to store the string entered by the user


    // ----------------------------------------------------------
    // USER INPUT
    // ----------------------------------------------------------

    cout << "Enter a string: ";
    // Ask the user to input a word

    cin >> userInput;
    // Store the user's input into the variable userInput
    //
    // Note:
    // cin >> only reads until the first space.
    // Example:
    // Input: "hello world"
    // Stored: "hello"


    // ----------------------------------------------------------
    // DISPLAY REVERSED STRING
    // ----------------------------------------------------------

    cout << "Reversed string: " << reverseString(userInput) << endl;
    // Call reverseString() and display the reversed text


    // ----------------------------------------------------------
    // CHECK IF PALINDROME
    // ----------------------------------------------------------

    if (isPalindrome(userInput))
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
