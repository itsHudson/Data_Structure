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
//           a pointer to the next Point structure
// ==========================================================

struct Point
{
    int XCoordinate;
    // Variable to store x value

    int YCoordinate;
    // Variable to store y value

    Point* NextAddress;
    // Pointer to another Point structure
    // Used to link structures together (like a linked list)
};



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: First Structure Creation
    // Purpose : Dynamically create the first Point structure
    // ======================================================

    Point* FirstPointPointer = new Point;
    // Allocate memory for the first Point structure

    FirstPointPointer->XCoordinate = 3;
    // Store value 3 into XCoordinate

    FirstPointPointer->YCoordinate = 4;
    // Store value 4 into YCoordinate

    FirstPointPointer->NextAddress = NULL;
    // Initially set the next pointer to NULL
    // This means it does not point to another structure yet



    // ======================================================
    // CATEGORY: Second Structure Creation
    // Purpose : Dynamically create the second Point structure
    // ======================================================

    Point* SecondPointPointer = new Point;
    // Allocate memory for the second Point structure

    SecondPointPointer->XCoordinate = 7;
    // Store value 7 into XCoordinate

    SecondPointPointer->YCoordinate = 16;
    // Store value 16 into YCoordinate

    SecondPointPointer->NextAddress = NULL;
    // Initially set next pointer to NULL



    // ======================================================
    // CATEGORY: Linking Structures
    // Purpose : Connect first structure to second structure
    // ======================================================

    FirstPointPointer->NextAddress = SecondPointPointer;
    // First structure now points to the second structure
    // This creates a simple linked structure



    // ======================================================
    // CATEGORY: Display First Structure Information
    // Purpose : Show memory address and stored values
    // ======================================================

    cout << "P1 info : \n ----------------\n";

    cout << "P1 Address : " << FirstPointPointer << endl;
    // Display memory address of the first structure

    cout << "P1 x value : " << FirstPointPointer->XCoordinate << endl;
    // Display x value

    cout << "P1 y value : " << FirstPointPointer->YCoordinate << endl;
    // Display y value

    cout << "P1 nextaddress value : " << FirstPointPointer->NextAddress << endl << endl;
    // Display the address stored in the next pointer
    // This should match the address of P2



    // ======================================================
    // CATEGORY: Display Second Structure Information
    // Purpose : Show memory address and stored values
    // ======================================================

    cout << "P2 info : \n ----------------\n";

    cout << "P2 Address : " << SecondPointPointer << endl;
    // Display memory address of the second structure

    cout << "P2 x value : " << SecondPointPointer->XCoordinate << endl;
    // Display x value

    cout << "P2 y value : " << SecondPointPointer->YCoordinate << endl;
    // Display y value

    cout << "P2 nextaddress value : " << SecondPointPointer->NextAddress << endl << endl;
    // Display next pointer value (NULL)



    // ======================================================
    // CATEGORY: Memory Cleanup
    // Purpose : Free dynamically allocated memory
    // ======================================================

    delete FirstPointPointer;
    // Release memory used by first structure

    delete SecondPointPointer;
    // Release memory used by second structure



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
