// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Inform compiler that these functions exist later
// ==========================================================

double GetRectangleLength();
// Function that asks the user to enter rectangle length

double GetRectangleWidth();
// Function that asks the user to enter rectangle width

double CalculateRectangleArea(double LengthValue, double WidthValue);
// Function that calculates rectangle area

void DisplayRectangleData(double* LengthPointer,
                          double* WidthPointer,
                          double* AreaPointer);
// Function that prints rectangle information using pointers



// ==========================================================
// CATEGORY: Function - Get Length
// Purpose : Ask user to enter rectangle length
// ==========================================================

double GetRectangleLength()
{
    double LengthValue;

    cout << "Enter rectangle length: ";

    cin >> LengthValue;
    // Store user input into LengthValue

    return LengthValue;
    // Return the value back to main()
}



// ==========================================================
// CATEGORY: Function - Get Width
// Purpose : Ask user to enter rectangle width
// ==========================================================

double GetRectangleWidth()
{
    double WidthValue;

    cout << "Enter rectangle width: ";

    cin >> WidthValue;
    // Store user input into WidthValue

    return WidthValue;
    // Return width value back to main()
}



// ==========================================================
// CATEGORY: Function - Calculate Area
// Purpose : Compute rectangle area using formula
// ==========================================================

double CalculateRectangleArea(double LengthValue, double WidthValue)
{
    double AreaValue = LengthValue * WidthValue;
    // Formula: Area = Length × Width

    return AreaValue;
    // Return calculated area
}



// ==========================================================
// CATEGORY: Function - Display Data
// Purpose : Display rectangle information using pointers
// ==========================================================

void DisplayRectangleData(double* LengthPointer,
                          double* WidthPointer,
                          double* AreaPointer)
{

    cout << "\nRectangle Data:\n";

    cout << "Length = "
         << *LengthPointer
         << endl;
    // Dereference pointer to read actual length value

    cout << "Width = "
         << *WidthPointer
         << endl;
    // Dereference pointer to read actual width value

    cout << "Area = "
         << *AreaPointer
         << endl;
    // Dereference pointer to read calculated area
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store rectangle dimensions and area
    // ======================================================

    double RectangleLength;
    double RectangleWidth;
    double RectangleArea;



    // ======================================================
    // CATEGORY: User Input
    // ======================================================

    RectangleLength = GetRectangleLength();
    // Ask user for rectangle length

    RectangleWidth = GetRectangleWidth();
    // Ask user for rectangle width



    // ======================================================
    // CATEGORY: Area Calculation
    // ======================================================

    RectangleArea = CalculateRectangleArea(RectangleLength,
                                           RectangleWidth);
    // Compute rectangle area



    // ======================================================
    // CATEGORY: Display Results
    // ======================================================

    DisplayRectangleData(&RectangleLength,
                         &RectangleWidth,
                         &RectangleArea);
    // Pass addresses of variables to display function



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
