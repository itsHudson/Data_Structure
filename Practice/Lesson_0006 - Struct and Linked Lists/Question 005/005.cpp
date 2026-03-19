// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define a structure representing one student node
//           in a singly linked list
// ==========================================================

struct Student
{
    int StudentID;
    // Variable storing the student ID

    Student* NextNode;
    // Pointer storing the address of the next node
};



// ==========================================================
// CATEGORY: Function - Insert Front
// Purpose : Insert a new student node at the beginning
//           of the linked list
// ==========================================================

void InsertFront(Student*& HeadPointer, int StudentIDValue)
{
    Student* NewStudentNode = new Student;
    // Allocate memory for a new node in heap

    NewStudentNode->StudentID = StudentIDValue;
    // Store the student ID into the new node

    NewStudentNode->NextNode = HeadPointer;
    // Link new node to the current head node

    HeadPointer = NewStudentNode;
    // Move head pointer to the new node
}



// ==========================================================
// CATEGORY: Function - Display List
// Purpose : Traverse and display the linked list
// ==========================================================

void DisplayList(Student* HeadPointer)
{
    while (HeadPointer != NULL)
    {
        cout << HeadPointer->StudentID << " -> ";
        // Display student ID of current node

        HeadPointer = HeadPointer->NextNode;
        // Move pointer to next node
    }

    cout << "NULL" << endl;
    // Indicate end of the linked list
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Initialize Linked List
    // Purpose : Start with an empty list
    // ======================================================

    Student* HeadPointer = NULL;
    // Head pointer initially points to nothing



    // ======================================================
    // CATEGORY: Insert Student Nodes
    // Purpose : Add students at the front of the list
    // ======================================================

    InsertFront(HeadPointer, 1001);
    // List becomes: 1001 -> NULL

    InsertFront(HeadPointer, 1002);
    // List becomes: 1002 -> 1001 -> NULL

    InsertFront(HeadPointer, 1003);
    // List becomes: 1003 -> 1002 -> 1001 -> NULL



    // ======================================================
    // CATEGORY: Display Linked List
    // Purpose : Print all student IDs
    // ======================================================

    DisplayList(HeadPointer);



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
