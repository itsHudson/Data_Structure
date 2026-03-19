// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>
// Allows usage of cin and cout

using namespace std;
// Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store rectangle dimensions and areas
    // ======================================================

    double RectangleAWidth;
    double RectangleAHeight;
    // Store width and height for Rectangle A

    double RectangleBWidth;
    double RectangleBHeight;
    // Store width and height for Rectangle B

    double RectangleAArea;
    double RectangleBArea;
    // Store calculated areas of the rectangles



    // ======================================================
    // CATEGORY: User Input – Rectangle A
    // ======================================================

    cout << "Rectangle A:" << endl;

    cout << "Width = ";
    cin >> RectangleAWidth;
    // Read width of rectangle A

    cout << "Height = ";
    cin >> RectangleAHeight;
    // Read height of rectangle A



    cout << endl;



    // ======================================================
    // CATEGORY: User Input – Rectangle B
    // ======================================================

    cout << "Rectangle B:" << endl;

    cout << "Width = ";
    cin >> RectangleBWidth;
    // Read width of rectangle B

    cout << "Height = ";
    cin >> RectangleBHeight;
    // Read height of rectangle B



    cout << endl;



    // ======================================================
    // CATEGORY: Area Calculation
    // Purpose : Compute area of each rectangle
    // ======================================================

    RectangleAArea = RectangleAWidth * RectangleAHeight;
    // Area = width × height for rectangle A

    RectangleBArea = RectangleBWidth * RectangleBHeight;
    // Area = width × height for rectangle B



    // ======================================================
    // CATEGORY: Area Comparison
    // Purpose : Determine which rectangle has larger area
    // ======================================================

    if (RectangleAArea > RectangleBArea)
    {
        cout << "Area in rectangle A is bigger rectangle B." << endl;
        // Rectangle A has the larger area
    }
    else if (RectangleBArea > RectangleAArea)
    {
        cout << "Area in rectangle B is bigger rectangle A." << endl;
        // Rectangle B has the larger area
    }
    else
    {
        cout << "Both rectangles have the same area." << endl;
        // Areas are equal
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates program finished successfully
}
