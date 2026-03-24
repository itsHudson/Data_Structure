// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output operations and string handling
// ==========================================================

#include <iostream>  
// Include the iostream library so the program can use
// cout to display output on the screen and endl for a new line.

#include <string>    
// Include the string library so the program can use
// the string data type to store text values like "TP01".

using namespace std; 
// Allow us to write cout, string, and endl directly
// without writing std::cout, std::string, and std::endl.


// ==========================================================
// CATEGORY: Class Definition - ArrayQueue
// Purpose : Implement a Queue using an array based approach
//           following FIFO (First In, First Out)
// ==========================================================

class ArrayQueue
// Define a class named ArrayQueue.
// This class groups together the data and functions
// needed to manage the queue.
{
private:
    // ======================================================
    // CATEGORY: Private Data Members
    // Purpose : Store queue data and internal queue positions
    // ======================================================

    static const int MAXIMUM_QUEUE_SIZE = 7;
    // Define the maximum number of elements the queue can hold.
    // Because array size must be fixed, we set it to 7.

    string queueArray[MAXIMUM_QUEUE_SIZE];
    // Create an array of strings to store queue elements.
    // Example stored values: "TP01", "TP02", "TP03".

    int frontIndex;
    // Store the index of the front element in the queue.
    // The front is the first element to be removed.

    int rearIndex;
    // Store the index of the rear element in the queue.
    // The rear is the last element inserted into the queue.


public:
    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize the queue as empty
    // ======================================================

    ArrayQueue()
    // Constructor function.
    // It runs automatically when an object of ArrayQueue is created.
    {
        frontIndex = -1;
        // Set frontIndex to -1 to indicate the queue is empty.

        rearIndex = -1;
        // Set rearIndex to -1 to indicate the queue is empty.
    }


    // ======================================================
    // CATEGORY: Check Empty
    // Purpose : Determine whether the queue has no elements
    // ======================================================

    bool isEmpty()
    // This function checks whether the queue is empty.
    // It returns true if empty, otherwise false.
    {
        return frontIndex == -1 || frontIndex > rearIndex;
        // The queue is considered empty in two cases:
        // 1. frontIndex == -1  -> queue has never stored data or was reset
        // 2. frontIndex > rearIndex -> all elements were removed logically
    }


    // ======================================================
    // CATEGORY: Check Full
    // Purpose : Determine whether the queue is full
    // ======================================================

    bool isFull()
    // This function checks whether the queue is already full.
    // It returns true if full, otherwise false.
    {
        return rearIndex == MAXIMUM_QUEUE_SIZE - 1;
        // The queue is full when rearIndex reaches the last
        // valid index of the array.
        // Example: if size is 7, last index is 6.
    }


    // ======================================================
    // CATEGORY: Enqueue Operation
    // Purpose : Insert a new element at the rear of the queue
    // ======================================================

    void enqueue(string newQueueValue)
    // This function adds a new value into the queue.
    // The new value is always inserted at the rear.
    {
        if (isFull())
        // First, check whether the queue is already full.
        {
            cout << "Queue is full. Cannot insert " << newQueueValue << "." << endl;
            // Display an error message to tell the user
            // that insertion cannot be done.

            return;
            // Stop the function immediately to avoid overflow.
        }

        if (isEmpty())
        // If the queue is empty before insertion,
        // this new item will become the first element.
        {
            frontIndex = 0;
            // Set frontIndex to 0 because the first element
            // in the queue will be stored at index 0.
        }

        rearIndex++;
        // Move rearIndex one step forward to prepare
        // the next empty position for insertion.

        queueArray[rearIndex] = newQueueValue;
        // Store the new value into the array at the rear position.
    }


    // ======================================================
    // CATEGORY: Dequeue Operation
    // Purpose : Remove an element from the front of the queue
    // ======================================================

    void dequeue()
    // This function removes the front element from the queue.
    // In a queue, deletion always happens from the front.
    {
        if (isEmpty())
        // First, check whether the queue is empty.
        {
            cout << "Queue is empty. Cannot delete." << endl;
            // Display an error message if there is nothing to remove.

            return;
            // Stop the function immediately to avoid underflow.
        }

        cout << "Removed: " << queueArray[frontIndex] << endl;
        // Display the value being removed from the front of the queue.

        frontIndex++;
        // Move frontIndex one step forward.
        // This logically removes the current front element.
        // The old value may still exist in the array physically,
        // but it is no longer considered part of the queue.


        // ==================================================
        // CATEGORY: Reset Queue After Last Deletion
        // Purpose : Return queue to empty state when all
        //           elements have been removed
        // ==================================================

        if (frontIndex > rearIndex)
        // If frontIndex moves past rearIndex,
        // it means all elements have been removed.
        {
            frontIndex = -1;
            // Reset frontIndex to -1 to mark the queue as empty.

            rearIndex = -1;
            // Reset rearIndex to -1 to mark the queue as empty again.
        }
    }


    // ======================================================
    // CATEGORY: Display Queue
    // Purpose : Show all queue elements from front to rear
    // ======================================================

    void displayQueue()
    // This function displays all current elements in the queue
    // from the front position to the rear position.
    {
        if (isEmpty())
        // First, check whether the queue is empty.
        {
            cout << "Queue is empty." << endl;
            // Display a message if there are no elements.

            return;
            // Stop the function because there is nothing to show.
        }

        cout << "Current queue: ";
        // Display a label before printing queue elements.

        for (int currentIndex = frontIndex; currentIndex <= rearIndex; currentIndex++)
        // Start from the front index and continue until the rear index.
        // This ensures only valid queue elements are displayed.
        {
            cout << queueArray[currentIndex] << " ";
            // Print each queue element followed by a space.
        }

        cout << endl;
        // Move to the next line after printing all queue elements.
    }
};


