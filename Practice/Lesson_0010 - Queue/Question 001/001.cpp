// ==========================================================
// CATEGORY: Header Files
// Purpose : Import input/output functionality
// ==========================================================

#include <iostream>   // Provides cin and cout functions
using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Simple queue implementation using array
// ==========================================================

class Queue
{
private:

    double QueueArray[20];
    // Array used to store queue elements

    int FrontIndex;
    // Points to the first element in the queue

    int RearIndex;
    // Points to the last element in the queue


public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize queue indexes
    // ======================================================

    Queue()
    {
        FrontIndex = 0;
        // Set the front of queue to index 0

        RearIndex = -1;
        // Rear is set to -1 because queue is initially empty
    }


    // ======================================================
    // CATEGORY: Enqueue Operation
    // Purpose : Insert element into the queue
    // ======================================================

    void Enqueue(double ElementValue)
    {
        RearIndex++;
        // Move rear index to the next position

        QueueArray[RearIndex] = ElementValue;
        // Store the new element into the queue
    }


    // ======================================================
    // CATEGORY: Dequeue Operation
    // Purpose : Remove element from the queue
    // ======================================================

    double Dequeue()
    {
        double ElementValue = QueueArray[FrontIndex];
        // Retrieve the element at the front of the queue

        FrontIndex++;
        // Move the front index forward

        return ElementValue;
        // Return the removed element
    }


    // ======================================================
    // CATEGORY: Sum Function
    // Purpose : Calculate the sum of queue elements
    // ======================================================

    double Sum()
    {
        double QueueTotalSum = 0;
        // Variable used to accumulate total sum

        for(int QueueIndex = FrontIndex; QueueIndex <= RearIndex; QueueIndex++)
        {
            QueueTotalSum += QueueArray[QueueIndex];
            // Add each queue element into the total sum
        }

        return QueueTotalSum;
        // Return the calculated sum
    }
};


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    Queue QueueOne, QueueTwo, QueueThree;
    // Create three queue objects


    // ======================================================
    // CATEGORY: Insert Elements into QueueOne
    // ======================================================

    QueueOne.Enqueue(34.5);
    QueueOne.Enqueue(22.5);
    QueueOne.Enqueue(44.5);


    // ======================================================
    // CATEGORY: Insert Elements into QueueTwo
    // ======================================================

    QueueTwo.Enqueue(10.4);
    QueueTwo.Enqueue(35.7);
    QueueTwo.Enqueue(38.7);
    QueueTwo.Enqueue(19.7);


    // ======================================================
    // CATEGORY: Move Elements Between Queues
    // ======================================================

    QueueThree.Enqueue(QueueTwo.Dequeue());
    // Remove first element from QueueTwo and insert into QueueThree

    QueueThree.Enqueue(QueueTwo.Dequeue());
    // Remove second element from QueueTwo and insert into QueueThree

    QueueThree.Enqueue(QueueOne.Dequeue());
    // Remove first element from QueueOne and insert into QueueThree


    // ======================================================
    // CATEGORY: Insert Additional Element into QueueTwo
    // ======================================================

    QueueTwo.Enqueue(66.7);


    // ======================================================
    // CATEGORY: Display Queue Sums
    // Purpose : Print total sum of each queue
    // ======================================================

    cout << QueueOne.Sum() << ", "
         << QueueTwo.Sum() << ", "
         << QueueThree.Sum() << "." << endl;
    // Display the sum of elements in each queue


    return 0;
    // Program finished successfully
}
