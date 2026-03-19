// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input/output,
//           formatting, and spacing control
// ==========================================================

#include <iostream>   // Allows use of input/output objects such as cin and cout
#include <iomanip>    // Allows use of formatting functions such as setw()
#include <string>     // Allows use of the string data type

using namespace std;  // Allows us to use cout, cin, setw directly without std::


// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Tell the compiler these functions exist before main()
// ==========================================================

int YearInputValidation();
// Ask the user to enter a year and return a valid year value

int MonthInputValidation();
// Ask the user to enter a month and return a valid month value (1 to 12)

bool IsLeapYear(int YearValue);
// Check whether the given year is a leap year
// Returns true if leap year, false otherwise

int FindDaysInMonth(int MonthValue, int YearValue, string &MonthName);
// Determine the number of days in the selected month
// Also update MonthName through pass-by-reference

int GetStartDay(int YearValue, int MonthValue);
// Calculate which weekday the 1st day of the month falls on
// Return value: 0 = Sunday, 1 = Monday, ..., 6 = Saturday

void DisplayCalendar(int YearValue, int MonthValue, string MonthName, int DaysInMonth, int StartDay);
// Display the full calendar in table format



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    int YearValue;
    // Store the year entered by the user

    int MonthValue;
    // Store the month entered by the user

    int DaysInMonth;
    // Store the total number of days in the selected month

    int StartDay;
    // Store the starting weekday of the selected month

    string MonthName;
    // Store the month name such as "January" or "June"

    int UserChoice;
    // Store the user's choice to continue or stop


    // ======================================================
    // CATEGORY: Repetition Loop
    // Purpose : Allow the user to display multiple calendars
    // ======================================================

    do
    {
        YearValue = YearInputValidation();
        // Call function to get a valid year from the user

        MonthValue = MonthInputValidation();
        // Call function to get a valid month from the user

        DaysInMonth = FindDaysInMonth(MonthValue, YearValue, MonthName);
        // Find the number of days in that month
        // Also update MonthName with the correct month text

        StartDay = GetStartDay(YearValue, MonthValue);
        // Calculate which weekday the 1st of the month starts on

        DisplayCalendar(YearValue, MonthValue, MonthName, DaysInMonth, StartDay);
        // Display the formatted monthly calendar

        cout << endl;
        // Print a blank line for cleaner output spacing

        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        // Ask user whether they want to continue

        cin >> UserChoice;
        // Read the user's choice

        cout << endl;
        // Print another blank line for spacing

    } while (UserChoice == 1);
    // Repeat only if user enters 1

    return 0;
    // End the program successfully
}



// ==========================================================
// CATEGORY: Year Input Validation Function
// Purpose : Ask user for a valid year and reject invalid input
// ==========================================================

int YearInputValidation()
{
    int YearValue;
    // Variable to temporarily store the user's year input

    while (true)
    // Keep asking until valid input is entered
    {
        cout << "Enter calendar's year: ";
        // Prompt user to enter the year

        cin >> YearValue;
        // Read the year from the keyboard

        if (YearValue >= 1)
        // Check whether the year is a positive number
        {
            break;
            // Exit the loop if input is valid
        }
        else
        {
            cout << "Invalid year. Please enter a positive number." << endl;
            // Show error message if year is invalid
        }
    }

    return YearValue;
    // Return the valid year to the calling function
}



// ==========================================================
// CATEGORY: Month Input Validation Function
// Purpose : Ask user for a valid month between 1 and 12
// ==========================================================

int MonthInputValidation()
{
    int MonthValue;
    // Variable to temporarily store the user's month input

    while (true)
    // Keep looping until valid month is entered
    {
        cout << "Enter calendar's month: ";
        // Prompt user to enter the month

        cin >> MonthValue;
        // Read month input

        if (MonthValue >= 1 && MonthValue <= 12)
        // Check whether month is between 1 and 12
        {
            break;
            // Exit loop if valid
        }
        else
        {
            cout << "Invalid month. Please enter a value between 1 and 12." << endl;
            // Display error message if invalid
        }
    }

    return MonthValue;
    // Return the valid month value
}



// ==========================================================
// CATEGORY: Leap Year Checking Function
// Purpose : Determine whether a year is a leap year
// ==========================================================

bool IsLeapYear(int YearValue)
{
    if (YearValue % 400 == 0)
    // If divisible by 400, it is a leap year
        return true;

    else if (YearValue % 100 == 0)
    // If divisible by 100 but not 400, it is not a leap year
        return false;

    else if (YearValue % 4 == 0)
    // If divisible by 4 but not 100, it is a leap year
        return true;

    else
    // Otherwise, it is not a leap year
        return false;
}



// ==========================================================
// CATEGORY: Days In Month Function
// Purpose : Determine number of days in a month and set month name
// ==========================================================

