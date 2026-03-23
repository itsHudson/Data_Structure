// ==========================================================
// CATEGORY: Header Library
// Purpose : Enable input/output operations
// ==========================================================

#include<iostream>
// Provides cout for output display

using namespace std;
// Avoid writing std:: before cout



// ==========================================================
// CATEGORY: Class Definition - Flower
// Purpose : Represent a flower object with attributes
// ==========================================================

class Flower
{

// ==========================================================
// CATEGORY: Private Data Members (Encapsulation)
// Purpose : Store flower details securely
// ==========================================================

private:
    int FlowerId;
    // Store flower ID

    string FlowerName;
    // Store flower name

    string FlowerColor;
    // Store flower color



// ==========================================================
// CATEGORY: Public Members
// ==========================================================

public:

    // ======================================================
    // CATEGORY: Default Constructor
    // Purpose : Initialize object with default values
    // ======================================================

    Flower()
    {
        FlowerId = 1;
        // Default ID

        FlowerName = "Rose";
        // Default flower name

        FlowerColor = "Red";
        // Default color
    }



    // ======================================================
    // CATEGORY: Parameterized Constructor
    // Purpose : Initialize object with user-defined values
    // ======================================================

    Flower(int FlowerId, string FlowerName, string FlowerColor)
    {
        this->FlowerId = FlowerId;
        // 'this->' refers to the current object

        this->FlowerName = FlowerName;
        // Assign input name to object variable

        this->FlowerColor = FlowerColor;
        // Assign input color
    }



    // ======================================================
    // CATEGORY: Member Function
    // Purpose : Display flower details
    // ======================================================

    void printFlower()
    {
        cout << "Flower ID: " << FlowerId << endl;
        // Display flower ID

        cout << "Flower Name: " << FlowerName << endl;
        // Display flower name

        cout << "Flower Color: " << FlowerColor << endl;
        // Display flower color
    }



    // ======================================================
    // CATEGORY: Destructor
    // Purpose : Execute automatically when object is destroyed
    // ======================================================

    ~Flower()
    {
        cout << "Deleted: Flower - " << FlowerName << endl;
        // Display message when object is deleted
    }
};



// ==========================================================
// CATEGORY: Main Function
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Static Object (Default Constructor)
    // Purpose : Object created in stack memory
    // ======================================================

    Flower flower1;
    // Automatically calls default constructor

    flower1.printFlower();
    // Display flower1 details

    cout << endl;



    // ======================================================
    // CATEGORY: Static Object (Parameterized Constructor)
    // ======================================================

    Flower flower2(2, "Sunflower", "Yellow");
    // Calls parameterized constructor

    flower2.printFlower();
    // Display flower2 details

    cout << endl;



    // ======================================================
    // CATEGORY: Dynamic Object (Default Constructor)
    // Purpose : Object created in heap memory using new
    // ======================================================

    Flower* flower3 = new Flower;
    // Allocate memory dynamically

    flower3->printFlower();
    // Access object using pointer (-> operator)

    cout << endl;



    // ======================================================
    // CATEGORY: Dynamic Object (Parameterized Constructor)
    // ======================================================

    Flower* flower4 = new Flower(3, "Lily", "White");
    // Allocate memory and initialize values

    flower4->printFlower();
    // Access using pointer

    cout << endl;



    // ======================================================
    // CATEGORY: Program Termination
    // IMPORTANT NOTE (VERY HIGH MARKS ⚠️)
    // ======================================================

    // ❗ Missing delete → memory leak occurs
    // Destructor will NOT be called for dynamic objects

    // Correct version should be:
    // delete flower3;
    // delete flower4;

    return 0;
}
