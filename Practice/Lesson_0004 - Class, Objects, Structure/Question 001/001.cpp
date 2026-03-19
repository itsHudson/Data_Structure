// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>          // Allows use of cout and cin

using namespace std;         // Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Class Definition
// Purpose : Define a class named "Line"
//           This class represents a line with a length
// ==========================================================

class Line
{
public:
    void setLength(double len);
    // Public member function to set the length of the line

    double getLength(void);
    // Public member function to return the current length

    Line();
    // Default constructor
    // Automatically runs when an object is created

    Line(double len);
    // Constructor with parameter
    // Allows creating an object with an initial length

    ~Line();
    // Destructor
    // Automatically runs when the object is destroyed

private:
    double length;
    // Private variable storing the length of the line
};



// ==========================================================
// CATEGORY: Constructor Definitions
// Purpose : Define how objects are initialized
// ==========================================================

Line::Line(void)
{
    cout << "Object is being created" << endl;
    // Display message when object is created

    length = 0;
    // Initialize length to 0 by default
}



Line::Line(double len)
{
    cout << "Object is being created, length = " << len << endl;
    // Display message showing the length passed into constructor

    length = len;
    // Store the provided length into the object
}



// ==========================================================
// CATEGORY: Destructor
// Purpose : Runs automatically when object is destroyed
// ==========================================================

Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
    // Display message when the object is removed from memory
}



// ==========================================================
// CATEGORY: Member Function - Set Length
// Purpose : Assign a new length value to the line
// ==========================================================

void Line::setLength(double len)
{
    length = len;
    // Store the new length value into the class variable
}



// ==========================================================
// CATEGORY: Member Function - Get Length
// Purpose : Return the stored length of the line
// ==========================================================

double Line::getLength(void)
{
    return length;
    // Send the current length value back to the caller
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    Line line;
    // Create an object named "line" from class Line
    // Default constructor runs automatically

    line.setLength(6.0);
    // Set the length of the line object to 6.0

    cout << "Length of line : " << line.getLength() << endl;
    // Call getLength() function to retrieve the length
    // Then display it on the screen

    return 0;
    // End the program successfully
}
