// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output operations
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Function - Calculate Average
// Purpose : Calculate and return the average score
// ==========================================================

double CalculateAverage(int* ScoreArrayPointer, int ArraySize)
{
    int TotalScore = 0;
    // Variable used to store the sum of all scores

    for (int CurrentIndex = 0; CurrentIndex < ArraySize; CurrentIndex++)
    {
        TotalScore = TotalScore + *(ScoreArrayPointer + CurrentIndex);
        // Use pointer arithmetic to access each score
        // Add current score into TotalScore
    }

    return (double)TotalScore / ArraySize;
    // Convert TotalScore to double before division
    // Return the average value
}



// ==========================================================
// CATEGORY: Function - Find Lowest Score
// Purpose : Find and return the smallest score
// ==========================================================

int FindLowestScore(int* ScoreArrayPointer, int ArraySize)
{
    int LowestScore = *ScoreArrayPointer;
    // Assume the first score is the lowest at the beginning

    for (int CurrentIndex = 1; CurrentIndex < ArraySize; CurrentIndex++)
    {
        if (*(ScoreArrayPointer + CurrentIndex) < LowestScore)
        {
            LowestScore = *(ScoreArrayPointer + CurrentIndex);
            // Update LowestScore if a smaller value is found
        }
    }

    return LowestScore;
    // Return the smallest score found
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Variable Declaration
    // Purpose : Store array size entered by the user
    // ======================================================

    int NumberOfSubjects;
    // Variable used to store total number of subjects



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask user to enter number of subjects
    // ======================================================

    cout << "Enter total number of subjects: ";

    cin >> NumberOfSubjects;
    // Read total number of subjects from user



    // ======================================================
    // CATEGORY: Dynamic Memory Allocation
    // Purpose : Create dynamic array for storing scores
    // ======================================================

    int* ScoreArrayPointer = new int[NumberOfSubjects];
    // Allocate memory in heap for NumberOfSubjects integers



    // ======================================================
    // CATEGORY: Input Scores
    // Purpose : Read test scores into the dynamic array
    // ======================================================

    cout << "Enter test scores:\n";

    for (int CurrentIndex = 0; CurrentIndex < NumberOfSubjects; CurrentIndex++)
    {
        cin >> *(ScoreArrayPointer + CurrentIndex);
        // Store each score into the dynamic array using pointer arithmetic

        while (*(ScoreArrayPointer + CurrentIndex) < 0)
        {
            cout << "Negative number not allowed, enter again: ";

            cin >> *(ScoreArrayPointer + CurrentIndex);
            // Keep asking until the entered score is valid
        }
    }



    // ======================================================
    // CATEGORY: Function Calls
    // Purpose : Calculate average score and lowest score
    // ======================================================

    double AverageScore = CalculateAverage(ScoreArrayPointer, NumberOfSubjects);
    // Call function to calculate average score

    int LowestScore = FindLowestScore(ScoreArrayPointer, NumberOfSubjects);
    // Call function to find the lowest score



    // ======================================================
    // CATEGORY: Display Results
    // Purpose : Print average and lowest score
    // ======================================================

    cout << "\nAverage score = " << AverageScore << endl;
    // Display calculated average score

    cout << "Lowest score = " << LowestScore << endl;
    // Display the lowest score



    // ======================================================
    // CATEGORY: Free Allocated Memory
    // Purpose : Prevent memory leak
    // ======================================================

    delete[] ScoreArrayPointer;
    // Release memory allocated by new[]



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
