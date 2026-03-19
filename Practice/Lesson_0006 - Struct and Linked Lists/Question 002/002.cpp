// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define a structure named Point
//           that can link to another Point structure
// ==========================================================

struct Point
{
    int XCoordinate;
    // Variable used to store X coordinate

    int YCoordinate;
    // Variable used to store Y coordinate

    Point* NextAddress;
    // Pointer that stores the address of the next structure
    // This allows linking structures together (like a linked list)
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Create First Structure
    // Purpose : Allocate memory for first point
    // ======================================================

    Point* FirstPointPointer = new Point;

    FirstPointPointer->XCoordinate = 3;
    // Store value 3 into XCoordinate

    FirstPointPointer->YCoordinate = 4;
    // Store value 4 into YCoordinate

    FirstPointPointer->NextAddress = NULL;
    // Currently there is no next node



    // ======================================================
    // CATEGORY: Create Second Structure
    // Purpose : Allocate memory for second point
    // ======================================================

    Point* SecondPointPointer = new Point;

    SecondPointPointer->XCoordinate = 7;
    // Store value 7 into XCoordinate

    SecondPointPointer->YCoordinate = 16;
    // Store value 16 into YCoordinate

    SecondPointPointer->NextAddress = NULL;
    // No next node after this one



    // ======================================================
    // CATEGORY: Link Structures
    // Purpose : Connect first structure to second structure
    // ======================================================

    FirstPointPointer->NextAddress = SecondPointPointer;
    // Now the first structure points to the second structure



    // ======================================================
    // CATEGORY: Display First Structure Information
    // ======================================================

    cout << "P1 info : \n ----------------\n";

    cout << "P1 Address : "
         << FirstPointPointer
         << endl;
    // Display memory address of first structure

    cout << "P1 x value : "
         << FirstPointPointer->XCoordinate
         << endl;
    // Display X coordinate value

    cout << "P1 y value : "
         << FirstPointPointer->YCoordinate
         << endl;
    // Display Y coordinate value

    cout << "P1 nextaddress value : "
         << FirstPointPointer->NextAddress
         << endl << endl;
    // Display address of the next structure



    // ======================================================
    // CATEGORY: Display Second Structure Information
    // ======================================================

    cout << "P2 info : \n ----------------\n";

    cout << "P2 Address : "
         << SecondPointPointer
         << endl;
    // Display memory address of second structure

    cout << "P2 x value : "
         << SecondPointPointer->XCoordinate
         << endl;
    // Display X coordinate value

    cout << "P2 y value : "
         << SecondPointPointer->YCoordinate
         << endl;
    // Display Y coordinate value

    cout << "P2 nextaddress value : "
         << SecondPointPointer->NextAddress
         << endl << endl;
    // Display next pointer (which is NULL)



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
