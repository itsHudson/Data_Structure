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
    char CharacterValue;
    // Store one character in the node

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
        // Set top node to NULL because stack is initially empty
    }


    // ======================================================
    // CATEGORY: Push Function
    // Purpose : Insert a character onto the top of the stack
    // ======================================================

    void Push(char NewCharacterValue)
    {
        StackNode* NewNode = new StackNode;
        // Create a new node dynamically

        NewNode->CharacterValue = NewCharacterValue;
        // Store the new character in the node

        NewNode->NextNode = TopNode;
        // Link the new node to the current top node

        TopNode = NewNode;
        // Update top node to the new node
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

        StackNode* TemporaryNode = TopNode;
        // Store the current top node temporarily

        char DeletedCharacterValue = TopNode->CharacterValue;
        // Save the character before deleting the node

        TopNode = TopNode->NextNode;
        // Move top pointer to the next node

        delete TemporaryNode;
        // Delete the old top node

        return DeletedCharacterValue;
        // Return the deleted character
    }


    // ======================================================
    // CATEGORY: Empty Check Function
    // Purpose : Determine whether the stack is empty
    // ======================================================

    bool IsEmpty()
    {
        return TopNode == NULL;
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

    LinkedListStack CharacterStack;
    // Create a linked-list stack object

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
