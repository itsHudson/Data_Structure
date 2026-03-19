// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Structure Definition
// Purpose : Define a structure named Point
//           to store x and y coordinates
// ==========================================================

struct Point
{
    int XCoordinate;
    int YCoordinate;
    // Variables used to store the coordinate values
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Dynamic Memory Allocation
    // Purpose : Create a new Point structure in heap memory
    // ======================================================

    Point* PointPointer = new Point;
    // "new Point" creates a structure in heap memory
    // PointPointer stores the address of that structure



    // ======================================================
    // CATEGORY: Assign Values to Structure Members
    // Purpose : Store coordinate values into the structure
    // ======================================================

    PointPointer->XCoordinate = 3;
    // Insert value 3 into the XCoordinate member

    PointPointer->YCoordinate = 4;
    // Insert value 4 into the YCoordinate member



    // ======================================================
    // CATEGORY: Display Structure Data
    // Purpose : Print stored coordinate values
    // ======================================================

    cout << PointPointer->XCoordinate
         << " "
         << PointPointer->YCoordinate;
    // Display both coordinate values



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