int FindDaysInMonth(int MonthValue, int YearValue, string &MonthName)
{
    int TotalDaysInMonth;
    // Store the number of days for the selected month

    switch (MonthValue)
    // Check month one by one
    {
        case 1:
            MonthName = "January";
            // Set month name to January
            TotalDaysInMonth = 31;
            // January has 31 days
            break;

        case 2:
            MonthName = "February";
            // Set month name to February

            if (IsLeapYear(YearValue))
                TotalDaysInMonth = 29;
            // February has 29 days in a leap year
            else
                TotalDaysInMonth = 28;
            // February has 28 days in a normal year
            break;

        case 3:
            MonthName = "March";
            TotalDaysInMonth = 31;
            break;

        case 4:
            MonthName = "April";
            TotalDaysInMonth = 30;
            break;

        case 5:
            MonthName = "May";
            TotalDaysInMonth = 31;
            break;

        case 6:
            MonthName = "June";
            TotalDaysInMonth = 30;
            break;

        case 7:
            MonthName = "July";
            TotalDaysInMonth = 31;
            break;

        case 8:
            MonthName = "August";
            TotalDaysInMonth = 31;
            break;

        case 9:
            MonthName = "September";
            TotalDaysInMonth = 30;
            break;

        case 10:
            MonthName = "October";
            TotalDaysInMonth = 31;
            break;

        case 11:
            MonthName = "November";
            TotalDaysInMonth = 30;
            break;

        case 12:
            MonthName = "December";
            TotalDaysInMonth = 31;
            break;

        default:
            MonthName = "Unknown";
            // Default fallback month name
            TotalDaysInMonth = 30;
            // Default fallback number of days
            break;
    }

    return TotalDaysInMonth;
    // Return the total number of days in the selected month
}



// ==========================================================
// CATEGORY: Start Day Calculation Function
// Purpose : Calculate the weekday of the 1st day of the month
// ==========================================================

int GetStartDay(int YearValue, int MonthValue)
{
    int DayValue = 1;
    // Always calculate the first day of the month

    int WorkingYearValue = YearValue;
    // Copy year into a working variable

    int WorkingMonthValue = MonthValue;
    // Copy month into a working variable

    if (WorkingMonthValue == 1 || WorkingMonthValue == 2)
    // January and February are treated as month 13 and 14
    {
        WorkingMonthValue += 12;
        // Convert January to 13 and February to 14

        WorkingYearValue -= 1;
        // Reduce the year by 1
    }

    int YearLastTwoDigits = WorkingYearValue % 100;
    // Extract last two digits of the year

    int YearFirstTwoDigits = WorkingYearValue / 100;
    // Extract first two digits of the year

    int DayCodeValue =
        (DayValue + (13 * (WorkingMonthValue + 1)) / 5 + YearLastTwoDigits +
         (YearLastTwoDigits / 4) + (YearFirstTwoDigits / 4) + 5 * YearFirstTwoDigits) % 7;
    // Apply Zeller-like formula to calculate day code

    int DayOfWeekValue = (DayCodeValue + 6) % 7;
    // Adjust formula result so that:
    // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    return DayOfWeekValue;
    // Return starting weekday
}



// ==========================================================
// CATEGORY: Calendar Display Function
// Purpose : Print the full monthly calendar in formatted layout
// ==========================================================

void DisplayCalendar(int YearValue, int MonthValue, string MonthName, int DaysInMonth, int StartDay)
{
    cout << endl;
    // Print blank line before calendar output

    cout << "Calendar Title : " << MonthName << " - " << YearValue << endl;
    // Display calendar title with month name and year

    cout << "----------------------------------------------------------" << endl;
    // Print top border line

    cout << setw(8) << "Sunday"
         << setw(8) << "Monday"
         << setw(9) << "Tuesday"
         << setw(10) << "Wednesday"
         << setw(9) << "Thursday"
         << setw(8) << "Friday"
         << setw(9) << "Saturday" << endl;
    // Print weekday headers with spacing alignment

    cout << "----------------------------------------------------------" << endl;
    // Print separator line below header

    int CurrentPosition = 0;
    // Track current column position in the week row

    for (int PositionIndex = 0; PositionIndex < StartDay; PositionIndex++)
    {
        cout << setw(8) << " ";
        // Print blank spaces before day 1 starts

        CurrentPosition++;
        // Move column position forward
    }

    for (int DayNumber = 1; DayNumber <= DaysInMonth; DayNumber++)
    {
        cout << setw(8) << DayNumber;
        // Print day number with spacing

        CurrentPosition++;
        // Move to next column

        if (CurrentPosition == 7)
        {
            cout << endl;
            // Move to next row after Saturday

            CurrentPosition = 0;
            // Reset column count for new week row
        }
    }

    cout << endl;
    // Print ending line break after all dates are shown

    cout << "----------------------------------------------------------" << endl;
    // Print bottom border line
}
