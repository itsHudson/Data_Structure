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
    // Purpose : Store student scores and calculated results
    // ======================================================

    double QuizScore;
    // Store quiz score entered by the user

    double MidTermScore;
    // Store mid-term score

    double FinalScore;
    // Store final exam score

    double AverageScore;
    // Store calculated average score

    char GradeLetter;
    // Store the final grade (A, B, C, or F)



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Read the three scores from the user
    // ======================================================

    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> QuizScore >> MidTermScore >> FinalScore;
    // Read three score values from the user



    // ======================================================
    // CATEGORY: Average Calculation
    // ======================================================

    AverageScore = (QuizScore + MidTermScore + FinalScore) / 3;
    // Calculate the average score of the three assessments



    // ======================================================
    // CATEGORY: Grade Determination
    // Purpose : Assign grade based on average score
    // ======================================================

    if (AverageScore >= 90)
    {
        GradeLetter = 'A';
        // Grade A for average score 90 or above
    }
    else if (AverageScore >= 70)
    {
        GradeLetter = 'B';
        // Grade B for average score between 70 and 89
    }
    else if (AverageScore >= 50)
    {
        GradeLetter = 'C';
        // Grade C for average score between 50 and 69
    }
    else
    {
        GradeLetter = 'F';
        // Grade F for average score below 50
    }



    // ======================================================
    // CATEGORY: Display Result
    // ======================================================

    cout << "Grade " << GradeLetter << endl;
    // Display the final grade



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
    // Indicates program finished successfully
}
