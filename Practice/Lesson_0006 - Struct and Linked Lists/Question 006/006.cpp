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
    // Variable used to store the student ID

    Student* NextNode;
    // Pointer storing the address of the next node
};



// ==========================================================
// CATEGORY: Function - Insert At End
// Purpose : Insert a new node at the end of the linked list
// ==========================================================

void InsertEnd(Student*& HeadPointer, int StudentIDValue)
{
    Student* NewStudentNode = new Student;
    // Allocate memory for a new node

    NewStudentNode->StudentID = StudentIDValue;
    // Store student ID inside the new node

    NewStudentNode->NextNode = NULL;
    // This will be the last node



    // ======================================================
    // CASE 1: Linked List is Empty
    // ======================================================

    if (HeadPointer == NULL)
    {
        HeadPointer = NewStudentNode;
        // If the list is empty, the new node becomes the head
    }



    // ======================================================
    // CASE 2: Linked List is NOT Empty
    // ======================================================

    else
    {
        Student* TraversalPointer = HeadPointer;
        // Temporary pointer used to move through the list



        // Move pointer until the last node is found
        while (TraversalPointer->NextNode != NULL)
        {
            TraversalPointer = TraversalPointer->NextNode;
        }



        // Link the last node to the new node
        TraversalPointer->NextNode = NewStudentNode;
    }
}



// ==========================================================
// CATEGORY: Function - Display Linked List
// Purpose : Traverse and display the linked list
// ==========================================================

void DisplayList(Student* HeadPointer)
{
    while (HeadPointer != NULL)
    {
        cout << HeadPointer->StudentID << " -> ";
        // Display the student ID

        HeadPointer = HeadPointer->NextNode;
        // Move to the next node
    }

    cout << "NULL" << endl;
    // Indicate end of the list
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Initialize Empty Linked List
    // ======================================================

    Student* HeadPointer = NULL;
    // The list starts empty



    // ======================================================
    // CATEGORY: Insert Nodes at End
    // ======================================================

    InsertEnd(HeadPointer, 1001);
    // List becomes: 1001 -> NULL

    InsertEnd(HeadPointer, 1002);
    // List becomes: 1001 -> 1002 -> NULL

    InsertEnd(HeadPointer, 1003);
    // List becomes: 1001 -> 1002 -> 1003 -> NULL



    // ======================================================
    // CATEGORY: Display Linked List
    // ======================================================

    DisplayList(HeadPointer);



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
