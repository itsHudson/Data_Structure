// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Array Stack Class
// Purpose : Implement stack operations using array
// ==========================================================

class ArrayStack
{
private:
    static const int MaximumStackSize = 1000;
    // Maximum number of delimiters that can be stored

    char DelimiterArray[MaximumStackSize];
    // Array used to store delimiter characters

    int TopIndex;
    // Variable that stores the current top position

public:
    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize an empty stack
    // ======================================================

    ArrayStack()
    {
        TopIndex = -1;
        // Set top index to -1 because the stack is initially empty
    }


    // ======================================================
    // CATEGORY: Push Function
    // Purpose : Insert a delimiter onto the top of the stack
    // ======================================================

    void Push(char NewDelimiterCharacter)
    {
        if (TopIndex < MaximumStackSize - 1)
        {
            // Check whether the stack still has space

            TopIndex++;
            // Move top index up by one

            DelimiterArray[TopIndex] = NewDelimiterCharacter;
            // Store new delimiter at the top position
        }
    }


    // ======================================================
    // CATEGORY: Pop Function
    // Purpose : Remove and return the top delimiter
    // ======================================================

    char Pop()
    {
        if (IsEmpty())
        {
            // Check whether the stack is empty

            return '\0';
            // Return null character if stack is empty
        }

        char DeletedDelimiterCharacter = DelimiterArray[TopIndex];
        // Store the top delimiter before removal

        TopIndex--;
        // Move top index down by one

        return DeletedDelimiterCharacter;
        // Return the removed delimiter
    }


    // ======================================================
    // CATEGORY: Empty Check Function
    // Purpose : Determine whether the stack is empty
    // ======================================================

    bool IsEmpty()
    {
        return TopIndex == -1;
        // Return true if stack is empty
    }
};


// ==========================================================
// CATEGORY: Matching Function
// Purpose : Check whether left and right delimiters match
// ==========================================================

bool IsMatchingPair(char LeftDelimiterCharacter, char RightDelimiterCharacter)
{
    if (LeftDelimiterCharacter == '(' && RightDelimiterCharacter == ')')
    {
        return true;
        // Round brackets match correctly
    }

    if (LeftDelimiterCharacter == '{' && RightDelimiterCharacter == '}')
    {
        return true;
        // Curly braces match correctly
    }

    if (LeftDelimiterCharacter == '[' && RightDelimiterCharacter == ']')
    {
        return true;
        // Square brackets match correctly
    }

    return false;
    // Return false if pair does not match
}


// ==========================================================
// CATEGORY: Balance Checking Function
// Purpose : Determine whether the delimiters are balanced
// ==========================================================

bool IsExpressionBalanced(string ExpressionText)
{
    ArrayStack DelimiterStack;
    // Create an array-based stack object

    for (int CharacterIndex = 0; CharacterIndex < ExpressionText.length(); CharacterIndex++)
    {
        // Loop through each character in the expression

        char CurrentCharacter = ExpressionText[CharacterIndex];
        // Get the current character

        if (CurrentCharacter == '(' || CurrentCharacter == '{' || CurrentCharacter == '[')
        {
            // If current character is a left delimiter

            DelimiterStack.Push(CurrentCharacter);
            // Push it into the stack
        }
        else if (CurrentCharacter == ')' || CurrentCharacter == '}' || CurrentCharacter == ']')
        {
            // If current character is a right delimiter

            if (DelimiterStack.IsEmpty())
            {
                // No matching left delimiter exists

                return false;
                // Expression is not balanced
            }

            char PoppedDelimiterCharacter = DelimiterStack.Pop();
            // Pop the top left delimiter

            if (!IsMatchingPair(PoppedDelimiterCharacter, CurrentCharacter))
            {
                // Check whether both delimiters match

                return false;
                // Expression is not balanced if mismatch happens
            }
        }
    }

    return DelimiterStack.IsEmpty();
    // Expression is balanced only if stack is empty at the end
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Read expression and display balance result
// ==========================================================

int main()
{
    string ExpressionText;
    // Variable to store the expression entered by the user

    cout << "Enter your expression here: ";
    // Ask the user to enter an expression

    getline(cin, ExpressionText);
    // Read the full expression including spaces

    if (IsExpressionBalanced(ExpressionText))
    {
        // If all delimiters are balanced

        cout << "The parentheses of the expression are balanced." << endl;
    }
    else
    {
        // If delimiters are not balanced

        cout << "The parentheses of the expression are not balanced." << endl;
    }

    return 0;
    // Indicate successful program termination
}
