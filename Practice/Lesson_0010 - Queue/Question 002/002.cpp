// ==========================================================
// CATEGORY: Header Files
// ==========================================================

#include <iostream>
using namespace std;


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Simple queue implementation
// ==========================================================

class QueueType
{
private:

    int QueueArray[100];
    int FrontIndex;
    int RearIndex;

public:

    // Constructor
    QueueType()
    {
        FrontIndex = 0;
        RearIndex = -1;
    }

    // Enqueue function
    void Enqueue(int Value)
    {
        RearIndex++;
        QueueArray[RearIndex] = Value;
    }

    // Dequeue function
    int Dequeue()
    {
        int Value = QueueArray[FrontIndex];
        FrontIndex++;
        return Value;
    }

    // Display queue
    void DisplayQueue()
    {
        for(int Index = FrontIndex; Index <= RearIndex; Index++)
        {
            cout << QueueArray[Index] << " ";
        }
        cout << endl;
    }


    // ======================================================
    // CATEGORY: moveNthFront Function
    // Purpose : Move Nth element to the front
    // ======================================================

    void MoveNthFront(int N)
    {
        int QueueSize = RearIndex - FrontIndex + 1;

        if(N <= 1 || N > QueueSize)
        {
            return;
        }

        int TempArray[100];
        int TempIndex = 0;

        // Remove elements before N
        for(int Index = 1; Index < N; Index++)
        {
            TempArray[TempIndex++] = Dequeue();
        }

        // Remove the Nth element
        int NthElement = Dequeue();

        // Reset queue to insert Nth element first
        int RemainingSize = RearIndex - FrontIndex + 1;
        int RemainingArray[100];

        for(int Index = 0; Index < RemainingSize; Index++)
        {
            RemainingArray[Index] = Dequeue();
        }

        FrontIndex = 0;
        RearIndex = -1;

        // Insert Nth element at front
        Enqueue(NthElement);

        // Insert the elements that were before it
        for(int Index = 0; Index < TempIndex; Index++)
        {
            Enqueue(TempArray[Index]);
        }

        // Insert remaining elements
        for(int Index = 0; Index < RemainingSize; Index++)
        {
            Enqueue(RemainingArray[Index]);
        }
    }
};


// ==========================================================
// CATEGORY: Main Program
// ==========================================================

int main()
{
    QueueType MyQueue;

    MyQueue.Enqueue(5);
    MyQueue.Enqueue(11);
    MyQueue.Enqueue(34);
    MyQueue.Enqueue(67);
    MyQueue.Enqueue(43);
    MyQueue.Enqueue(55);

    cout << "Original Queue: ";
    MyQueue.DisplayQueue();

    int N = 3;

    MyQueue.MoveNthFront(N);

    cout << "After moveNthFront(" << N << "): ";
    MyQueue.DisplayQueue();

    return 0;
}
