// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output and string handling
// ==========================================================

#include <iostream>
// Allows use of cout and endl for output display

#include <string>
// Allows usage of string data type

using namespace std;
// Avoid writing std:: before cout, string, etc.



// ==========================================================
// CATEGORY: Node Definition (QueueNode)
// Purpose : Represent each element in the linked list queue
// ==========================================================

class QueueNode
// This class represents a single node in the queue.
// Each node stores data and a pointer to the next node.
{
public:
    string studentID;
    // Store the value (e.g., "TP01")

    QueueNode* nextNode;
    // Pointer to the next node in the queue

    QueueNode(string newStudentID)
    // Constructor to create a new node
    {
        studentID = newStudentID;
        // Assign the value to the node

        nextNode = NULL;
        // Initially, the node does not point to any next node
    }
};



// ==========================================================
// CATEGORY: Queue Class (LinkedListQueue)
// Purpose : Implement Queue using Linked List (FIFO)
// ==========================================================

class LinkedListQueue
{
private:
    // ======================================================
    // CATEGORY: Private Data Members
    // Purpose : Track front and rear of the queue
    // ======================================================

    QueueNode* frontNode;
    // Pointer to the first node (front of queue)

    QueueNode* rearNode;
    // Pointer to the last node (rear of queue)



public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize empty queue
    // ======================================================

    LinkedListQueue()
    {
        frontNode = NULL;
        // No element at front

        rearNode = NULL;
        // No element at rear
    }



    // ======================================================
    // CATEGORY: Check Empty
    // Purpose : Determine whether queue is empty
    // ======================================================

    bool isQueueEmpty()
    {
        return frontNode == NULL;
        // If front is NULL, queue has no elements
    }



    // ======================================================
    // CATEGORY: Enqueue Operation
    // Purpose : Insert new node at rear
    // ======================================================

    void enqueue(string newStudentID)
    {
        QueueNode* newQueueNode = new QueueNode(newStudentID);
        // Dynamically create a new node with given value

        if (isQueueEmpty())
        // If queue is empty, new node becomes both front and rear
        {
            frontNode = newQueueNode;
            // Set front to new node

            rearNode = newQueueNode;
            // Set rear to same node
        }
        else
        {
            rearNode->nextNode = newQueueNode;
            // Link current rear node to new node

            rearNode = newQueueNode;
            // Move rear pointer to new node
        }
    }



    // ======================================================
    // CATEGORY: Dequeue Operation
    // Purpose : Remove node from front
    // ======================================================

    void dequeue()
    {
        if (isQueueEmpty())
        {
            cout << "Queue is empty, cannot remove." << endl;
            // Display error if queue is empty

            return;
            // Stop function to avoid error
        }

        QueueNode* nodeToDelete = frontNode;
        // Store current front node for deletion later

        cout << "Removed: " << frontNode->studentID << endl;
        // Display the value being removed

        frontNode = frontNode->nextNode;
        // Move front pointer to next node
        // This removes the first node logically


        // ==================================================
        // CATEGORY: Reset Rear (IMPORTANT 🔥)
        // ==================================================

        if (frontNode == NULL)
        // If after removal, queue becomes empty
        {
            rearNode = NULL;
            // Reset rear pointer as well
        }

        delete nodeToDelete;
        // Free memory of removed node
    }



    // ======================================================
    // CATEGORY: Display Queue
    // Purpose : Show all elements from front to rear
    // ======================================================

    void displayQueue()
    {
        if (isQueueEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        QueueNode* currentNode = frontNode;
        // Start traversal from front

        cout << "Current queue: ";

        while (currentNode != NULL)
        // Loop until reach end of list
        {
            cout << currentNode->studentID << " ";
            // Print current node value

            currentNode = currentNode->nextNode;
            // Move to next node
        }

        cout << endl;
    }
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Demonstrate queue operations
// ==========================================================

int main()
{
    LinkedListQueue studentQueue;
    // Create queue object



    // ======================================================
    // CATEGORY: Enqueue Operations
    // ======================================================

    studentQueue.enqueue("TP01");
    // Queue: TP01

    studentQueue.enqueue("TP02");
    // Queue: TP01 TP02

    studentQueue.enqueue("TP03");
    // Queue: TP01 TP02 TP03



    // ======================================================
    // CATEGORY: Dequeue Operation
    // ======================================================

    studentQueue.dequeue();
    // Remove TP01 → Queue: TP02 TP03



    // ======================================================
    // CATEGORY: Continue Operations
    // ======================================================

    studentQueue.enqueue("TP04");
    // Queue: TP02 TP03 TP04

    studentQueue.enqueue("TP05");
    // Queue: TP02 TP03 TP04 TP05

    studentQueue.dequeue();
    // Remove TP02 → Queue: TP03 TP04 TP05

    studentQueue.enqueue("TP02");
    // Queue: TP03 TP04 TP05 TP02



    // ======================================================
    // CATEGORY: Display Final Queue
    // ======================================================

    studentQueue.displayQueue();



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
