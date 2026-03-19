// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>
// Allows usage of cin (input) and cout (output)

using namespace std;
// Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Starting point of the program
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store exchange rate, conversion type, and amount
    // ======================================================

    double ExchangeRateDollarToRMB;
    // Store the exchange rate from U.S. Dollar to Chinese RMB

    int ConversionChoice;
    // Store user's conversion choice
    // 0 = Dollar → RMB
    // 1 = RMB → Dollar

    double InputAmount;
    // Store the amount entered by the user

    double ConvertedAmount;
    // Store the final converted result



    // ======================================================
    // CATEGORY: User Input - Exchange Rate
    // ======================================================

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> ExchangeRateDollarToRMB;
    // Read the exchange rate entered by the user



    // ======================================================
    // CATEGORY: User Input - Conversion Direction
    // ======================================================

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> ConversionChoice;
    // Read the conversion choice from the user



    // ======================================================
    // CATEGORY: Currency Conversion Logic
    // ======================================================

    if (ConversionChoice == 0)
    // If user selects conversion from Dollar → RMB
    {

        cout << "Enter the dollar amount: ";
        cin >> InputAmount;
        // Read the amount in dollars

        ConvertedAmount = InputAmount * ExchangeRateDollarToRMB;
        // Convert dollars to RMB

        cout << "$" << InputAmount << " is "
             << ConvertedAmount << " yuan" << endl;
        // Display the conversion result
    }
    else if (ConversionChoice == 1)
    // If user selects conversion from RMB → Dollar
    {

        cout << "Enter the RMB amount: ";
        cin >> InputAmount;
        // Read the amount in RMB

        ConvertedAmount = InputAmount / ExchangeRateDollarToRMB;
        // Convert RMB to dollars

        cout << InputAmount << " yuan is $"
             << ConvertedAmount << endl;
        // Display the conversion result
    }
    else
    {
        // If user enters a value other than 0 or 1

        cout << "Invalid input." << endl;
        // Display error message
    }



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates successful program execution
}
