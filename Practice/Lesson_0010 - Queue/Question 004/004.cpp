// ==========================================================
// CATEGORY: Header Files
// Purpose : Import necessary libraries
// ==========================================================

#include <iostream>   // Provides input and output functionality
#include <string>     // Allows use of string data type

using namespace std;  // Allows use of standard library without std::


// ==========================================================
// CATEGORY: Queue Class
// Purpose : Manage patient queue
// ==========================================================

class QueueManagementSystem
{
private:

    string PatientQueue[100];
    // Array used to store patient names in the queue

    int FrontIndex;
    // Points to the first patient in the queue

    int RearIndex;
    // Points to the last patient in the queue

public:

    // ======================================================
    // CATEGORY: Constructor
    // Purpose : Initialize queue
    // ======================================================

    QueueManagementSystem()
    {
        FrontIndex = 0;
        // Set front index to the beginning of the queue

        RearIndex = -1;
        // Set rear index to -1 because queue is initially empty
    }


    // ======================================================
    // CATEGORY: Register Function
    // Purpose : Add patient to queue
    // ======================================================

    void RegisterPatient(string PatientName)
    {
        RearIndex++;
        // Move rear index forward

        PatientQueue[RearIndex] = PatientName;
        // Store patient name at rear position

        cout << "Patient registered: " << PatientName << endl;
        // Display confirmation message
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
            // Display message if queue is empty

            return;
            // Stop the function
        }

        cout << "Calling patient: " << PatientQueue[FrontIndex] << endl;
        // Display the patient currently being called

        FrontIndex++;
        // Move front index to the next patient
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
            // Display message if queue is empty

            return;
        }

        cout << "Remaining patients in queue:" << endl;
        // Display queue header

        for (int QueueIndex = FrontIndex; QueueIndex <= RearIndex; QueueIndex++)
        {
            cout << PatientQueue[QueueIndex] << endl;
            // Print each remaining patient in the queue
        }
    }
};


// ==========================================================
// CATEGORY: Main Program
// Purpose : Simulate QMS operations
// ==========================================================

int main()
{
    QueueManagementSystem ClinicPatientQueue;
    // Create queue object for clinic patient management


    // ======================================================
    // CATEGORY: Register Patients
    // ======================================================

    ClinicPatientQueue.RegisterPatient("Ali");
    ClinicPatientQueue.RegisterPatient("Siti");
    ClinicPatientQueue.RegisterPatient("John");


    cout << endl;

    ClinicPatientQueue.DisplayQueue();
    // Display all registered patients


    cout << endl;

    ClinicPatientQueue.CallPatient();
    // Call the next patient


    cout << endl;

    ClinicPatientQueue.DisplayQueue();
    // Display remaining patients


    return 0;
    // Program finished successfully
}
