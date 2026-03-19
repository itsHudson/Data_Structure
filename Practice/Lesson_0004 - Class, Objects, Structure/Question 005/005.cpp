// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>      // Allows use of cout and cin

using namespace std;     // Allows use of standard objects without std::



// ==========================================================
// CATEGORY: Class Definition - Cash Register
// Purpose : Store and manage cash inside the machine
// ==========================================================

class CashRegister
{
private:
    int CashOnHand;
    // Variable to store the amount of cash in the register (in cents)

public:
    CashRegister();
    // Default constructor to set initial cash to 500 cents

    CashRegister(int InitialCashAmount);
    // Constructor with parameter to set specific cash amount

    int GetCurrentBalance();
    // Function to return the current balance in the register

    void AcceptAmount(int CustomerPaymentAmount);
    // Function to accept payment and add it into the register
};



// ==========================================================
// CATEGORY: Class Definition - Dispenser Type
// Purpose : Store item quantity and item cost
// ==========================================================

class DispenserType
{
private:
    int NumberOfItems;
    // Variable to store how many items are available

    int ItemCost;
    // Variable to store the cost of one item in cents

public:
    DispenserType();
    // Default constructor to set quantity and cost to 50

    DispenserType(int InitialNumberOfItems, int InitialItemCost);
    // Constructor with parameter to set quantity and cost

    int GetNoOfItems();
    // Function to return the number of items

    int GetCost();
    // Function to return the cost of one item

    void MakeSale();
    // Function to reduce item quantity by 1 after sale
};



// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Declare helper functions before main()
// ==========================================================

void ShowSelectionMenu();
// Display all juice choices to the customer

void SellProduct(DispenserType& SelectedDispenser, CashRegister& MachineCashRegister);
// Handle one product purchase process



// ==========================================================
// CATEGORY: Cash Register - Default Constructor
// Purpose : Set initial cash in register to 500 cents
// ==========================================================

CashRegister::CashRegister()
{
    CashOnHand = 500;
    // Set default cash amount to 500 cents
}



// ==========================================================
// CATEGORY: Cash Register - Parameter Constructor
// Purpose : Set initial cash in register to a specific amount
// ==========================================================

CashRegister::CashRegister(int InitialCashAmount)
{
    CashOnHand = InitialCashAmount;
    // Store the provided cash amount into the register
}



// ==========================================================
// CATEGORY: Cash Register - Get Current Balance
// Purpose : Return the current balance in the register
// ==========================================================

int CashRegister::GetCurrentBalance()
{
    return CashOnHand;
    // Send the current cash amount back to the caller
}



// ==========================================================
// CATEGORY: Cash Register - Accept Amount
// Purpose : Add customer payment into the register
// ==========================================================

void CashRegister::AcceptAmount(int CustomerPaymentAmount)
{
    CashOnHand = CashOnHand + CustomerPaymentAmount;
    // Increase the register balance by the payment amount
}



// ==========================================================
// CATEGORY: Dispenser Type - Default Constructor
// Purpose : Set default item quantity and cost to 50
// ==========================================================

DispenserType::DispenserType()
{
    NumberOfItems = 50;
    // Set default number of items to 50

    ItemCost = 50;
    // Set default item cost to 50 cents
}



// ==========================================================
// CATEGORY: Dispenser Type - Parameter Constructor
// Purpose : Set specific item quantity and cost
// ==========================================================

DispenserType::DispenserType(int InitialNumberOfItems, int InitialItemCost)
{
    NumberOfItems = InitialNumberOfItems;
    // Store provided quantity

    ItemCost = InitialItemCost;
    // Store provided cost
}



// ==========================================================
// CATEGORY: Dispenser Type - Get Number Of Items
// Purpose : Return quantity available in the dispenser
// ==========================================================

int DispenserType::GetNoOfItems()
{
    return NumberOfItems;
    // Return current number of items
}



// ==========================================================
// CATEGORY: Dispenser Type - Get Cost
// Purpose : Return the cost of one item
// ==========================================================

int DispenserType::GetCost()
{
    return ItemCost;
    // Return the cost of one product
}



// ==========================================================
// CATEGORY: Dispenser Type - Make Sale
// Purpose : Reduce item quantity by 1 after a sale
// ==========================================================