// ==========================================================
// CATEGORY: Main Function
// Purpose : Demonstrate how queue operations work
// ==========================================================

int main()
// Main function is the starting point of the program.
{
    ArrayQueue studentTicketQueue;
    // Create an object named studentTicketQueue
    // from the ArrayQueue class.


    // ======================================================
    // CATEGORY: Enqueue Operations
    // Purpose : Add initial elements into the queue
    // ======================================================

    studentTicketQueue.enqueue("TP01");
    // Insert TP01 into the queue.
    // Queue becomes: TP01

    studentTicketQueue.enqueue("TP02");
    // Insert TP02 into the queue.
    // Queue becomes: TP01 TP02

    studentTicketQueue.enqueue("TP03");
    // Insert TP03 into the queue.
    // Queue becomes: TP01 TP02 TP03


    // ======================================================
    // CATEGORY: First Dequeue Operation
    // Purpose : Remove the first inserted element
    // ======================================================

    studentTicketQueue.dequeue();
    // Remove the front element.
    // TP01 is removed because queue follows FIFO.
    // Queue becomes: TP02 TP03


    // ======================================================
    // CATEGORY: Continue Queue Operations
    // Purpose : Perform additional insertion and deletion
    // ======================================================

    studentTicketQueue.enqueue("TP04");
    // Insert TP04 at the rear.
    // Queue becomes: TP02 TP03 TP04

    studentTicketQueue.enqueue("TP05");
    // Insert TP05 at the rear.
    // Queue becomes: TP02 TP03 TP04 TP05

    studentTicketQueue.dequeue();
    // Remove the front element.
    // TP02 is removed.
    // Queue becomes: TP03 TP04 TP05

    studentTicketQueue.enqueue("TP02");
    // Insert TP02 again at the rear as a new value.
    // Queue becomes: TP03 TP04 TP05 TP02


    // ======================================================
    // CATEGORY: Display Final Queue
    // Purpose : Show the remaining elements in the queue
    // ======================================================

    studentTicketQueue.displayQueue();
    // Display all elements still inside the queue.
    // Expected output: TP03 TP04 TP05 TP02


    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ======================================================

    return 0;
    // Return 0 to indicate the program ended normally.
}
