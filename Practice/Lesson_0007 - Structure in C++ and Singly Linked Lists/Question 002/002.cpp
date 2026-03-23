// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output and string usage
// ==========================================================

#include <iostream>
// Provides cout for output

#include <string>
// Allows usage of string data type

using namespace std;
// Avoid std:: prefix



// ==========================================================
// CATEGORY: Class Definition - FlowerNode
// Purpose : Represent a node in the linked list
// ==========================================================

class FlowerNode
{
public:
    string flowerName;
    // Store flower name

    FlowerNode* next;
    // Pointer to next node

    FlowerNode(string inputName)
    {
        flowerName = inputName;
        // Assign flower name

        next = NULL;
        // Initialize next pointer as NULL
    }
};



// ==========================================================
// CATEGORY: Class Definition - FlowerLinkedList
// Purpose : Manage linked list operations
// ==========================================================

class FlowerLinkedList
{
private:
    FlowerNode* head;
    // Pointer to first node in the list

public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize empty list
    // ======================================================

    FlowerLinkedList()
    {
        head = NULL;
        // List starts empty
    }



    // ======================================================
    // CATEGORY: Insert At End
    // Purpose : Add new flower at end of list
    // ======================================================

    void insertAtEnd(string inputName)
    {
        FlowerNode* newNode = new FlowerNode(inputName);
        // Create new node

        if (head == NULL)
        {
            head = newNode;
            // If list empty → new node becomes head
        }
        else
        {
            FlowerNode* current = head;
            // Start traversal from head

            while (current->next != NULL)
            {
                current = current->next;
                // Move until last node
            }

            current->next = newNode;
            // Link last node to new node
        }
    }



    // ======================================================
    // CATEGORY: Remove Flower By Name
    // Purpose : Delete node based on flower name
    // ======================================================

    void removeFlowerByName(string targetFlowerName)
    {

        // ==================================================
        // CASE 1: Empty List
        // ==================================================

        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
            // No nodes to delete
        }



        // ==================================================
        // CASE 2: Target is at Head
        // ==================================================

        if (head->flowerName == targetFlowerName)
        {
            FlowerNode* temp = head;
            // Store current head node

            head = head->next;
            // Move head to next node

            delete temp;
            // Delete old head

            return;
        }



        // ==================================================
        // CASE 3: Target in Middle or End
        // ==================================================

        FlowerNode* current = head;
        // Start from head

        while (current->next != NULL && current->next->flowerName != targetFlowerName)
        {
            current = current->next;
            // Move until node BEFORE target
        }



        // ==================================================
        // CASE 3A: Target Found
        // ==================================================

        if (current->next != NULL)
        {
            FlowerNode* temp = current->next;
            // Store node to delete

            current->next = temp->next;
            // Bypass the node (skip it)

            delete temp;
            // Free memory
        }



        // ==================================================
        // CASE 3B: Target Not Found
        // ==================================================

        else
        {
            cout << "Flower not found." << endl;
            // No matching node found
        }
    }



    // ======================================================
    // CATEGORY: Display List
    // Purpose : Print all nodes in linked list
    // ======================================================

    void display()
    {
        FlowerNode* current = head;
        // Start from head

        while (current != NULL)
        {
            cout << current->flowerName << " -> ";
            // Display current node

            current = current->next;
            // Move to next node
        }

        cout << "NULL" << endl;
        // Indicate end of list
    }
};
