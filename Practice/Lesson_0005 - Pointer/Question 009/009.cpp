// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries for input/output and
//           character conversion
// ==========================================================

#include <iostream>   // Allows use of cout and cin
#include <cctype>     // Allows use of toupper()

using namespace std;



// ==========================================================
// CATEGORY: Function - Show Result
// Purpose : Display total correct answers and pass/fail result
// ==========================================================

void ShowResult(int CorrectAnswerCount)
{
    cout << "\nTotal correct answers = "
         << CorrectAnswerCount
         << endl;
    // Display total number of correct answers

    if (CorrectAnswerCount >= 15)
    {
        cout << "Result: PASSED" << endl;
        // Display PASSED if student gets 15 or more correct answers
    }
    else
    {
        cout << "Result: FAILED" << endl;
        // Display FAILED if student gets fewer than 15 correct answers
    }
}



/* -------------------------------------------------------------- */

// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{

    // ======================================================
    // CATEGORY: Correct Answers Storage
    // Purpose : Store answer key for 20 questions
    // ======================================================

    char CorrectAnswers[20] =
    {
        'B','D','A','A','C',
        'A','B','A','C','D',
        'B','C','D','A','D',
        'C','C','B','D','A'
    };
    // Array storing the correct answers for all 20 questions



    // ======================================================
    // CATEGORY: Student Answers Storage
    // Purpose : Store answers entered by the student
    // ======================================================

    char StudentAnswers[20];
    // Array used to store the student's answers

    int CorrectAnswerCount = 0;
    // Counter used to track total number of correct answers



    // ======================================================
    // CATEGORY: User Input
    // Purpose : Ask student to enter answers for all questions
    // ======================================================

    cout << "Enter answers for 20 questions (A/B/C/D):\n";

    for (int QuestionIndex = 0; QuestionIndex < 20; QuestionIndex++)
    {
        cout << "Question " << QuestionIndex + 1 << ": ";
        // Display question number

        cin >> StudentAnswers[QuestionIndex];
        // Read student's answer for the current question

        StudentAnswers[QuestionIndex] =
            toupper(StudentAnswers[QuestionIndex]);
        // Convert input to uppercase
        // Example: a becomes A



        // ==================================================
        // CATEGORY: Input Validation
        // Purpose : Ensure only A, B, C, or D is accepted
        // ==================================================

        while (StudentAnswers[QuestionIndex] != 'A' &&
               StudentAnswers[QuestionIndex] != 'B' &&
               StudentAnswers[QuestionIndex] != 'C' &&
               StudentAnswers[QuestionIndex] != 'D')
        {
            cout << "Invalid input. Only A, B, C, or D allowed. Enter again: ";
            // Display validation message

            cin >> StudentAnswers[QuestionIndex];
            // Read answer again

            StudentAnswers[QuestionIndex] =
                toupper(StudentAnswers[QuestionIndex]);
            // Convert input again to uppercase
        }



        // ==================================================
        // CATEGORY: Answer Checking
        // Purpose : Compare student answer with correct answer
        // ==================================================

        if (StudentAnswers[QuestionIndex] ==
            CorrectAnswers[QuestionIndex])
        {
            CorrectAnswerCount++;
            // Increase counter if the answer is correct
        }
    }



    // ======================================================
    // CATEGORY: Display Result
    // Purpose : Show final pass/fail result
    // ======================================================

    ShowResult(CorrectAnswerCount);
    // Call function to display score and pass/fail status



    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}
