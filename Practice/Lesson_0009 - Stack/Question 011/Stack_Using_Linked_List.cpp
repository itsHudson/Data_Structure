// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout for displaying output

using namespace std;
// Avoid writing std::



// ==========================================================
// CATEGORY: Node Class - CoinNode
// Purpose : Represent each element in the stack (linked list)
// ==========================================================

class CoinNode
{
public:
    int coinValue;
    // Store coin value

    CoinNode* nextNodePointer;
    // Pointer to next node (below current node in stack)

    CoinNode(int inputCoinValue)
    {
        coinValue = inputCoinValue;
        // Assign value

        nextNodePointer = NULL;
        // Initialize next pointer as NULL
    }
};



// ==========================================================
// CATEGORY: Stack Class - LinkedListCoinStack
// Purpose : Implement stack using linked list (dynamic memory)
// ==========================================================

class LinkedListCoinStack
{
private:
    CoinNode* topNodePointer;
    // Pointer to the top of stack



public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize empty stack
    // ======================================================

    LinkedListCoinStack()
    {
        topNodePointer = NULL;
        // Stack is empty initially
    }



    // ======================================================
    // CATEGORY: Check Empty
    // Purpose : Determine if stack is empty
    // ======================================================

    bool isEmpty()
    {
        return topNodePointer == NULL;
        // If top is NULL → stack is empty
    }



    // ======================================================
    // CATEGORY: Push Operation
    // Purpose : Add new element to top of stack
    // ======================================================

    void push(int coinValue)
    {
        CoinNode* newNodePointer = new CoinNode(coinValue);
        // Create new node dynamically

        newNodePointer->nextNodePointer = topNodePointer;
        // Link new node to current top

        topNodePointer = newNodePointer;
        // Update top pointer to new node
    }



    // ======================================================
    // CATEGORY: Pop Operation
    // Purpose : Remove top element from stack
    // ======================================================

    void pop()
    {
        if (!isEmpty())
        {
            CoinNode* nodeToDeletePointer = topNodePointer;
            // Store current top node

            topNodePointer = topNodePointer->nextNodePointer;
            // Move top to next node

            delete nodeToDeletePointer;
            // Free memory of removed node
        }
    }



    // ======================================================
    // CATEGORY: Display Stack
    // Purpose : Print stack from top to bottom
    // ======================================================

    void displayFromTopToBottom()
    {
        cout << "Coins from top to bottom:" << endl;

        CoinNode* currentNodePointer = topNodePointer;
        // Start from top

        while (currentNodePointer != NULL)
        {
            cout << currentNodePointer->coinValue << " cent";
            // Display coin value

            if (currentNodePointer->nextNodePointer != NULL)
            {
                cout << ", ";
                // Add comma if not last node
            }

            currentNodePointer = currentNodePointer->nextNodePointer;
            // Move to next node
        }

        cout << endl;
    }



    // ======================================================
    // CATEGORY: Destructor
    // Purpose : Automatically free all nodes (prevent memory leak)
// ======================================================

    ~LinkedListCoinStack()
    {
        while (!isEmpty())
        {
            pop();
            // Continuously remove nodes until stack is empty
        }
    }
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Demonstrate stack operations using linked list
// ==========================================================

int main()
{
    LinkedListCoinStack coinStack;
    // Create stack object



    // ======================================================
    // CATEGORY: Initial Data
    // ======================================================

    int aliCoinSequence[] = {50, 20, 10, 10, 20, 50, 50, 20, 10, 20, 20};
    // Array of coins

    int totalNumberOfCoins = 11;
    // Number of elements



    // ======================================================
    // CATEGORY: Push All Coins
    // ======================================================

    for (int currentIndex = 0; currentIndex < totalNumberOfCoins; currentIndex++)
    {
        coinStack.push(aliCoinSequence[currentIndex]);
        // Insert each coin into stack
    }



    // ======================================================
    // CATEGORY: Pop Operation (Remove 3 coins)
    // ======================================================

    coinStack.pop();
    // Remove top coin

    coinStack.pop();
    // Remove next coin

    coinStack.pop();
    // Remove third coin



    // ======================================================
    // CATEGORY: Push Operation (Add new coins)
    // ======================================================

    coinStack.push(50);
    // Add 50

    coinStack.push(10);
    // Add 10

    coinStack.push(10);
    // Add another 10



    // ======================================================
    // CATEGORY: Display Final Stack
    // ======================================================

    coinStack.displayFromTopToBottom();
    // Print stack from top to bottom



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
