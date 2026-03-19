// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows input and output operations
#include <string>     // Allows use of string data type
#include <cctype>     // Allows use of isalnum() function

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

    char StackArray[MaximumStackSize];
    // Array used to store operators and parentheses

    int TopIndex;
    // Variable that stores the current top position of the stack

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
    // Purpose : Insert one character onto the top of the stack
    // ======================================================

    void Push(char NewCharacter)
    {
        if (TopIndex < MaximumStackSize - 1)
        {
            // Check whether the stack still has available space

            TopIndex++;
            // Move top index up by one

            StackArray[TopIndex] = NewCharacter;
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

        char DeletedCharacter = StackArray[TopIndex];
        // Store the top character before removing it

        TopIndex--;
        // Move top index down by one

        return DeletedCharacter;
        // Return the removed character
    }


    // ======================================================
    // CATEGORY: Peek Function
    // Purpose : Return the top character without removing it
    // ======================================================

    char Peek()
    {
        if (IsEmpty())
        {
            // Check whether the stack is empty

            return '\0';
            // Return null character if stack is empty
        }

        return StackArray[TopIndex];
        // Return the top character
    }


    // ======================================================
    // CATEGORY: Empty Check Function
    // Purpose : Determine whether the stack is empty
    // ======================================================

    bool IsEmpty()
    {
        return TopIndex == -1;
        // Return true if stack is empty, otherwise false
    }
};


// ==========================================================
// CATEGORY: Operator Check Function
// Purpose : Determine whether a character is an operator
// ==========================================================

bool IsOperator(char CurrentCharacter)
{
    return CurrentCharacter == '+' ||
           CurrentCharacter == '-' ||
           CurrentCharacter == '*' ||
           CurrentCharacter == '/' ||
           CurrentCharacter == '^';
    // Return true if the character is one of the supported operators
}


// ==========================================================
// CATEGORY: Precedence Function
// Purpose : Return the precedence level of an operator
// ==========================================================

int GetOperatorPrecedence(char OperatorCharacter)
{
    if (OperatorCharacter == '^')
    {
        return 3;
        // Exponent has the highest precedence
    }

    if (OperatorCharacter == '*' || OperatorCharacter == '/')
    {
        return 2;
        // Multiplication and division have medium precedence
    }

    if (OperatorCharacter == '+' || OperatorCharacter == '-')
    {
        return 1;
        // Addition and subtraction have the lowest precedence
    }

    return 0;
    // Return 0 for non-operator characters
}


// ==========================================================
// CATEGORY: Infix To Postfix Conversion Function
// Purpose : Convert infix expression into postfix expression
// ==========================================================

string ConvertInfixToPostfix(string InfixExpression)
{
    ArrayStack OperatorStack;
    // Create a stack to store operators and parentheses

    string PostfixExpression = "";
    // Variable to store the final postfix expression

    for (int CharacterIndex = 0; CharacterIndex < InfixExpression.length(); CharacterIndex++)
    {
        // Loop through each character in the infix expression

        char CurrentCharacter = InfixExpression[CharacterIndex];
        // Get the current character

        if (CurrentCharacter == ' ')
        {
            // Ignore spaces in the expression

            continue;
        }

        if (isalnum(CurrentCharacter))
        {
            // If the character is an operand such as A, B, 1, or 2

            PostfixExpression += CurrentCharacter;
            // Add operand directly into postfix expression
        }
        else if (CurrentCharacter == '(')
        {
            // If current character is a left parenthesis

            OperatorStack.Push(CurrentCharacter);
            // Push it into the stack
        }
        else if (CurrentCharacter == ')')
        {
            // If current character is a right parenthesis

            while (!OperatorStack.IsEmpty() && OperatorStack.Peek() != '(')
            {
                // Pop operators until left parenthesis is found

                PostfixExpression += OperatorStack.Pop();
                // Add popped operator into postfix expression
            }

            if (!OperatorStack.IsEmpty() && OperatorStack.Peek() == '(')
            {
                // If left parenthesis is found on top of stack

                OperatorStack.Pop();
                // Remove the left parenthesis from stack
            }
        }
        else if (IsOperator(CurrentCharacter))
        {
            // If current character is an operator

            while (!OperatorStack.IsEmpty() &&
                   OperatorStack.Peek() != '(' &&
                   GetOperatorPrecedence(OperatorStack.Peek()) >= GetOperatorPrecedence(CurrentCharacter))
            {
                // Pop operators from stack while:
                // 1. stack is not empty
                // 2. top is not left parenthesis
                // 3. top operator has higher or equal precedence

                PostfixExpression += OperatorStack.Pop();
                // Add popped operator into postfix expression
            }

            OperatorStack.Push(CurrentCharacter);
            // Push current operator into stack
        }
    }

    while (!OperatorStack.IsEmpty())
    {
        // Pop all remaining operators from the stack

        PostfixExpression += OperatorStack.Pop();
        // Add each remaining operator into postfix expression
    }

    return PostfixExpression;
    // Return the final postfix expression
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Read infix expression and display postfix result
// ==========================================================

int main()
{
    string InfixExpression;
    // Variable to store the equation entered by the user

    cout << "Enter your equation here: ";
    // Ask the user to enter an infix expression

    getline(cin, InfixExpression);
    // Read the full expression including spaces

    string PostfixExpression = ConvertInfixToPostfix(InfixExpression);
    // Convert the infix expression into postfix expression

    cout << endl;
    cout << "The postfix of the equation = " << PostfixExpression << endl;
    // Display the postfix expression

    return 0;
    // Indicate successful program termination
}
