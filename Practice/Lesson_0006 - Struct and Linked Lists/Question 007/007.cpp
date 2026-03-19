// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and strings
// ==========================================================

#include <iostream>
#include <string>

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

    string StudentName;
    // Variable storing the student's name

    int StudentAge;
    // Variable storing the student's age

    Student* NextNode;
    // Pointer storing the address of the next node
};



// ==========================================================
// CATEGORY: Function - Insert At End
// Purpose : Insert a new student node at the end of the list
// ==========================================================

void InsertEnd(Student*& HeadPointer,
               int StudentIDValue,
               string StudentNameValue,
               int StudentAgeValue)
{

    Student* NewStudentNode = new Student;
    // Allocate memory for a new node in heap



    // ======================================================
    // CATEGORY: Store Student Information
    // ======================================================

    NewStudentNode->StudentID = StudentIDValue;
    // Store student ID

    NewStudentNode->StudentName = StudentNameValue;
    // Store student name

    NewStudentNode->StudentAge = StudentAgeValue;
    // Store student age

    NewStudentNode->NextNode = NULL;
    // This node will be the last node



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
        // Temporary pointer used to traverse the list



        while (TraversalPointer->NextNode != NULL)
        {
            TraversalPointer = TraversalPointer->NextNode;
            // Move to next node until reaching the last node
        }



        TraversalPointer->NextNode = NewStudentNode;
        // Attach new node at the end
    }
}



// ==========================================================
// CATEGORY: Function - Display Linked List
// Purpose : Traverse and display student records
// ==========================================================

void DisplayList(Student* HeadPointer)
{

    while (HeadPointer != NULL)
    {

        cout << "ID: "
             << HeadPointer->StudentID
             << endl;

        cout << "Name: "
             << HeadPointer->StudentName
             << endl;

        cout << "Age: "
             << HeadPointer->StudentAge
             << endl;

        cout << "----------------------"
             << endl;
        // Print separator for readability



        HeadPointer = HeadPointer->NextNode;
        // Move to the next node
    }
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
    // Linked list starts empty



    // ======================================================
    // CATEGORY: Insert Student Records
    // ======================================================

    InsertEnd(HeadPointer, 1001, "Ali", 20);
    // List becomes: Ali -> NULL

    InsertEnd(HeadPointer, 1002, "Aina", 21);
    // List becomes: Ali -> Aina -> NULL

    InsertEnd(HeadPointer, 1003, "John", 19);
    // List becomes: Ali -> Aina -> John -> NULL



    // ======================================================
    // CATEGORY: Display Linked List
    // ======================================================

    DisplayList(HeadPointer);



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
