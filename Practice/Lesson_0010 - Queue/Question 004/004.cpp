// ==========================================================
// CATEGORY: Header Files
// Purpose : Import necessary libraries
// ==========================================================

#include <iostream>
#include <string>

using namespace std;


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Manage patient queue
// ==========================================================

class QueueManagementSystem
{
private:

    string PatientQueue[100];
    // Array used to store patient names

    int FrontIndex;
    int RearIndex;

public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize queue
    // ======================================================

    QueueManagementSystem()
    {
        FrontIndex = 0;
        RearIndex = -1;
    }


    // ======================================================
    // CATEGORY: Register Function
    // Purpose : Add patient to queue
    // ======================================================

    void RegisterPatient(string PatientName)
    {
        RearIndex++;

        PatientQueue[RearIndex] = PatientName;

        cout << "Patient registered: " << PatientName << endl;
    }


    // ======================================================
    // CATEGORY: Call Function
    // Purpose : Call next patient for treatment
    // ======================================================

    void CallPatient()
    {
        if (FrontIndex > RearIndex)
        {
            cout << "No patient in queue." << endl;
            return;
        }

        cout << "Calling patient: " << PatientQueue[FrontIndex] << endl;

        FrontIndex++;
    }


    // ======================================================
    // CATEGORY: Display Queue
    // Purpose : Show remaining patients
    // ======================================================

    void DisplayQueue()
    {
        if (FrontIndex > RearIndex)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Remaining patients in queue:" << endl;

        for (int Index = FrontIndex; Index <= RearIndex; Index++)
        {
            cout << PatientQueue[Index] << endl;
        }
    }
};


// ==========================================================
// CATEGORY: Main Program
// Purpose : Simulate QMS operations
// ==========================================================

int main()
{
    QueueManagementSystem ClinicQueue;

    ClinicQueue.RegisterPatient("Ali");
    ClinicQueue.RegisterPatient("Siti");
    ClinicQueue.RegisterPatient("John");

    cout << endl;

    ClinicQueue.DisplayQueue();

    cout << endl;

    ClinicQueue.CallPatient();

    cout << endl;

    ClinicQueue.DisplayQueue();

    return 0;
}
