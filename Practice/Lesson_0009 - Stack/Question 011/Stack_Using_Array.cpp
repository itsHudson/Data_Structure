// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout for displaying output

using namespace std;
// Avoid writing std::



// ==========================================================
// CATEGORY: Class Definition - ArrayCoinStack
// Purpose : Implement stack using array (LIFO structure)
// ==========================================================

class ArrayCoinStack
{
private:
    int stackArray[100];
    // Array to store stack elements (max size = 100)

    int topIndex;
    // Store index of top element in stack



public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize empty stack
    // ======================================================

    ArrayCoinStack()
    {
        topIndex = -1;
        // -1 indicates stack is empty
    }



    // ======================================================
    // CATEGORY: Check Empty
    // Purpose : Determine if stack has no elements
    // ======================================================

    bool isEmpty()
    {
        return topIndex == -1;
        // If topIndex is -1 → stack is empty
    }



    // ======================================================
    // CATEGORY: Push Operation
    // Purpose : Add element to top of stack
    // ======================================================

    void push(int coinValue)
    {
        topIndex++;
        // Move top pointer up

        stackArray[topIndex] = coinValue;
        // Store new value at top position
    }



    // ======================================================
    // CATEGORY: Pop Operation
    // Purpose : Remove element from top of stack
    // ======================================================

    void pop()
    {
        if (!isEmpty())
        {
            topIndex--;
            // Remove top element by moving pointer down
        }
        // If empty → do nothing (safe check)
    }



    // ======================================================
    // CATEGORY: Display Stack
    // Purpose : Print stack from top to bottom
    // ======================================================

    void displayFromTopToBottom()
    {
        cout << "Coins from top to bottom:" << endl;

        for (int currentIndex = topIndex; currentIndex >= 0; currentIndex--)
        {
            // Start from top and move downwards

            cout << stackArray[currentIndex] << " cent";
            // Display current coin value

            if (currentIndex > 0)
            {
                cout << ", ";
                // Add comma between values
            }
        }

        cout << endl;
    }
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Demonstrate stack operations
// ==========================================================

int main()
{
    ArrayCoinStack coinStack;
    // Create stack object



    // ======================================================
    // CATEGORY: Initial Data
    // Purpose : Store Ali's coin sequence
    // ======================================================

    int aliCoinSequence[] = {50, 20, 10, 10, 20, 50, 50, 20, 10, 20, 20};
    // Array of coins

    int totalNumberOfCoins = 11;
    // Total number of coins



    // ======================================================
    // CATEGORY: Push All Coins into Stack
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfCoins; currentIndex++)
    {
        coinStack.push(aliCoinSequence[currentIndex]);
        // Insert each coin into stack
    }



    // ======================================================
    // CATEGORY: Pop Operation (John removes 3 coins)
    // ======================================================

    coinStack.pop();
    // Remove top coin

    coinStack.pop();
    // Remove next coin

    coinStack.pop();
    // Remove third coin



    // ======================================================
    // CATEGORY: Push Operation (John adds new coins)
    // ======================================================

    coinStack.push(50);
    // Add 50 cent coin

    coinStack.push(10);
    // Add 10 cent coin

    coinStack.push(10);
    // Add another 10 cent coin



    // ======================================================
    // CATEGORY: Display Final Stack
    // ======================================================

    coinStack.displayFromTopToBottom();
    // Show stack from top to bottom



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
