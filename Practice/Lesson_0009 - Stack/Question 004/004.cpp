// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Node Structure
// Purpose : Represent each node in the linked-list stack
// ==========================================================

struct StackNode
{
    char DelimiterCharacter;
    // Store one delimiter character such as (, ), {, }, [ or ]

    StackNode* NextNode;
    // Pointer to the next node in the stack
};


// ==========================================================
// CATEGORY: Linked-List Stack Class
// Purpose : Implement stack operations using linked list
// ==========================================================

class LinkedListStack
{
private:
    StackNode* TopNode;
    // Pointer that always points to the top node of the stack

public:
    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize an empty stack
    // ======================================================

    LinkedListStack()
    {
        TopNode = NULL;
        // Set top node to NULL because the stack is initially empty
    }


    // ======================================================
    // CATEGORY: Push Function
    // Purpose : Insert a delimiter onto the top of the stack
    // ======================================================

    void Push(char NewDelimiterCharacter)
    {
        StackNode* NewNode = new StackNode;
        // Create a new node dynamically

        NewNode->DelimiterCharacter = NewDelimiterCharacter;
        // Store the new delimiter inside the node

        NewNode->NextNode = TopNode;
        // Link the new node to the current top node

        TopNode = NewNode;
        // Update the top node to the new node
    }


    // ======================================================
    // CATEGORY: Pop Function
    // Purpose : Remove and return the top delimiter from stack
    // ======================================================

    char Pop()
    {
        if (IsEmpty())
        {
            // Check whether the stack is empty

            return '\0';
            // Return null character if there is nothing to pop
        }

        StackNode* TemporaryNode = TopNode;
        // Store the current top node temporarily

        char DeletedDelimiterCharacter = TopNode->DelimiterCharacter;
        // Save the delimiter before deleting the node

        TopNode = TopNode->NextNode;
        // Move top pointer to the next node

        delete TemporaryNode;
        // Delete the previous top node from memory

        return DeletedDelimiterCharacter;
        // Return the deleted delimiter
    }


    // ======================================================
    // CATEGORY: Empty Check Function
    // Purpose : Determine whether the stack is empty
    // ======================================================

    bool IsEmpty()
    {
        return TopNode == NULL;
        // Return true if top node is NULL, otherwise false
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
    // Return false if the pair does not match
}


// ==========================================================
// CATEGORY: Balance Checking Function
// Purpose : Determine whether delimiters in the equation
//           are balanced by using linked-list stack
// ==========================================================

bool IsEquationBalanced(string EquationText)
{
    LinkedListStack DelimiterStack;
    // Create a stack to store left delimiters

    for (int CharacterIndex = 0; CharacterIndex < EquationText.length(); CharacterIndex++)
    {
        // Loop through each character in the equation

        char CurrentCharacter = EquationText[CharacterIndex];
        // Get the current character from the equation

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
                // If stack is empty, there is no matching left delimiter

                return false;
                // Equation is not balanced
            }

            char PoppedDelimiterCharacter = DelimiterStack.Pop();
            // Pop the top left delimiter from the stack

            if (!IsMatchingPair(PoppedDelimiterCharacter, CurrentCharacter))
            {
                // Check whether the popped delimiter matches current right delimiter

                return false;
                // Equation is not balanced if mismatch happens
            }
        }
    }

    return DelimiterStack.IsEmpty();
    // If stack is empty at the end, all delimiters are balanced
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Read equation and display whether it is balanced
// ==========================================================

int main()
{
    string EquationText;
    // Variable to store the equation entered by the user

    cout << "Enter your equation here: ";
    // Ask the user to enter an equation

    getline(cin, EquationText);
    // Read the full equation including spaces

    if (IsEquationBalanced(EquationText))
    {
        // If equation delimiters are balanced

        cout << endl;
        cout << "The parenthesis of the equation is balance. "
             << "Thus equation correct in term of writing." << endl;
    }
    else
    {
        // If equation delimiters are not balanced

        cout << endl;
        cout << "The parenthesis of the equation is not balance. "
             << "Thus equation is not correct in term of writing." << endl;
    }

    return 0;
    // Indicate successful program termination
}
