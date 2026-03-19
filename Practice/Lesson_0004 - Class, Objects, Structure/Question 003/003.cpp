// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Class Definition
// Purpose : Define a class representing a cash register
// ==========================================================

class CashRegister
{
private:

    int CashOnHand;
    // Variable storing the current amount of cash in the register

public:

    CashRegister();
    // Constructor to initialize register with starting cash

    void AcceptAmount(int CustomerPaymentAmount);
    // Function to accept money from customer

    void PrintBalance();
    // Function to display the current balance
};



// ==========================================================
// CATEGORY: Constructor
// Purpose : Initialize register with 500 units of cash
// ==========================================================

CashRegister::CashRegister()
{
    CashOnHand = 500;
    // Set initial balance to 500 units
}



// ==========================================================
// CATEGORY: Member Function - Accept Amount
// Purpose : Add customer's payment to the register
// ==========================================================

void CashRegister::AcceptAmount(int CustomerPaymentAmount)
{
    CashOnHand = CashOnHand + CustomerPaymentAmount;
    // Increase the register balance by the customer's payment
}



// ==========================================================
// CATEGORY: Member Function - Print Balance
// Purpose : Display the current cash balance
// ==========================================================

void CashRegister::PrintBalance()
{
    cout << "Current Cash in Register: " << CashOnHand << endl;
    // Print the current balance stored in the register
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    CashRegister CandyMachineRegister;
    // Create a cash register object for the candy machine


    CandyMachineRegister.PrintBalance();
    // Display initial balance (500)


    CandyMachineRegister.AcceptAmount(50);
    // Customer inserts 50 units


    CandyMachineRegister.PrintBalance();
    // Display updated balance


    return 0;
}
