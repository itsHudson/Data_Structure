// ==========================================================
// CATEGORY: Header Files
// Purpose : Import required libraries for the program
// ==========================================================

#include <iostream>   // Allows use of input and output
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Array Stack Class
// Purpose : Implement stack operations using array
// ==========================================================

class ArrayStack
{
private:
    static const int MaximumStackSize = 10;
    // Define maximum number of items allowed in the stack

    string StackArray[MaximumStackSize];
    // Array used to store stack elements

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
        // Set to -1 because stack is initially empty
    }


    // ======================================================
    // CATEGORY: Push Function
    // Purpose : Insert a new value onto the top of the stack
    // ======================================================

    void Push(string NewTopicCode)
    {
        if (TopIndex == MaximumStackSize - 1)
        {
            // Check whether stack is already full

            cout << "Stack Overflow! Cannot push!" << endl << endl;
            // Display overflow message

            return;
            // Stop function execution
        }

        TopIndex++;
        // Move top index up by one

        StackArray[TopIndex] = NewTopicCode;
        // Store new value at the new top position

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
        if (TopIndex == -1)
        {
            // Check whether stack is empty

            cout << "Stack Underflow! Cannot pop!" << endl << endl;
            // Display underflow message

            return;
            // Stop function execution
        }

        string DeletedTopicCode = StackArray[TopIndex];
        // Store the value that will be removed

        TopIndex--;
        // Remove top item by moving top index down

        cout << "Pop " << DeletedTopicCode << ": " << DeletedTopicCode << " is deleted!" << endl;
        // Display deleted value

        DisplayFromBaseToTop();
        // Show current stack after pop

        cout << endl;
    }


    // ======================================================
    // CATEGORY: Display From Base To Top
    // Purpose : Show stack starting from bottom to top
    // ======================================================

    void DisplayFromBaseToTop()
    {
        cout << "Current List: ";
        // Display label

        for (int CurrentIndex = 0; CurrentIndex <= TopIndex; CurrentIndex++)
        {
            cout << StackArray[CurrentIndex] << " , ";
            // Print array values from bottom to top
        }

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

        for (int CurrentIndex = TopIndex; CurrentIndex >= 0; CurrentIndex--)
        {
            cout << StackArray[CurrentIndex] << " , ";
            // Print array values from top to bottom
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
    ArrayStack TopicStack;
    // Create array-based stack object

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
