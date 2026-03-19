// ==========================================================
// CATEGORY: Header Files
// Purpose : Include required library for input and output
// ==========================================================

#include <iostream>     // Allows usage of cout (output) and cin (input)

using namespace std;    // Allows us to write cout instead of std::cout


// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Inform the compiler that these functions exist
//           and will be defined later in the program
// ==========================================================

void Add1();                         // Type 1: function without return value and without parameters
int Add2(int FirstNumber, int SecondNumber);     
// Type 2: function with return value and with parameters

void Add3(int FirstNumber, int SecondNumber);    
// Type 3: function without return value but with parameters

int Add4();                          
// Type 4: function with return value but without parameters



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program where execution starts
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store numbers that will be passed to functions
    // ======================================================

    int FirstInputNumber, SecondInputNumber;    
    // Variables to store two integers from the user


    cout << "Enter two integers for function with parameters: ";
    // Ask the user to input two numbers

    cin >> FirstInputNumber >> SecondInputNumber;
    // Store the numbers entered by the user into variables
    // FirstInputNumber and SecondInputNumber

    cout << endl;
    // Print a blank line for better formatting



    // ======================================================
    // CATEGORY: Type 1 Function Call
    // Function without return and without parameters
    // ======================================================

    cout << "Type 1: Function without return and without parameters\n";
    // Display description of function type

    Add1();
    // Call function Add1()
    // This function will ask the user for numbers internally

    cout << endl;



    // ======================================================
    // CATEGORY: Type 2 Function Call
    // Function with return value and with parameters
    // ======================================================

    cout << "Type 2: Function with return and with parameters\n";

    int ResultType2 = Add2(FirstInputNumber, SecondInputNumber);
    // Call function Add2 and pass FirstInputNumber and SecondInputNumber as parameters
    // The returned value (sum) is stored in ResultType2

    cout << "Sum = " << ResultType2 << endl;
    // Display the returned sum

    cout << endl;



    // ======================================================
    // CATEGORY: Type 3 Function Call
    // Function without return but with parameters
    // ======================================================

    cout << "Type 3: Function without return and with parameters\n";

    Add3(FirstInputNumber, SecondInputNumber);
    // Pass FirstInputNumber and SecondInputNumber to function Add3
    // Function itself prints the result

    cout << endl;



    // ======================================================
    // CATEGORY: Type 4 Function Call
    // Function with return but without parameters
    // ======================================================

    cout << "Type 4: Function with return and without parameters\n";

    int ResultType4 = Add4();
    // Call function Add4()
    // The function will ask the user for numbers internally
    // The returned sum is stored in ResultType4

    cout << "Sum = " << ResultType4 << endl;
    // Display the returned result

    cout << endl;


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;     
    // Indicates the program ended successfully
}



// ==========================================================
// CATEGORY: Type 1 Function
// Function without return value AND without parameters
// ==========================================================

void Add1() {

    int FirstNumber, SecondNumber, SumResult;
    // Variables to store two numbers and their sum

    cout << "Enter first number: ";
    cin >> FirstNumber;
    // Read first number

    cout << "Enter second number: ";
    cin >> SecondNumber;
    // Read second number

    SumResult = FirstNumber + SecondNumber;
    // Perform addition of the two numbers

    cout << "Sum = " << SumResult << endl;
    // Display the calculated sum
}



// ==========================================================
// CATEGORY: Type 2 Function
// Function WITH return value AND WITH parameters
// ==========================================================

int Add2(int FirstNumber, int SecondNumber) {

    int SumResult = FirstNumber + SecondNumber;
    // Calculate sum of parameters FirstNumber and SecondNumber

    return SumResult;
    // Return the result back to main()
}



// ==========================================================
// CATEGORY: Type 3 Function
// Function WITHOUT return value BUT WITH parameters
// ==========================================================

void Add3(int FirstNumber, int SecondNumber) {

    int SumResult = FirstNumber + SecondNumber;
    // Calculate sum of parameters FirstNumber and SecondNumber

    cout << "Sum = " << SumResult << endl;
    // Print the result directly inside the function
}



// ==========================================================
// CATEGORY: Type 4 Function
// Function WITH return value BUT WITHOUT parameters
// ==========================================================

int Add4() {

    int FirstNumber, SecondNumber;
    // Variables to store numbers entered by the user

    cout << "Enter first number: ";
    cin >> FirstNumber;
    // Read first number

    cout << "Enter second number: ";
    cin >> SecondNumber;
    // Read second number

    return FirstNumber + SecondNumber;
    // Return the calculated sum to the main function
}
