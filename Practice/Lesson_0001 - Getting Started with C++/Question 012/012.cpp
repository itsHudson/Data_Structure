// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>
// Allows usage of cin and cout

using namespace std;
// Allows writing cout instead of std::cout



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store meal cost, tax, tip and final totals
    // ======================================================

    double MealCostBeforeTax;
    // Store the original meal cost entered by the user

    double TipPercentage;
    // Store the tip percentage entered by the user

    const double GstRate = 0.06;
    // GST is fixed at 6%

    double GstAmount;
    // Store calculated GST amount

    double MealCostAfterGst;
    // Store meal cost after GST is added

    double TipAmount;
    // Store calculated tip amount

    double FinalMealCost;
    // Store total cost after GST and tip



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask the user to enter meal cost and tip rate
    // ======================================================

    cout << "Enter the cost of the meal before GST and tip: ";
    cin >> MealCostBeforeTax;
    // Read the base meal cost

    cout << "Enter tip percentage: ";
    cin >> TipPercentage;
    // Example: user enters 10 for 10% tip



    // ======================================================
    // CATEGORY: GST Calculation
    // Purpose : Calculate GST amount and cost after GST
    // ======================================================

    GstAmount = MealCostBeforeTax * GstRate;
    // GST = meal cost × 6%

    MealCostAfterGst = MealCostBeforeTax + GstAmount;
    // Cost after GST is added



    // ======================================================
    // CATEGORY: Tip Calculation
    // Purpose : Calculate tip based on percentage
    // ======================================================

    TipAmount = MealCostAfterGst * (TipPercentage / 100);
    // Tip is calculated from the cost after GST



    // ======================================================
    // CATEGORY: Final Total Calculation
    // ======================================================

    FinalMealCost = MealCostAfterGst + TipAmount;
    // Final total = cost after GST + tip



    // ======================================================
    // CATEGORY: Display Results
    // ======================================================

    cout << "\nThe total cost of the meal BEFORE GST and tipping: "
         << MealCostBeforeTax << endl;
    // Display original meal cost

    cout << "The total cost of the meal AFTER GST: "
         << MealCostAfterGst << endl;
    // Display meal cost after GST

    cout << "The total cost of the meal AFTER GST and tipping: "
         << FinalMealCost << endl;
    // Display final cost including tip



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates program finished successfully
}
