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

void add1();             // Type 1: function without return value and without parameters
int add2(int, int);      // Type 2: function with return value and with parameters
void add3(int, int);     // Type 3: function without return value but with parameters
int add4();              // Type 4: function with return value but without parameters



// ==========================================================
// CATEGORY: Main Function
// Purpose : Entry point of the program where execution starts
// ==========================================================

int main() {

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store numbers that will be passed to functions
    // ======================================================

    int x, y;    // Variables to store two integers from the user


    cout << "Enter two integers for function with parameters: ";
    // Ask the user to input two numbers

    cin >> x >> y;
    // Store the numbers entered by the user into variables x and y

    cout << endl;
    // Print a blank line for better formatting



    // ======================================================
    // CATEGORY: Type 1 Function Call
    // Function without return and without parameters
    // ======================================================

    cout << "Type 1: Function without return and without parameters\n";
    // Display description of function type

    add1();
    // Call function add1()
    // This function will ask the user for numbers internally

    cout << endl;



    // ======================================================
    // CATEGORY: Type 2 Function Call
    // Function with return value and with parameters
    // ======================================================

    cout << "Type 2: Function with return and with parameters\n";

    int result2 = add2(x, y);
    // Call function add2 and pass x and y as parameters
    // The returned value (sum) is stored in result2

    cout << "Sum = " << result2 << endl;
    // Display the returned sum

    cout << endl;



    // ======================================================
    // CATEGORY: Type 3 Function Call
    // Function without return but with parameters
    // ======================================================

    cout << "Type 3: Function without return and with parameters\n";

    add3(x, y);
    // Pass x and y to function add3
    // Function itself prints the result

    cout << endl;



    // ======================================================
    // CATEGORY: Type 4 Function Call
    // Function with return but without parameters
    // ======================================================

    cout << "Type 4: Function with return and without parameters\n";

    int result4 = add4();
    // Call function add4()
    // The function will ask the user for numbers internally
    // The returned sum is stored in result4

    cout << "Sum = " << result4 << endl;
    // Display the returned result

    cout << endl;


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;     // Indicates the program ended successfully
}



// ==========================================================
// CATEGORY: Type 1 Function
// Function without return value AND without parameters
// ==========================================================

void add1() {

    int a, b, sum;
    // Variables to store two numbers and their sum

    cout << "Enter first number: ";
    cin >> a;
    // Read first number

    cout << "Enter second number: ";
    cin >> b;
    // Read second number

    sum = a + b;
    // Perform addition of the two numbers

    cout << "Sum = " << sum << endl;
    // Display the calculated sum
}



// ==========================================================
// CATEGORY: Type 2 Function
// Function WITH return value AND WITH parameters
// ==========================================================

int add2(int a, int b) {

    int sum = a + b;
    // Calculate sum of parameters a and b

    return sum;
    // Return the result back to main()
}



// ==========================================================
// CATEGORY: Type 3 Function
// Function WITHOUT return value BUT WITH parameters
// ==========================================================

void add3(int a, int b) {

    int sum = a + b;
    // Calculate sum of parameters a and b

    cout << "Sum = " << sum << endl;
    // Print the result directly inside the function
}



// ==========================================================
// CATEGORY: Type 4 Function
// Function WITH return value BUT WITHOUT parameters
// ==========================================================

int add4() {

    int a, b;
    // Variables to store numbers entered by the user

    cout << "Enter first number: ";
    cin >> a;
    // Read first number

    cout << "Enter second number: ";
    cin >> b;
    // Read second number

    return a + b;
    // Return the calculated sum to the main function
}
