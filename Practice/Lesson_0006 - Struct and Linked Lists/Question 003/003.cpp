// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define a structure named Point
//           that links to another structure
// ==========================================================

struct Point
{
    int XCoordinate;
    // Variable storing X coordinate

    int YCoordinate;
    // Variable storing Y coordinate

    Point* NextAddress;
    // Pointer storing the address of the next structure
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Create First Node
    // ======================================================

    Point* FirstPointPointer = new Point;

    FirstPointPointer->XCoordinate = 3;
    // Store value 3 in X coordinate

    FirstPointPointer->YCoordinate = 4;
    // Store value 4 in Y coordinate

    FirstPointPointer->NextAddress = NULL;
    // Currently no next node



    // ======================================================
    // CATEGORY: Create Second Node
    // ======================================================

    Point* SecondPointPointer = new Point;

    SecondPointPointer->XCoordinate = 7;
    // Store value 7 in X coordinate

    SecondPointPointer->YCoordinate = 16;
    // Store value 16 in Y coordinate

    SecondPointPointer->NextAddress = NULL;
    // No node after this



    // ======================================================
    // CATEGORY: Link Nodes
    // Purpose : Connect first node to second node
    // ======================================================

    FirstPointPointer->NextAddress = SecondPointPointer;



    // ======================================================
    // CATEGORY: Display First Node Information
    // ======================================================

    cout << "P1 info : \n ----------------\n";

    cout << "P1 Address : "
         << FirstPointPointer
         << endl;

    cout << "P1 x value : "
         << FirstPointPointer->XCoordinate
         << endl;

    cout << "P1 y value : "
         << FirstPointPointer->YCoordinate
         << endl;

    cout << "P1 nextaddress value : "
         << FirstPointPointer->NextAddress
         << endl << endl;



    // ======================================================
    // CATEGORY: Display Second Node Information
    // ======================================================

    cout << "P2 info : \n ----------------\n";

    cout << "P2 Address : "
         << SecondPointPointer
         << endl;

    cout << "P2 x value : "
         << SecondPointPointer->XCoordinate
         << endl;

    cout << "P2 y value : "
         << SecondPointPointer->YCoordinate
         << endl;

    cout << "P2 nextaddress value : "
         << SecondPointPointer->NextAddress
         << endl << endl;



    // ======================================================
    // CATEGORY: Linked List Traversal
    // Purpose : Use a Head pointer to walk through the list
    // ======================================================

    Point* HeadPointer = NULL;

    HeadPointer = FirstPointPointer;
    // HeadPointer starts at the first node



    while (HeadPointer != NULL)
    {
        cout << HeadPointer->XCoordinate << " , ";
        // Display X value of current node

        cout << HeadPointer->YCoordinate << " , ";
        // Display Y value of current node

        cout << HeadPointer->NextAddress << endl;
        // Display address of the next node

        HeadPointer = HeadPointer->NextAddress;
        // Move HeadPointer to the next node
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
