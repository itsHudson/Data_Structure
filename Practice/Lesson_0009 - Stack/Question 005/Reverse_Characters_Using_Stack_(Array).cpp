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
    // Maximum number of characters that can be stored in the stack

    char CharacterArray[MaximumStackSize];
    // Array used to store characters

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
        // Set to -1 because the stack is initially empty
    }


    // ======================================================
    // CATEGORY: Push Function
    // Purpose : Insert a character onto the top of the stack
    // ======================================================

    void Push(char NewCharacterValue)
    {
        if (TopIndex < MaximumStackSize - 1)
        {
            // Check whether there is still space in the stack

            TopIndex++;
            // Move top index up by one

            CharacterArray[TopIndex] = NewCharacterValue;
            // Store the new character at the top position
        }
    }


    // ======================================================
    // CATEGORY: Pop Function
    // Purpose : Remove and return the top character
    // ======================================================

    char Pop()
    {
        if (IsEmpty())
        {
            // Check whether the stack is empty

            return '\0';
            // Return null character if stack is empty
        }

        char DeletedCharacterValue = CharacterArray[TopIndex];
        // Store the current top character

        TopIndex--;
        // Move top index down by one

        return DeletedCharacterValue;
        // Return the deleted character
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
// CATEGORY: Main Function
// Purpose : Read characters and print them in reverse order
// ==========================================================

int main()
{
    string InputText;
    // Variable to store the sequence of characters entered by the user

    ArrayStack CharacterStack;
    // Create an array-based stack object

    cout << "Enter a sequence of characters: ";
    // Ask the user to enter text

    getline(cin, InputText);
    // Read the full line including spaces

    for (int CharacterIndex = 0; CharacterIndex < InputText.length(); CharacterIndex++)
    {
        // Loop through each character in the input text

        CharacterStack.Push(InputText[CharacterIndex]);
        // Push each character into the stack
    }

    cout << "Reversed sequence: ";
    // Display output label

    while (!CharacterStack.IsEmpty())
    {
        // Continue until the stack becomes empty

        cout << CharacterStack.Pop();
        // Pop and print each character
    }

    cout << endl;
    // Move to the next line

    return 0;
    // Indicate successful program termination
}
