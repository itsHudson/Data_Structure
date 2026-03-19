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
    // Variable to store x value

    int YCoordinate;
    // Variable to store y value
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    // ======================================================
    // CATEGORY: Pointer Allocation
    // Purpose : Create a pointer pointing to a new Point
    // ======================================================

    Point* PointPointer = new Point;
    // Allocate memory dynamically for a Point structure
    // PointPointer now points to that memory location


    // ======================================================
    // CATEGORY: Assign Values
    // Purpose : Insert coordinate values into the structure
    // ======================================================

    PointPointer->XCoordinate = 3;
    // Store value 3 into XCoordinate using pointer access operator

    PointPointer->YCoordinate = 4;
    // Store value 4 into YCoordinate using pointer access operator


    // ======================================================
    // CATEGORY: Display Output
    // Purpose : Print the stored coordinate values
    // ======================================================

    cout << PointPointer->XCoordinate
         << " "
         << PointPointer->YCoordinate;
    // Display the x and y coordinate values


    // ======================================================
    // CATEGORY: Memory Cleanup
    // Purpose : Free dynamically allocated memory
    // ======================================================

    delete PointPointer;
    // Release allocated memory to avoid memory leak


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
