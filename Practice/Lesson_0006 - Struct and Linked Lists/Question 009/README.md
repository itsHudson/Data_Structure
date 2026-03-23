# Question 1: Explain what is linked list.

## Answer:
```text
- A linked list is a linear data structure made up of nodes. Each node stores two parts: the data and a pointer (or link) to the next node in the sequence.
- Unlike arrays, linked list elements are not stored in contiguous memory locations. The nodes are connected through pointers.
- A linked list is useful when the size of the data may change during program execution because nodes can be added or removed dynamically.
```


---


## Question 2: Explain the basic properties of a linked list and its advantages.

## Answer:
```text
- The basic properties of a linked list are:
  - It consists of nodes.
  - Each node contains data and a pointer to the next node.
  - The first node is called the head.
  - The last node points to `NULL`.
  - Nodes are stored dynamically in memory.
  - The size of the linked list can grow or shrink during runtime.

- The advantages of a linked list are:
  - Dynamic size allocation.
  - Easy insertion and deletion of elements.
  - Does not require contiguous memory.
  - Memory is used only when needed.
```


---



## Question 3: Define the classes `NodeType` and `LinkedList` in C++ project.

## Answer: Below is the definition and implementation of `NodeType` and `LinkedList` classes.

```cpp
// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include <iostream>
// Provides cout and endl for output display

using namespace std;
// Avoid writing std:: before cout and endl



// ==========================================================
// CATEGORY: Class Definition - NodeType
// Purpose : Represent one node in the linked list
// ==========================================================

class NodeType
{
public:
    int dataValue;
    // Store the actual integer value of the node

    NodeType* nextNodePointer;
    // Store pointer to the next node in the list

    NodeType(int inputDataValue)
    {
        dataValue = inputDataValue;
        // Assign input value to current node

        nextNodePointer = NULL;
        // Initialize next pointer as NULL
        // This means the node is not connected to another node yet
    }
};



// ==========================================================
// CATEGORY: Class Definition - LinkedList
// Purpose : Manage linked list operations
// ==========================================================

class LinkedList
{
private:
    NodeType* headNodePointer;
    // Pointer to the first node in the linked list

    int totalNumberOfNodes;
    // Store total number of nodes in the linked list

public:

    // ======================================================
    // CATEGORY: Default Constructor
    // Purpose : Initialize empty linked list
    // ======================================================

    LinkedList()
    {
        headNodePointer = NULL;
        // Set head pointer to NULL because list is empty initially

        totalNumberOfNodes = 0;
        // Set number of nodes to 0
    }



    // ======================================================
    // CATEGORY: Insert At Beginning
    // Purpose : Add new node at the front of the linked list
    // ======================================================

    void insertAtBeginning(int inputDataValue)
    {
        NodeType* newNodePointer = new NodeType(inputDataValue);
        // Create a new node dynamically with given data

        newNodePointer->nextNodePointer = headNodePointer;
        // Make new node point to the current first node

        headNodePointer = newNodePointer;
        // Update head so new node becomes the first node

        totalNumberOfNodes++;
        // Increase total node count
    }



    // ======================================================
    // CATEGORY: Insert At End
    // Purpose : Add new node at the back of the linked list
    // ======================================================

    void insertAtEnd(int inputDataValue)
    {
        NodeType* newNodePointer = new NodeType(inputDataValue);
        // Create a new node dynamically with given data

        if (headNodePointer == NULL)
        {
            headNodePointer = newNodePointer;
            // If list is empty, new node becomes the first node
        }
        else
        {
            NodeType* currentNodePointer = headNodePointer;
            // Start traversal from the head node

            while (currentNodePointer->nextNodePointer != NULL)
            {
                currentNodePointer = currentNodePointer->nextNodePointer;
                // Move to the next node until reaching the last node
            }

            currentNodePointer->nextNodePointer = newNodePointer;
            // Link the last node to the new node
        }

        totalNumberOfNodes++;
        // Increase total node count
    }



    // ======================================================
    // CATEGORY: Get Size
    // Purpose : Return total number of nodes in the list
    // ======================================================

    int getSize()
    {
        return totalNumberOfNodes;
        // Return current number of nodes
    }



    // ======================================================
    // CATEGORY: Print Linked List
    // Purpose : Display all node values in the list
    // ======================================================

    void print()
    {
        NodeType* currentNodePointer = headNodePointer;
        // Start from the first node

        while (currentNodePointer != NULL)
        {
            cout << currentNodePointer->dataValue << " ";
            // Display current node's data

            currentNodePointer = currentNodePointer->nextNodePointer;
            // Move to the next node
        }

        cout << endl;
        // Move output to next line after printing all nodes
    }



    // ======================================================
    // CATEGORY: Destructor
    // Purpose : Release all dynamically allocated nodes
    // ======================================================

    ~LinkedList()
    {
        NodeType* currentNodePointer = headNodePointer;
        // Start from the head node

        while (currentNodePointer != NULL)
        {
            NodeType* nodeToDeletePointer = currentNodePointer;
            // Temporarily store current node for deletion

            currentNodePointer = currentNodePointer->nextNodePointer;
            // Move to next node before deleting current node

            delete nodeToDeletePointer;
            // Free memory of the current node
        }
    }
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    LinkedList list;
    // Create LinkedList object using default constructor

    list.insertAtBeginning(5);
    // Insert 5 at the beginning
    // List becomes: 5

    list.insertAtEnd(9);
    // Insert 9 at the end
    // List becomes: 5 9

    list.insertAtBeginning(3);
    // Insert 3 at the beginning
    // List becomes: 3 5 9

    cout << list.getSize() << endl;
    // Display total number of nodes (3)

    list.print();
    // Print current linked list: 3 5 9

    list.insertAtEnd(11);
    // Insert 11 at the end
    // List becomes: 3 5 9 11

    cout << list.getSize() << endl;
    // Display updated total number of nodes (4)

    list.print();
    // Print updated linked list: 3 5 9 11

    return 0;
    // End program successfully
}
```

## Output
```text
3
3 5 9 
4
3 5 9 11 
