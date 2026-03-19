// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Class Definition
// Purpose : Define a class named BankAccount
//           to manage account balance and interest
// ==========================================================

class BankAccount
{
private:

    double AccountBalance;
    // Store the account balance in dollars

    double InterestRate;
    // Store the interest rate as a decimal value

public:

    void SetBalance(int Dollars, int Cents);
    // Set the account balance using dollars and cents

    void UpdateBalance();
    // Add one year of simple interest to the balance

    double GetBalance();
    // Return the current account balance

    double GetInterestRate();
    // Return the current interest rate

    void SetInterestRate(int Rate);
    // Set the interest rate
};



// ==========================================================
// CATEGORY: Member Function - Set Balance
// Purpose : Convert dollars and cents into a single balance
// ==========================================================

void BankAccount::SetBalance(int Dollars, int Cents)
{
    AccountBalance = Dollars + (Cents / 100.0);
    // Convert cents into decimal value and add to dollars
}



// ==========================================================
// CATEGORY: Member Function - Update Balance
// Purpose : Apply one year of simple interest
// ==========================================================

void BankAccount::UpdateBalance()
{
    AccountBalance = AccountBalance + (AccountBalance * InterestRate);
    // Increase balance by interest amount
}



// ==========================================================
// CATEGORY: Member Function - Get Balance
// Purpose : Return the current account balance
// ==========================================================

double BankAccount::GetBalance()
{
    return AccountBalance;
    // Return balance value
}



// ==========================================================
// CATEGORY: Member Function - Get Interest Rate
// Purpose : Return the current interest rate
// ==========================================================

double BankAccount::GetInterestRate()
{
    return InterestRate;
    // Return interest rate value
}



// ==========================================================
// CATEGORY: Member Function - Set Interest Rate
// Purpose : Convert percentage rate to decimal
// ==========================================================

void BankAccount::SetInterestRate(int Rate)
{
    InterestRate = Rate / 100.0;
    // Convert percentage into decimal
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    BankAccount UserAccount;
    // Create a bank account object


    UserAccount.SetBalance(100, 50);
    // Set balance to $100.50


    UserAccount.SetInterestRate(5);
    // Set interest rate to 5%


    UserAccount.UpdateBalance();
    // Apply one year of simple interest


    cout << "Current Balance: $" << UserAccount.GetBalance() << endl;
    // Display updated balance

    cout << "Interest Rate: " << UserAccount.GetInterestRate() * 100 << "%" << endl;
    // Display interest rate in percentage form


    return 0;
}
