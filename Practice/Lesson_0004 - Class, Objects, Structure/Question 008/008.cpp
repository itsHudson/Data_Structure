// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define a structure named Point
//           Each Point stores coordinates and
//           a pointer to the next Point (linked structure)
// ==========================================================

struct Point
{
    int XCoordinate;
    // Variable to store x coordinate

    int YCoordinate;
    // Variable to store y coordinate

    Point* NextAddress;
    // Pointer that stores the address of the next Point structure
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: First Structure Creation
    // Purpose : Create first Point dynamically
    // ======================================================

    Point* FirstPointPointer = new Point;
    // Allocate memory for the first structure

    FirstPointPointer->XCoordinate = 3;
    // Assign value 3 to XCoordinate

    FirstPointPointer->YCoordinate = 4;
    // Assign value 4 to YCoordinate

    FirstPointPointer->NextAddress = NULL;
    // Initially the next pointer is NULL



    // ======================================================
    // CATEGORY: Second Structure Creation
    // Purpose : Create second Point dynamically
    // ======================================================

    Point* SecondPointPointer = new Point;
    // Allocate memory for the second structure

    SecondPointPointer->XCoordinate = 7;
    // Assign value 7 to XCoordinate

    SecondPointPointer->YCoordinate = 16;
    // Assign value 16 to YCoordinate

    SecondPointPointer->NextAddress = NULL;
    // Next pointer initially set to NULL



    // ======================================================
    // CATEGORY: Linking Structures
    // Purpose : Connect the first node to the second node
    // ======================================================

    FirstPointPointer->NextAddress = SecondPointPointer;
    // The first structure now points to the second structure



    // ======================================================
    // CATEGORY: Display First Structure Information
    // ======================================================

    cout << "P1 info : \n ----------------\n";

    cout << "P1 Address : " << FirstPointPointer << endl;
    // Display memory address of first node

    cout << "P1 x value : " << FirstPointPointer->XCoordinate << endl;
    // Display X value of first node

    cout << "P1 y value : " << FirstPointPointer->YCoordinate << endl;
    // Display Y value of first node

    cout << "P1 nextaddress value : " << FirstPointPointer->NextAddress << endl << endl;
    // Display address of the next node



    // ======================================================
    // CATEGORY: Display Second Structure Information
    // ======================================================

    cout << "P2 info : \n ----------------\n";

    cout << "P2 Address : " << SecondPointPointer << endl;
    // Display memory address of second node

    cout << "P2 x value : " << SecondPointPointer->XCoordinate << endl;
    // Display X value

    cout << "P2 y value : " << SecondPointPointer->YCoordinate << endl;
    // Display Y value

    cout << "P2 nextaddress value : " << SecondPointPointer->NextAddress << endl << endl;
    // Display next pointer (NULL)



    // ======================================================
    // CATEGORY: Linked List Traversal
    // Purpose : Traverse through the linked structure
    // ======================================================

    Point* HeadPointer = NULL;
    // Declare a pointer named HeadPointer

    HeadPointer = FirstPointPointer;
    // Start traversal from the first node



    while (HeadPointer != NULL)
    {
        // Continue traversal until reaching NULL

        cout << HeadPointer->XCoordinate << " , ";
        // Display current node X value

        cout << HeadPointer->YCoordinate << " , ";
        // Display current node Y value

        cout << HeadPointer->NextAddress << endl;
        // Display address of next node

        HeadPointer = HeadPointer->NextAddress;
        // Move pointer to the next node in the list
    }



    // ======================================================
    // CATEGORY: Memory Cleanup
    // Purpose : Free dynamically allocated memory
    // ======================================================

    delete FirstPointPointer;
    delete SecondPointPointer;



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
