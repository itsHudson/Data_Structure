// ==========================================================
// CATEGORY: Header Files
// ==========================================================

#include <iostream>
using namespace std;


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Simple queue implementation using array
// ==========================================================

class Queue
{
private:
    double QueueArray[20];
    int FrontIndex;
    int RearIndex;

public:

    Queue()
    {
        FrontIndex = 0;
        RearIndex = -1;
    }

    void Enqueue(double Value)
    {
        RearIndex++;
        QueueArray[RearIndex] = Value;
    }

    double Dequeue()
    {
        double Value = QueueArray[FrontIndex];
        FrontIndex++;
        return Value;
    }

    double Sum()
    {
        double TotalSum = 0;

        for(int Index = FrontIndex; Index <= RearIndex; Index++)
        {
            TotalSum += QueueArray[Index];
        }

        return TotalSum;
    }
};


// ==========================================================
// CATEGORY: Main Function
// ==========================================================

int main()
{
    Queue Q1, Q2, Q3;

    Q1.Enqueue(34.5);
    Q1.Enqueue(22.5);
    Q1.Enqueue(44.5);

    Q2.Enqueue(10.4);
    Q2.Enqueue(35.7);
    Q2.Enqueue(38.7);
    Q2.Enqueue(19.7);

    Q3.Enqueue(Q2.Dequeue());
    Q3.Enqueue(Q2.Dequeue());
    Q3.Enqueue(Q1.Dequeue());

    Q2.Enqueue(66.7);

    cout << Q1.Sum() << ", "
         << Q2.Sum() << ", "
         << Q3.Sum() << "." << endl;

    return 0;
}
