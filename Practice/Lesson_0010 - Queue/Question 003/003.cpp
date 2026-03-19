// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations
#include <string>     // Allows use of string data type
#include <cctype>     // Allows use of tolower() and isalnum()

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Stack Class
// Purpose : Implement stack using array
// ==========================================================

class StackType
{
private:
    char StackArray[1000];
    // Array used to store characters in stack

    int TopIndex;
    // Variable that stores the current top position

public:
    StackType()
    {
        TopIndex = -1;
        // Set to -1 because stack is initially empty
    }

    void Push(char CharacterValue)
    {
        TopIndex++;
        // Move top index up by one

        StackArray[TopIndex] = CharacterValue;
        // Store character at top position
    }

    char Pop()
    {
        char DeletedCharacter = StackArray[TopIndex];
        // Store the top character before removing it

        TopIndex--;
        // Move top index down by one

        return DeletedCharacter;
        // Return removed character
    }

    bool IsEmpty()
    {
        return TopIndex == -1;
        // Return true if stack is empty
    }
};


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Implement queue using array
// ==========================================================

class QueueType
{
private:
    char QueueArray[1000];
    // Array used to store characters in queue

    int FrontIndex;
    int RearIndex;
    // Variables that store the front and rear positions

public:
    QueueType()
    {
        FrontIndex = 0;
        // Set front index to 0

        RearIndex = -1;
        // Set rear index to -1 because queue is initially empty
    }

    void Enqueue(char CharacterValue)
    {
        RearIndex++;
        // Move rear index up by one

        QueueArray[RearIndex] = CharacterValue;
        // Store character at rear position
    }

    char Dequeue()
    {
        char DeletedCharacter = QueueArray[FrontIndex];
        // Store the front character before removing it

        FrontIndex++;
        // Move front index forward by one

        return DeletedCharacter;
        // Return removed character
    }

    bool IsEmpty()
    {
        return FrontIndex > RearIndex;
        // Return true if queue is empty
    }
};


// ==========================================================
// CATEGORY: Main Function
// Purpose : Read text and check whether it is a palindrome
// ==========================================================

int main()
{
    string InputText;
    // Variable to store the text entered by the user

    string ProcessedText = "";
    // Variable to store cleaned lowercase characters only

    StackType CharacterStack;
    // Create stack object

    QueueType CharacterQueue;
    // Create queue object

    cout << "Enter a line of text: ";
    // Ask the user to enter a line of text

    getline(cin, InputText);
    // Read the full line including spaces

    for (int CharacterIndex = 0; CharacterIndex < InputText.length(); CharacterIndex++)
    {
        // Loop through each character in the input text

        char CurrentCharacter = tolower(InputText[CharacterIndex]);
        // Convert current character to lowercase

        if (isalnum(CurrentCharacter))
        {
            // Keep only letters and digits

            ProcessedText += CurrentCharacter;
            // Add character into processed text

            CharacterStack.Push(CurrentCharacter);
            // Push character into stack

            CharacterQueue.Enqueue(CurrentCharacter);
            // Enqueue character into queue
        }
    }

    bool IsPalindromeText = true;
    // Assume the text is palindrome at the beginning

    while (!CharacterStack.IsEmpty() && !CharacterQueue.IsEmpty())
    {
        // Compare characters until both structures become empty

        char StackCharacter = CharacterStack.Pop();
        // Get character from stack

        char QueueCharacter = CharacterQueue.Dequeue();
        // Get character from queue

        if (StackCharacter != QueueCharacter)
        {
            // If the characters do not match

            IsPalindromeText = false;
            // Mark text as not palindrome

            break;
            // Stop checking immediately
        }
    }

    cout << endl;
    cout << "Processed text: " << ProcessedText << endl;
    // Display cleaned lowercase version

    if (IsPalindromeText)
    {
        cout << "The line of text is a palindrome." << endl;
        // Display palindrome message
    }
    else
    {
        cout << "The line of text is not a palindrome." << endl;
        // Display not palindrome message
    }

    return 0;
    // Indicate successful program termination
}
