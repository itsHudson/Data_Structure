// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows use of input and output
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Node Structure
// Purpose : Represent each stack node in linked list
// ==========================================================

struct StackNode
{
    string TopicCode;
    // Store the topic value such as TP01, TP02

    StackNode* NextNode;
    // Pointer that links to the next node below it
};


// ==========================================================
// CATEGORY: Linked List Stack Class
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
    // Purpose : Insert a new value onto the top of the stack
    // ======================================================

    void Push(string NewTopicCode)
    {
        StackNode* NewNode = new StackNode;
        // Create a new node dynamically

        NewNode->TopicCode = NewTopicCode;
        // Store the new topic code inside the node

        NewNode->NextNode = TopNode;
        // Link the new node to the current top node

        TopNode = NewNode;
        // Update top node to become the new node

        cout << "Push " << NewTopicCode << ":" << endl;
        // Display push action

        DisplayFromBaseToTop();
        // Show current stack after push

        cout << endl;
    }


    // ======================================================
    // CATEGORY: Pop Function
    // Purpose : Remove the top value from the stack
    // ======================================================

    void Pop()
    {
        if (TopNode == NULL)
        {
            // Check whether the stack is empty

            cout << "Stack is empty! Cannot pop!" << endl << endl;
            // Display error message if no node exists

            return;
            // Stop function execution
        }

        string DeletedTopicCode = TopNode->TopicCode;
        // Store the top value before deleting it

        StackNode* TemporaryNode = TopNode;
        // Keep the current top node in a temporary pointer

        TopNode = TopNode->NextNode;
        // Move top pointer to the next node

        delete TemporaryNode;
        // Delete the previous top node from memory

        cout << "Pop " << DeletedTopicCode << ": " << DeletedTopicCode << " is deleted!" << endl;
        // Display deleted value

        DisplayFromBaseToTop();
        // Show current stack after pop

        cout << endl;
    }


    // ======================================================
    // CATEGORY: Recursive Display Helper
    // Purpose : Print stack from base to top
    // ======================================================

    void DisplayFromBaseToTopHelper(StackNode* CurrentNode)
    {
        if (CurrentNode == NULL)
        {
            // Stop recursion when reach end of linked list

            return;
        }

        DisplayFromBaseToTopHelper(CurrentNode->NextNode);
        // First move to bottom node recursively

        cout << CurrentNode->TopicCode << " , ";
        // Print node value during return phase
    }


    // ======================================================
    // CATEGORY: Display From Base To Top
    // Purpose : Show stack starting from bottom to top
    // ======================================================

    void DisplayFromBaseToTop()
    {
        cout << "Current List: ";
        // Display label

        DisplayFromBaseToTopHelper(TopNode);
        // Call recursive helper function

        cout << endl;
    }


    // ======================================================
    // CATEGORY: Display From Top To Base
    // Purpose : Show stack starting from top to bottom
    // ======================================================

    void DisplayFromTopToBase()
    {
        cout << "Current List: ";
        // Display label

        StackNode* CurrentNode = TopNode;
        // Start from the top node

        while (CurrentNode != NULL)
        {
            cout << CurrentNode->TopicCode << " , ";
            // Print current node value

            CurrentNode = CurrentNode->NextNode;
            // Move to next node
        }

        cout << endl;
    }
};


// ==========================================================
// CATEGORY: Main Function
// Purpose : Execute the given stack operations step by step
// ==========================================================

int main()
{
    LinkedListStack TopicStack;
    // Create linked list-based stack object

    TopicStack.Push("TP01");
    TopicStack.Push("TP02");
    TopicStack.Push("TP03");
    TopicStack.Pop();
    TopicStack.Pop();
    TopicStack.Push("TP04");
    TopicStack.Push("TP05");
    TopicStack.Push("TP03");
    TopicStack.Pop();
    TopicStack.Push("TP02");

    cout << "From base to Top:" << endl;
    // Display final stack from bottom to top

    TopicStack.DisplayFromBaseToTop();
    cout << endl;

    cout << "From Top to base:" << endl;
    // Display final stack from top to bottom

    TopicStack.DisplayFromTopToBase();

    return 0;
    // Indicate successful program termination
}