void DispenserType::MakeSale()
{
    if (NumberOfItems > 0)
    {
        NumberOfItems--;
        // Reduce item quantity by 1 only if stock is available
    }
}



// ==========================================================
// CATEGORY: Show Menu Function
// Purpose : Display all available juice products
// ==========================================================

void ShowSelectionMenu()
{
    cout << endl;
    cout << "==============================================" << endl;
    cout << "            FRUIT JUICE MACHINE               " << endl;
    cout << "==============================================" << endl;
    cout << "1. Apple Juice" << endl;
    cout << "2. Orange Juice" << endl;
    cout << "3. Mango Lassi" << endl;
    cout << "4. Fruit Punch" << endl;
    cout << "5. Exit" << endl;
    cout << "==============================================" << endl;
    // Display all menu options
}



// ==========================================================
// CATEGORY: Sell Product Function
// Purpose : Process customer purchase for one selected item
// ==========================================================

void SellProduct(DispenserType& SelectedDispenser, CashRegister& MachineCashRegister)
{
    if (SelectedDispenser.GetNoOfItems() <= 0)
    {
        cout << "This product is sold out." << endl;
        // Inform customer if stock is empty

        return;
        // Stop this purchase process
    }

    int ProductCost = SelectedDispenser.GetCost();
    // Store the selected product cost

    int CustomerPaymentAmount;
    // Variable to store money inserted by customer

    cout << "Number of items available: " << SelectedDispenser.GetNoOfItems() << endl;
    // Show stock quantity

    cout << "Cost of this item: " << ProductCost << " cents" << endl;
    // Show product price

    cout << "Please enter your payment in cents: ";
    cin >> CustomerPaymentAmount;
    // Read customer payment

    while (CustomerPaymentAmount < ProductCost)
    {
        cout << "Insufficient amount. Please enter at least "
             << ProductCost << " cents: ";
        cin >> CustomerPaymentAmount;
        // Keep asking until enough money is inserted
    }

    MachineCashRegister.AcceptAmount(ProductCost);
    // Add only the product cost into the cash register

    SelectedDispenser.MakeSale();
    // Reduce stock by 1

    int ChangeAmount = CustomerPaymentAmount - ProductCost;
    // Calculate change to return to customer

    cout << "Item released. Please collect your drink." << endl;
    // Inform customer that item is dispensed

    if (ChangeAmount > 0)
    {
        cout << "Please collect your change: " << ChangeAmount << " cents" << endl;
        // Return change if customer paid more than the cost
    }
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    CashRegister MachineCashRegister;
    // Create built-in cash register with default 500 cents

    DispenserType AppleJuiceDispenser(10, 150);
    // 10 items, 150 cents each

    DispenserType OrangeJuiceDispenser(8, 180);
    // 8 items, 180 cents each

    DispenserType MangoLassiDispenser(6, 250);
    // 6 items, 250 cents each

    DispenserType FruitPunchDispenser(12, 200);
    // 12 items, 200 cents each


    int CustomerChoice;
    // Variable to store customer menu selection


    do
    {
        ShowSelectionMenu();
        // Display product menu

        cout << "Enter your choice: ";
        cin >> CustomerChoice;
        // Read menu choice

        switch (CustomerChoice)
        {
            case 1:
                cout << endl << "You selected Apple Juice." << endl;
                SellProduct(AppleJuiceDispenser, MachineCashRegister);
                break;

            case 2:
                cout << endl << "You selected Orange Juice." << endl;
                SellProduct(OrangeJuiceDispenser, MachineCashRegister);
                break;

            case 3:
                cout << endl << "You selected Mango Lassi." << endl;
                SellProduct(MangoLassiDispenser, MachineCashRegister);
                break;

            case 4:
                cout << endl << "You selected Fruit Punch." << endl;
                SellProduct(FruitPunchDispenser, MachineCashRegister);
                break;

            case 5:
                cout << "Thank you for using the fruit juice machine." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                // Handle invalid menu selection
        }

    } while (CustomerChoice != 5);
    // Repeat until customer chooses Exit


    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End program successfully
    // ======================================================

    return 0;
}
