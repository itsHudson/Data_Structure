// ==========================================================
// CATEGORY: Header Files
// Purpose : Import input/output functionality
// ==========================================================

#include <iostream>   // Provides cin and cout functions
using namespace std;  // Allows usage of standard library without std::


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Simple queue implementation
// ==========================================================

class QueueType
{
private:

    int QueueArray[100];
    // Array used to store queue elements

    int FrontIndex;
    // Points to the front element of the queue

    int RearIndex;
    // Points to the last element of the queue


public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize queue indexes
    // ======================================================

    QueueType()
    {
        FrontIndex = 0;
        // Initialize front position

        RearIndex = -1;
        // Rear is -1 because queue starts empty
    }


    // ======================================================
    // CATEGORY: Enqueue Function
    // Purpose : Insert element into queue
    // ======================================================

    void Enqueue(int ElementValue)
    {
        RearIndex++;
        // Move rear index to next position

        QueueArray[RearIndex] = ElementValue;
        // Store element at rear position
    }


    // ======================================================
    // CATEGORY: Dequeue Function
    // Purpose : Remove element from queue
    // ======================================================

    int Dequeue()
    {
        int ElementValue = QueueArray[FrontIndex];
        // Retrieve element from front

        FrontIndex++;
        // Move front index forward

        return ElementValue;
        // Return removed element
    }


    // ======================================================
    // CATEGORY: Display Queue
    // Purpose : Print queue elements
    // ======================================================

    void DisplayQueue()
    {
        for(int QueueIndex = FrontIndex; QueueIndex <= RearIndex; QueueIndex++)
        {
            cout << QueueArray[QueueIndex] << " ";
            // Print each element in the queue
        }

        cout << endl;
        // Move to next line
    }


    // ======================================================
    // CATEGORY: moveNthFront Function
    // Purpose : Move Nth element to the front of the queue
    // ======================================================

    void MoveNthFront(int TargetPosition)
    {
        int CurrentQueueSize = RearIndex - FrontIndex + 1;
        // Calculate the current number of elements in the queue


        if(TargetPosition <= 1 || TargetPosition > CurrentQueueSize)
        {
            return;
            // If position is invalid, do nothing
        }


        int TemporaryElementsArray[100];
        int TemporaryArrayIndex = 0;
        // Temporary storage for elements before the Nth element


        // ==================================================
        // Remove elements before the Nth element
        // ==================================================

        for(int QueueIndex = 1; QueueIndex < TargetPosition; QueueIndex++)
        {
            TemporaryElementsArray[TemporaryArrayIndex++] = Dequeue();
            // Store elements temporarily
        }


        // ==================================================
        // Remove the Nth element
        // ==================================================

        int NthElementValue = Dequeue();
        // Remove the Nth element from queue


        // ==================================================
        // Store remaining elements
        // ==================================================

        int RemainingSize = RearIndex - FrontIndex + 1;
        // Calculate number of remaining elements

        int RemainingElementsArray[100];
        // Temporary array to store remaining queue elements


        for(int QueueIndex = 0; QueueIndex < RemainingSize; QueueIndex++)
        {
            RemainingElementsArray[QueueIndex] = Dequeue();
            // Remove remaining elements
        }


        // ==================================================
        // Reset queue
        // ==================================================

        FrontIndex = 0;
        RearIndex = -1;
        // Reset queue to empty state


        // ==================================================
        // Insert Nth element at front
        // ==================================================

        Enqueue(NthElementValue);
        // Insert the Nth element first


        // ==================================================
        // Insert elements that were before it
        // ==================================================

        for(int QueueIndex = 0; QueueIndex < TemporaryArrayIndex; QueueIndex++)
        {
            Enqueue(TemporaryElementsArray[QueueIndex]);
            // Reinsert earlier elements
        }


        // ==================================================
        // Insert remaining elements
        // ==================================================

        for(int QueueIndex = 0; QueueIndex < RemainingSize; QueueIndex++)
        {
            Enqueue(RemainingElementsArray[QueueIndex]);
            // Reinsert remaining elements
        }
    }
};


// ==========================================================
// CATEGORY: Main Program
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    QueueType MyQueue;
    // Create queue object


    // ======================================================
    // Insert elements into queue
    // ======================================================

    MyQueue.Enqueue(5);
    MyQueue.Enqueue(11);
    MyQueue.Enqueue(34);
    MyQueue.Enqueue(67);
    MyQueue.Enqueue(43);
    MyQueue.Enqueue(55);


    cout << "Original Queue: ";
    MyQueue.DisplayQueue();
    // Display original queue order


    int TargetPosition = 3;
    // Specify the Nth position to move


    MyQueue.MoveNthFront(TargetPosition);
    // Move Nth element to front


    cout << "After moveNthFront(" << TargetPosition << "): ";
    MyQueue.DisplayQueue();
    // Display updated queue


    return 0;
    // Program finished successfully
}
