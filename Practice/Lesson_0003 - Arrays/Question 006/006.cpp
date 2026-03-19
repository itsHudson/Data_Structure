// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input/output,
//           formatting, and string handling
// ==========================================================

#include <iostream>      // Allows use of cout and cin for output and input
#include <iomanip>       // Allows use of formatting tools such as setw() and setprecision()

using namespace std;     // Allows us to use cout, endl, setw directly without std::


// ==========================================================
// CATEGORY: Function - Convert Quiz Score
// Purpose : Convert raw quiz marks from 100 into weighted
//           marks out of 20
// ==========================================================

void ChangeQuizScoreToPercentage(double marks[][3], int numberOfStudents) {
    // marks[row][0] stores quiz marks
    // marks[row][1] stores mid-term marks
    // marks[row][2] stores final exam marks

    for (int i = 0; i < numberOfStudents; i++) {
        // Loop through each student one by one

        marks[i][0] = (marks[i][0] / 100.0) * 20.0;
        // Convert quiz score from 100 to weighted marks out of 20
        // Example: 70 becomes (70/100) × 20 = 14
    }
}


// ==========================================================
// CATEGORY: Function - Convert Mid-Term Score
// Purpose : Convert raw mid-term marks from 100 into
//           weighted marks out of 50
// ==========================================================

void ChangeMidTermScoreToPercentage(double marks[][3], int numberOfStudents) {
    for (int i = 0; i < numberOfStudents; i++) {
        // Loop through each student

        marks[i][1] = (marks[i][1] / 100.0) * 50.0;
        // Convert mid-term score from 100 to weighted marks out of 50
    }
}


// ==========================================================
// CATEGORY: Function - Convert Final Exam Score
// Purpose : Convert raw final exam marks from 100 into
//           weighted marks out of 30
// ==========================================================

void ChangeFinalScoreToPercentage(double marks[][3], int numberOfStudents) {
    for (int i = 0; i < numberOfStudents; i++) {
        // Loop through each student

        marks[i][2] = (marks[i][2] / 100.0) * 30.0;
        // Convert final exam score from 100 to weighted marks out of 30
    }
}


// ==========================================================
// CATEGORY: Function - Check Grade
// Purpose : Return a grade letter based on total score
// ==========================================================

char Check_Grade(double totalScore) {
    // Grade rules:
    // 90 and above = A
    // 70 to below 90 = B
    // 50 to below 70 = C
    // Below 50 = F

    if (totalScore >= 90.0) {
        // If total score is 90 or above
        return 'A';
        // Return grade A
    } 
    else if (totalScore >= 70.0) {
        // If total score is between 70 and 89.99
        return 'B';
        // Return grade B
    } 
    else if (totalScore >= 50.0) {
        // If total score is between 50 and 69.99
        return 'C';
        // Return grade C
    } 
    else {
        // If total score is below 50
        return 'F';
        // Return grade F
    }
}


// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main() {

    const int STUDENTS = 5;
    // Constant value representing total number of students


    // ======================================================
    // CATEGORY: Student Basic Information
    // Purpose : Store names and TP numbers
    // ======================================================

    string names[STUDENTS] = {
        "Tan Chi Yong",
        "Lim Jie Jing",
        "Jason Leong",
        "Monday Johnny",
        "Holiday James"
    };
    // Array storing the names of 5 students

    string tps[STUDENTS] = {
        "TP001234",
        "TP001235",
        "TP001236",
        "TP001237",
        "TP001238"
    };
    // Array storing the TP numbers of 5 students


    // ======================================================
    // CATEGORY: Raw Marks Storage
    // Purpose : Store quiz, mid-term, and final exam scores
    // ======================================================

    double marks[STUDENTS][3] = {
        {70, 88, 45},   // Student 1 raw scores
        {88, 66, 70},   // Student 2 raw scores
        {45, 55, 66},   // Student 3 raw scores
        {22, 66, 34},   // Student 4 raw scores
        {55, 88, 94}    // Student 5 raw scores
    };
    // 2D array:
    // Column 0 = Quiz
    // Column 1 = Mid-term
    // Column 2 = Final exam


    // ======================================================
    // CATEGORY: Marks Conversion
    // Purpose : Convert raw marks into weighted marks
    // ======================================================

    ChangeQuizScoreToPercentage(marks, STUDENTS);
    // Convert quiz marks from 100 to 20%

    ChangeMidTermScoreToPercentage(marks, STUDENTS);
    // Convert mid-term marks from 100 to 50%

    ChangeFinalScoreToPercentage(marks, STUDENTS);
    // Convert final exam marks from 100 to 30%


    // ======================================================
    // CATEGORY: Total Score and Grade Storage
    // Purpose : Prepare arrays and summary variables
    // ======================================================

    double total[STUDENTS];
    // Array to store each student's total marks out of 100

    char grade[STUDENTS];
    // Array to store each student's grade letter

    int indexHighest = 0;
    // Assume first student has highest score at first

    int indexLowest  = 0;
    // Assume first student has lowest score at first

    int countA = 0;
    // Counter for number of students who get grade A

    int countB = 0;
    // Counter for number of students who get grade B


    // ======================================================
    // CATEGORY: Calculate Total, Grade, Highest, Lowest
    // Purpose : Process each student's results
    // ======================================================

    for (int i = 0; i < STUDENTS; i++) {
        // Loop through each student

        total[i] = marks[i][0] + marks[i][1] + marks[i][2];
        // Calculate the total weighted score

        grade[i] = Check_Grade(total[i]);
        // Determine grade based on total score

        if (grade[i] == 'A') {
            countA++;
            // Increase A counter if student gets A
        } 
        else if (grade[i] == 'B') {
            countB++;
            // Increase B counter if student gets B
        }

        if (total[i] > total[indexHighest]) {
            indexHighest = i;
            // Update highest scoring student index
        }

        if (total[i] < total[indexLowest]) {
            indexLowest = i;
            // Update lowest scoring student index
        }
    }


    // ======================================================
    // CATEGORY: Table Display Formatting
    // Purpose : Set output format and print header
    // ======================================================

    cout << fixed << setprecision(2);
    // Display all decimal numbers with 2 decimal places

    cout << left
         << setw(15) << "Student Name"
         << setw(10) << "TP"
         << setw(12) << "Quiz(20)"
         << setw(14) << "Mid(50)"
         << setw(14) << "Final(30)"
         << setw(14) << "Total(100)"
         << setw(8)  << "Grade"
         << endl;
    // Print table header with aligned columns

    cout << string(87, '-') << endl;
    // Print 87 dash characters as separator line


    // ======================================================
    // CATEGORY: Display Student Result Table
    // Purpose : Print each student's processed results
    // ======================================================

    for (int i = 0; i < STUDENTS; i++) {
        // Loop through each student

        cout << left
             << setw(15) << names[i]
             // Print student name

             << setw(10) << tps[i]
             // Print TP number

             << setw(12) << marks[i][0]
             // Print weighted quiz marks out of 20

             << setw(14) << marks[i][1]
             // Print weighted mid-term marks out of 50

             << setw(14) << marks[i][2]
             // Print weighted final exam marks out of 30

             << setw(14) << total[i]
             // Print total marks out of 100

             << setw(8)  << grade[i]
             // Print grade letter

             << endl;
    }

    cout << endl;
    // Print blank line after table


    // ======================================================
    // CATEGORY: Summary Display
    // Purpose : Show highest, lowest, and grade counters
    // ======================================================

    cout << "Highest scoring student: " << names[indexHighest]
         << " (" << tps[indexHighest] << "), Total = "
         << total[indexHighest] << ", Grade = " << grade[indexHighest] << endl;
    // Display highest scoring student summary

    cout << "Lowest scoring student:  " << names[indexLowest]
         << " (" << tps[indexLowest] << "), Total = "
         << total[indexLowest] << ", Grade = " << grade[indexLowest] << endl;
    // Display lowest scoring student summary

    cout << "Number of students with grade A: " << countA << endl;
    // Display number of students who got grade A

    cout << "Number of students with grade B: " << countB << endl;
    // Display number of students who got grade B


    // ======================================================
    // CATEGORY: Program Termination
    // Purpose : End the program successfully
    // ======================================================

    return 0;
    // Return 0 indicates successful program execution
}
