// ==========================================================
// CATEGORY: Header Libraries
// Purpose : Enable input/output operations and string usage
// ==========================================================

#include<iostream>
// Provides cout, cin, endl for input and output

#include<string>
// Allows usage of string data type

using namespace std;
// Avoid writing std:: before cout, cin, string



// ==========================================================
// CATEGORY: Class Definition - Flower
// Purpose : Represent a flower object with data and functions
// ==========================================================

class Flower
{

// ==========================================================
// CATEGORY: Private Data Members
// Purpose : Store flower details securely inside the class
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
// Purpose : Allow controlled access to object data
// ==========================================================

public:

    // ======================================================
    // CATEGORY: Default Constructor
    // Purpose : Initialize object with default values
    // ======================================================

    Flower()
    {
        FlowerId = 1;
        // Assign default flower ID

        FlowerName = "Rose";
        // Assign default flower name

        FlowerColor = "Red";
        // Assign default flower color
    }



    // ======================================================
    // CATEGORY: Parameterized Constructor
    // Purpose : Initialize object with custom values
    // ======================================================

    Flower(int FlowerId, string FlowerName, string FlowerColor)
    {
        this->FlowerId = FlowerId;
        // Assign parameter FlowerId to object FlowerId

        this->FlowerName = FlowerName;
        // Assign parameter FlowerName to object FlowerName

        this->FlowerColor = FlowerColor;
        // Assign parameter FlowerColor to object FlowerColor
    }



    // ======================================================
    // CATEGORY: Setter Function
    // Purpose : Update flower information after object creation
    // ======================================================

    void setFlowerInfo(int FlowerId, string FlowerName, string FlowerColor)
    {
        this->FlowerId = FlowerId;
        // Update flower ID

        this->FlowerName = FlowerName;
        // Update flower name

        this->FlowerColor = FlowerColor;
        // Update flower color
    }



    // ======================================================
    // CATEGORY: Display Function
    // Purpose : Print flower details to the screen
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
// Purpose : Entry point of the program
// ==========================================================

int main()
{
    // ======================================================
    // CATEGORY: Input Variables
    // Purpose : Temporarily store user input
    // ======================================================

    string FlowerName;
    // Store flower name entered by user

    string FlowerColor;
    // Store flower color entered by user



    // ======================================================
    // CATEGORY: Static Array of Objects
    // Purpose : Create a fixed-size array of Flower objects
    // ======================================================

    cout << "Static Array: " << endl << string(30, '=') << endl;
    // Display title and separator line for static array section

    Flower flower1[2];
    // Create static array with 2 Flower objects
    // Default constructor is called for each object in the array

    for (int i = 0; i < 2; i++)
    {
        // Loop through each object in the static array

        cout << "Enter Flower Name: ";
        // Ask user to enter flower name

        getline(cin, FlowerName);
        // Read flower name including spaces

        cout << "Enter Flower Color: ";
        // Ask user to enter flower color

        getline(cin, FlowerColor);
        // Read flower color including spaces

        flower1[i].setFlowerInfo(i, FlowerName, FlowerColor);
        // Update current Flower object using setter function
        // i is used as Flower ID
    }

    cout << endl;
    // Print empty line for cleaner output

    for (int i = 0; i < 2; i++)
    {
        // Loop through the static array again

        flower1[i].printFlower();
        // Display details of each Flower object
    }

    cout << endl << endl;
    // Add spacing before next section



    // ======================================================
    // CATEGORY: Dynamic Array of Objects
    // Purpose : Create array of Flower objects using heap memory
    // ======================================================

    int count = 2;
    // Store number of Flower objects to create dynamically

    cout << "Dynamic Array: " << endl << string(30, '=') << endl;
    // Display title and separator line for dynamic array section

    Flower * flower2 = new Flower[count];
    // Create dynamic array of Flower objects
    // Default constructor is called for each object in heap memory

    for (int i = 0; i < count; i++)
    {
        // Loop through each object in dynamic array

        cout << "Enter Flower Name: ";
        // Ask user to enter flower name

        getline(cin, FlowerName);
        // Read flower name

        cout << "Enter Flower Color: ";
        // Ask user to enter flower color

        getline(cin, FlowerColor);
        // Read flower color

        flower2[i].setFlowerInfo(i, FlowerName, FlowerColor);
        // Update current dynamic Flower object using setter
    }

    cout << endl;
    // Print empty line

    for (int i = 0; i < count; i++)
    {
        // Loop through dynamic array again

        flower2[i].printFlower();
        // Display details of each Flower object
    }

    cout << endl << endl;
    // Print spacing before program ends



    // ======================================================
    // CATEGORY: Memory Management
    // Purpose : Release dynamically allocated memory
    // ======================================================

    delete[] flower2;
    // Free dynamic array memory properly
    // Destructor will be called for each object in flower2



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // End program successfully
}
